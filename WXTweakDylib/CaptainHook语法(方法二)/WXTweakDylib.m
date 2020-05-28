//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  WXTweakDylib.m
//  WXTweakDylib
//
//  Created by 宋澎 on 2020/5/22.
//  Copyright (c) 2020 宋澎. All rights reserved.
//

#import "WXTweakDylib.h"
#import <CaptainHook/CaptainHook.h>
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>
#import <MDCycriptManager.h>
#import "OCMethodTrace.h"
#import "MDMethodTrace.h"
#import "WXMacro.h"
#import "WXRedEnvelop.h"
#import "NSMutableDictionary+Safe.h"

CHConstructor{
    printf(INSERT_SUCCESS_WELCOME);
    
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
        
#ifndef __OPTIMIZE__
        CYListenServer(6666);

        MDCycriptManager* manager = [MDCycriptManager sharedInstance];
        [manager loadCycript:NO];

        NSError* error;
        NSString* result = [manager evaluateCycript:@"UIApp" error:&error];
        NSLog(@"result: %@", result);
        if(error.code != 0){
            NSLog(@"error: %@", error.localizedDescription);
        }
        
        
//        [[MDMethodTrace sharedInstance] addClassTrace:@"BaseMsgContentViewController"];
        
//        OCMethodTrace* methodTrace = [OCMethodTrace sharedInstance];
//        Class msgClass = NSClassFromString(@"BaseMsgContentViewController");
//        [methodTrace traceMethodWithClass:[msgClass class] condition:^BOOL(SEL sel) {
//            return YES;
//        } before:^(id target, __unsafe_unretained Class cls, SEL sel, NSArray *args, int deep) {
//            NSLog(@"before BaseMsgContentViewController ---方法名---sel:%@   ---参数---args:%@",  NSStringFromSelector(sel), args);
//        } after:^(id target, __unsafe_unretained Class cls, SEL sel, id ret, int deep, NSTimeInterval interval) {
//
//        }];

#endif
        
    }];
}

#pragma mark - Hook接受消息方法

//-(void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2
CHDeclareClass(CMessageMgr)
CHOptimizedMethod2(self, void, CMessageMgr, AsyncOnAddMsg, NSString *, msg, MsgWrap, CMessageWrap *, wrap){
    CHSuper2(CMessageMgr, AsyncOnAddMsg, msg, MsgWrap, wrap);
    NSLog(@"CMessageMgr-hook-成功");
    NSInteger uiMessageType = [wrap m_uiMessageType];
    BOOL isAutoRed = [SP_Defaults boolForKey:SP_AutoKey];
    if (uiMessageType == 49 && isAutoRed){
        //收到红包消息
        NSString *nsFromUsr = [wrap m_nsFromUsr];
        WCPayInfoItem *payInfoItem = [wrap m_oWCPayInfoItem];
        if (payInfoItem == nil){
            return;
        }

        NSString * m_c2cNativeUrl = [payInfoItem m_c2cNativeUrl];
        if (m_c2cNativeUrl == nil){
            NSLog(@"m_c2cNativeUrl是nil !!!!!!!!!");
            return;
        }
        NSInteger length = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];
        NSString *subString = [m_c2cNativeUrl substringFromIndex: length];
        NSDictionary *dict = [objc_getClass("WCBizUtil") dictionaryWithDecodedComponets:subString separator:@"&"];
        NSMutableDictionary *mutableDict =  [NSMutableDictionary dictionary];
        [mutableDict setObject:@"1" forKey:@"msgType"];
        NSString *sendId = dict[@"sendid"];
        [mutableDict safeSetObject:sendId forKey:@"sendId"];
        NSString *channelId = dict[@"channelid"];
        [mutableDict safeSetObject:channelId forKey:@"channelId"];

        Class contactMgrClass = [objc_getClass("CContactMgr") class];
        CContactMgr *service = [[objc_getClass("MMServiceCenter") defaultCenter] getService:contactMgrClass];
        
        CContact *contact =  [service getSelfContact];
        NSString *displayName = [contact getContactDisplayName];
        [mutableDict safeSetObject:displayName forKey:@"nickName"];
        NSString *headerImg =  [contact m_nsHeadImgUrl];
        [mutableDict safeSetObject:headerImg forKey:@"headImg"];

        id nativeUrl = [payInfoItem m_c2cNativeUrl];
        [mutableDict safeSetObject:nativeUrl forKey:@"nativeUrl"];
        
        BOOL (^isSender)() = ^BOOL() {
            return [wrap.m_nsFromUsr isEqualToString:contact.m_nsUsrName];
        };
        /** 是否自己在群聊中发消息 */
        BOOL (^isGroupSender)() = ^BOOL() {
            return isSender() && [wrap.m_nsToUsr rangeOfString:@"chatroom"].location != NSNotFound;
        };
        NSString * sessionUserName = isGroupSender() ? wrap.m_nsToUsr : wrap.m_nsFromUsr;
        [mutableDict safeSetObject:sessionUserName forKey:@"sessionUserName"];
        

        if ([nsFromUsr hasSuffix:@"@chatroom"]){
            //群红包
            [mutableDict safeSetObject:@"0" forKey:@"inWay"]; //0:群聊，1：单聊
        }else {
            //个人红包
            [mutableDict safeSetObject:@"1" forKey:@"inWay"]; //0:群聊，1：单聊
        }

        [mutableDict safeSetObject:@"0" forKey:@"agreeDuty"];

        if (sendId.length > 0)   {
            SPRedParameter *redParameter = [[SPRedParameter alloc] init];
            redParameter.params = mutableDict;
            [[SPRedManager sharedInstance] addParams:redParameter];
        }
        NSLog(@"SPRedManager------mutableDict=%@",mutableDict);

        Class redEnvelopesClass  =  [objc_getClass("WCRedEnvelopesLogicMgr") class];
        WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[objc_getClass("MMServiceCenter") defaultCenter] getService: redEnvelopesClass];
        [redEnvelopesLogicMgr ReceiverQueryRedEnvelopesRequest:mutableDict];
    }
}
CHConstructor{
    CHLoadLateClass(CMessageMgr);
    CHClassHook2(CMessageMgr,AsyncOnAddMsg,MsgWrap);
}

