////
////  WXTweakDylib.h
////  WXTweak
////
////  Created by 宋澎 on 2020/5/22.
////  Copyright © 2020 宋澎. All rights reserved.
////
//
//#import <UIKit/UIKit.h>
//#import <Foundation/Foundation.h>
//#import "WXMacro.h"
//#import "WXRedEnvelop.h"
//#import "NSMutableDictionary+Safe.h"
//
//%hook CMessageMgr
//
////- (void)AsyncOnAddMsg:(NSString *)msg MsgWrap:(CMessageWrap *)wrap {
//- (void)AsyncOnAddMsg:(NSString *)msg MsgWrap:(id)wrap {
//    %orig;
//
//    CMessageWrap * wrap1 = wrap;
//    NSInteger uiMessageType = [wrap1 m_uiMessageType];
//    BOOL isAutoRed = [SP_Defaults boolForKey:SP_AutoKey];
//    if (uiMessageType == 49 && isAutoRed){
//        //收到红包消息
//        NSString *nsFromUsr = [wrap m_nsFromUsr];
//        WCPayInfoItem *payInfoItem = [wrap m_oWCPayInfoItem];
//        if (payInfoItem == nil){
//            return;
//        }
//
//        NSString * m_c2cNativeUrl = [payInfoItem m_c2cNativeUrl];
//        if (m_c2cNativeUrl == nil){
//            NSLog(@"m_c2cNativeUrl是nil !!!!!!!!!");
//            return;
//        }
//        NSInteger length = [@"wxpay://c2cbizmessagehandler/hongbao/receivehongbao?" length];
//        NSString *subString = [m_c2cNativeUrl substringFromIndex: length];
//        NSDictionary *dict =  [%c(WCBizUtil) dictionaryWithDecodedComponets:subString separator:@"&"];
//        NSMutableDictionary *mutableDict =  [NSMutableDictionary dictionary];
//        [mutableDict setObject:@"1" forKey:@"msgType"];
//        NSString *sendId = dict[@"sendid"];
//        [mutableDict safeSetObject:sendId forKey:@"sendId"];
//        NSString *channelId = dict[@"channelid"];
//        [mutableDict safeSetObject:channelId forKey:@"channelId"];
//
//        CContactMgr *service =  [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
//        CContact *contact =  [service getSelfContact];
//        NSString *displayName = [contact getContactDisplayName];
//        [mutableDict safeSetObject:displayName forKey:@"nickName"];
//        NSString *headerImg =  [contact m_nsHeadImgUrl];
//        [mutableDict safeSetObject:headerImg forKey:@"headImg"];
//
//        id nativeUrl = [payInfoItem m_c2cNativeUrl];
//        [mutableDict safeSetObject:nativeUrl forKey:@"nativeUrl"];
//
//        MMMsgLogicManager *logicManager =  [[%c(MMServiceCenter) defaultCenter] getService:[%c(MMMsgLogicManager) class]];
//        BaseMsgContentLogicController *logicController = [logicManager GetCurrentLogicController];
//        id m_contact = [logicController m_contact];
//        id sessionUserName = [m_contact m_nsUsrName];
//        [mutableDict safeSetObject:sessionUserName forKey:@"sessionUserName"];
//
//        if ([nsFromUsr hasSuffix:@"@chatroom"]){
//            //群红包
//            [mutableDict safeSetObject:@"0" forKey:@"inWay"]; //0:群聊，1：单聊
//        }else {
//            //个人红包
//            [mutableDict safeSetObject:@"1" forKey:@"inWay"]; //0:群聊，1：单聊
//        }
//
//        [mutableDict safeSetObject:@"0" forKey:@"agreeDuty"];
//
//        if (sendId.length > 0)   {
//            SPRedParameter *redParameter = [[SPRedParameter alloc] init];
//            redParameter.params = mutableDict;
//            [[SPRedManager sharedInstance] addParams:redParameter];
//        }
//        NSLog(@"SPRedManager------mutableDict=%@",mutableDict);
//
//        WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
//        [redEnvelopesLogicMgr ReceiverQueryRedEnvelopesRequest:mutableDict];
//    }
//}
//%end
//
////- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)hongBaoRes Request:(HongBaoReq *)hongBaoReq{
//%hook WCRedEnvelopesLogicMgr
//
//- (void)OnWCToHongbaoCommonResponse:(id)hongBaoRes Request:(id)hongBaoReq{
//    %orig;
//    HongBaoRes * response = hongBaoRes;
//    HongBaoReq * request = hongBaoReq;
//    NSError *err;
//    NSDictionary *bufferDic = [NSJSONSerialization JSONObjectWithData:response.retText.buffer options:NSJSONReadingMutableContainers error:&err];
//
//    if (response == nil || bufferDic == nil){
//        return;
//    }
//    if (request == nil){
//        return;
//    }
//    if (request.cgiCmd == 3){
//        int receiveStatus = [bufferDic[@"receiveStatus"] intValue];
//        int hbStatus = [bufferDic[@"hbStatus"] intValue];
//        /*
//        可抢状态：cgiCmdid = 3 自己可抢 ， cgiCmdid = 5 自己已抢过
//        红包状态：hbStatus = 2 可抢红包， hbStatus = 4 自己抢过 ，hbStatus=5 过期红包
//        是否自己发的：“isSender”:0 别人发的，“isSender”:1 自己发的
//        是否群红包：“hbType”:1 群红包，“hbType”:0 个人红包
//        自己是否抢过：“receiveStatus”:0 未抢过 ， “receiveStatus”:2 已抢过
//         */
//        if (receiveStatus == 0 && hbStatus == 2){
//            // 没有timingIdentifier字段会被判定为使用外挂
//            NSString *timingIdentifier = bufferDic[@"timingIdentifier"];
//            NSString *sendId = bufferDic[@"sendId"];
//            if (sendId.length > 0 && timingIdentifier.length > 0){
//                SPRedParameter *redParameter = [[SPRedManager sharedInstance] getParams:sendId];
//                if (redParameter != nil){
//                    redParameter.timingIdentifier = timingIdentifier;
//                    // 抢的太快也会被判定为使用外挂
//                    sleep(1);
//                    WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
//                    if (nil != redEnvelopesLogicMgr){
//                        [redEnvelopesLogicMgr OpenRedEnvelopesRequest:redParameter.params];
//                    }
//
//                }
//            }
//        }
//    }
//
//}
//%end