#pragma mark - Hook红包通用响应

//- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)hongBaoRes Request:(HongBaoReq *)hongBaoReq{
CHDeclareClass(WCRedEnvelopesLogicMgr)
CHOptimizedMethod2(self, void, WCRedEnvelopesLogicMgr, OnWCToHongbaoCommonResponse, HongBaoRes*, arg1, Request, HongBaoReq *, arg2){
    
    CHSuper2(WCRedEnvelopesLogicMgr, OnWCToHongbaoCommonResponse, arg1, Request, arg2);
    
    NSDictionary *bufferDic = [[[NSString alloc] initWithData:arg1.retText.buffer encoding:NSUTF8StringEncoding] JSONDictionary];

    if (arg1 == nil || bufferDic == nil){
        return;
    }
    if (arg2 == nil){
        return;
    }
    if (arg2.cgiCmd == 3){
        int receiveStatus = [bufferDic[@"receiveStatus"] intValue];
        int hbStatus = [bufferDic[@"hbStatus"] intValue];
        if (receiveStatus == 0 && hbStatus == 2){
            // 没有timingIdentifier字段会被判定为使用外挂
            NSString *timingIdentifier = bufferDic[@"timingIdentifier"];
            NSString *sendId = bufferDic[@"sendId"];
            if (sendId.length > 0 && timingIdentifier.length > 0){
                SPRedParameter *redParameter = [[SPRedManager sharedInstance] getParams:sendId];
                if (redParameter != nil){
                    redParameter.timingIdentifier = timingIdentifier;
                    // 抢的太快也会被判定为使用外挂
                    sleep(1);
                    
                    Class redLogicMgrClass = [objc_getClass("WCRedEnvelopesLogicMgr") class];
                    WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[[objc_getClass("MMServiceCenter") class] defaultCenter] getService: redLogicMgrClass];
                    if (nil != redEnvelopesLogicMgr){
                        [redEnvelopesLogicMgr OpenRedEnvelopesRequest:redParameter.params];
                    }
                }
            }
        }
    }
}
CHConstructor{
    CHLoadLateClass(WCRedEnvelopesLogicMgr);
    CHClassHook2(WCRedEnvelopesLogicMgr,OnWCToHongbaoCommonResponse,Request);
}

#pragma mark - Hook微信的发现界面UI
CHDeclareClass(FindFriendEntryViewController)

//- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
CHOptimizedMethod1(self, NSInteger, FindFriendEntryViewController, numberOfSectionsInTableView, UITableView *, tableView){
    NSInteger oldCount = CHSuper1(FindFriendEntryViewController, numberOfSectionsInTableView, tableView);
    return oldCount + 1;
}

//- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
CHOptimizedMethod2(self, UITableViewCell *, FindFriendEntryViewController, tableView, UITableView *, tableView, cellForRowAtIndexPath, NSIndexPath *, indexPath)
{
    NSInteger totalSection = [self numberOfSectionsInTableView: tableView];

    if ([indexPath section] != totalSection - 1){
        UITableViewCell *cell = CHSuper2(FindFriendEntryViewController, tableView, tableView, cellForRowAtIndexPath, indexPath);
        return cell;
    }

    NSString *cellID = ([indexPath row] == 0) ? @"sp_autoCellID" : @"sp_exitWXID";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellID];
    if (cell == nil){
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellID];
        cell.backgroundColor = [UIColor whiteColor];
        cell.imageView.image = [UIImage imageNamed:@"skull.png"];
    }
    if ([indexPath row] == 0){
        //抢红包
        cell.textLabel.text = @"自动抢红包";
        UISwitch *switchView = [[UISwitch alloc] init];
        switchView.on = [SP_Defaults boolForKey:SP_AutoKey];
        cell.accessoryView = switchView;
        [switchView addTarget:self action:@selector(sp_autoRed:) forControlEvents:UIControlEventValueChanged];

    }else if ([indexPath row] == 1){
        //退出微信
        cell.textLabel.text = @"退出微信";
    }
    return cell;
}

//- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
CHOptimizedMethod2(self, NSInteger, FindFriendEntryViewController, tableView, UITableView *, tableView, numberOfRowsInSection, NSInteger, section){
    NSInteger totalSection = [self numberOfSectionsInTableView: tableView];
    if (section == totalSection - 1){
        return 2;
    }else{
        return CHSuper2(FindFriendEntryViewController, tableView, tableView, numberOfRowsInSection, section);
    }
}

//- (double)tableView:(UITableView *)tableView heightForRowAtIndexPath:(id)indexPath
CHOptimizedMethod2(self, double, FindFriendEntryViewController, tableView, UITableView *, tableView, heightForRowAtIndexPath, NSIndexPath *, indexPath){
    if ([indexPath section] != [self numberOfSectionsInTableView:tableView] - 1) {
        return  CHSuper2(FindFriendEntryViewController, tableView, tableView, heightForRowAtIndexPath, indexPath);
    }
    return 56;
}

//- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
CHOptimizedMethod2(self, void, FindFriendEntryViewController, tableView, UITableView *, tableView, didSelectRowAtIndexPath, NSIndexPath *, indexPath){
    if ([indexPath section] != [self numberOfSectionsInTableView:tableView] - 1) {
        CHSuper2(FindFriendEntryViewController, tableView, tableView, didSelectRowAtIndexPath, indexPath);
        return;
    }

    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if ([indexPath row] == 0){
        //自动抢红包
    }else if ([indexPath row] == 1){
        // 终止进程
        exit(0);
        // abort();
    }
}

CHDeclareMethod1(void, FindFriendEntryViewController, sp_autoRed, UISwitch *, switchView){
    [SP_Defaults setBool:switchView.on forKey:SP_AutoKey];
    [SP_Defaults synchronize];
}

CHConstructor{
    CHLoadLateClass(FindFriendEntryViewController);
    CHClassHook1(FindFriendEntryViewController, numberOfSectionsInTableView);
    CHClassHook2(FindFriendEntryViewController, tableView, cellForRowAtIndexPath);
    CHClassHook2(FindFriendEntryViewController, tableView, numberOfRowsInSection);
    CHClassHook2(FindFriendEntryViewController, tableView, heightForRowAtIndexPath);
    CHClassHook2(FindFriendEntryViewController, tableView, didSelectRowAtIndexPath);
}
