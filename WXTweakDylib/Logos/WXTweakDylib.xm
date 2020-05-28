//
//  WXTweakDylib.h
//  WXTweak
//
//  Created by 宋澎 on 2020/5/22.
//  Copyright © 2020 宋澎. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "NSMutableDictionary+Safe.h"
#import "WXMacro.h"

@interface WCPayInfoItem
@property(copy, nonatomic) NSString *m_c2cNativeUrl;
@end

@interface CMessageWrap
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(retain, nonatomic) NSString *m_nsBizChatId; // @synthesize m_nsBizChatId;
@property(retain, nonatomic) NSString *m_nsBizClientMsgID; // @synthesize m_nsBizClientMsgID;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(retain, nonatomic) NSString *m_nsAtUserList; // @synthesize m_nsAtUserList;
@property(retain, nonatomic) NSString *m_nsKFWorkerOpenID; // @synthesize m_nsKFWorkerOpenID;
@property(retain, nonatomic) NSString *m_nsDisplayName; // @synthesize m_nsDisplayName;
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;
@property(retain, nonatomic) NSString *m_nsPushContent; // @synthesize m_nsPushContent;
@end

@interface CContactMgr
- (id)getSelfContact;
@end

@interface CContact
@property(copy, nonatomic) NSString *m_nsHeadImgUrl;
@property(copy, nonatomic) NSString *m_nsUsrName;
- (NSString *)getContactDisplayName;
@end

@interface WCBizUtil
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
@end

@interface MMServiceCenter
+ (id)defaultCenter;
- (id)getService:(Class)arg1;
@end

@interface MMMsgLogicManager
- (id)GetCurrentLogicController;
@end

@interface WCRedEnvelopesLogicMgr
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
@end

@interface CBaseContact
@property(copy, nonatomic) NSString *m_nsUsrName;
@end

@interface BaseMsgContentLogicController
@property(strong, nonatomic) CBaseContact *m_contact;
@end

@interface SKBuiltinBuffer_t
@property(retain, nonatomic) NSData *buffer;
@property(nonatomic) unsigned int iLen;
@end

@interface HongBaoRes
@property(retain, nonatomic) SKBuiltinBuffer_t *retText;
@end

@interface HongBaoReq
@property(nonatomic) unsigned int cgiCmd;
@property(nonatomic) unsigned int outPutType;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqText;
@end


@interface SPRedParameter : NSObject
@property (copy, nonatomic) NSString *sendId;
@property (copy, nonatomic) NSString *timingIdentifier;
@property (strong, nonatomic) NSMutableDictionary *params;
@end
@implementation SPRedParameter
- (NSString *)sendId{
    return self.params[@"sendId"];
}

- (void)setTimingIdentifier:(NSString *)timingIdentifier{
    [self.params safeSetObject:timingIdentifier forKey: @"timingIdentifier"];
}
@end

@interface SPRedManager: NSObject
@property (nonatomic, strong) NSMutableArray *array;

+ (instancetype) sharedInstance;
- (void)addParams:(SPRedParameter *) params;
- (SPRedParameter *) getParams:(NSString *) sendId;
@end

@implementation SPRedManager
+ (instancetype) sharedInstance{
    static SPRedManager *_instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _instance = [[SPRedManager alloc] init];
    });
    return _instance;
}

- (instancetype)init{
    if (self = [super init]){
        _array = [[NSMutableArray alloc] init];
    }
    return self;
}

//添加对象
- (void)addParams:(SPRedParameter *) params{
    @synchronized(self) {
        [_array addObject:params];
    }
}
//获得对象
- (SPRedParameter *) getParams:(NSString *) sendId{
    @synchronized(self) {
        NSInteger resultIndex = -1;
        for (NSInteger index = 0 ; index < self.array.count ; index++) {
            SPRedParameter *params = self.array[index];
            if ([params.sendId isEqualToString:sendId]){ //找到了
                resultIndex = index;
                break;
            }
        }
        if (resultIndex != -1 ){
            SPRedParameter *params = self.array[resultIndex];
            [self.array removeObjectAtIndex:resultIndex];
            return params;
        }
        return nil;
    }
}

@end

%hook CMessageMgr

//- (void)AsyncOnAddMsg:(NSString *)msg MsgWrap:(CMessageWrap *)wrap {
- (void)AsyncOnAddMsg:(NSString *)msg MsgWrap:(id)wrap {
    %orig;
    
    CMessageWrap * wrap1 = wrap;
    NSInteger uiMessageType = [wrap1 m_uiMessageType];
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
        NSDictionary *dict =  [%c(WCBizUtil) dictionaryWithDecodedComponets:subString separator:@"&"];
        NSMutableDictionary *mutableDict =  [NSMutableDictionary dictionary];
        [mutableDict setObject:@"1" forKey:@"msgType"];
        NSString *sendId = dict[@"sendid"];
        [mutableDict safeSetObject:sendId forKey:@"sendId"];
        NSString *channelId = dict[@"channelid"];
        [mutableDict safeSetObject:channelId forKey:@"channelId"];
        
        CContactMgr *service =  [[%c(MMServiceCenter) defaultCenter] getService:[%c(CContactMgr) class]];
        CContact *contact =  [service getSelfContact];
        NSString *displayName = [contact getContactDisplayName];
        [mutableDict safeSetObject:displayName forKey:@"nickName"];
        NSString *headerImg =  [contact m_nsHeadImgUrl];
        [mutableDict safeSetObject:headerImg forKey:@"headImg"];
        
        id nativeUrl = [payInfoItem m_c2cNativeUrl];
        [mutableDict safeSetObject:nativeUrl forKey:@"nativeUrl"];
        
        MMMsgLogicManager *logicManager =  [[%c(MMServiceCenter) defaultCenter] getService:[%c(MMMsgLogicManager) class]];
        BaseMsgContentLogicController *logicController = [logicManager GetCurrentLogicController];
        id m_contact = [logicController m_contact];
        id sessionUserName = [m_contact m_nsUsrName];
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
        
        WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
        [redEnvelopesLogicMgr ReceiverQueryRedEnvelopesRequest:mutableDict];
    }
}
%end

//- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)hongBaoRes Request:(HongBaoReq *)hongBaoReq{
%hook WCRedEnvelopesLogicMgr

- (void)OnWCToHongbaoCommonResponse:(id)hongBaoRes Request:(id)hongBaoReq{
    %orig;
    HongBaoRes * response = hongBaoRes;
    HongBaoReq * request = hongBaoReq;
    NSError *err;
    NSDictionary *bufferDic = [NSJSONSerialization JSONObjectWithData:response.retText.buffer options:NSJSONReadingMutableContainers error:&err];
    
    if (response == nil || bufferDic == nil){
        return;
    }
    if (request == nil){
        return;
    }
    if (request.cgiCmd == 3){
        int receiveStatus = [bufferDic[@"receiveStatus"] intValue];
        int hbStatus = [bufferDic[@"hbStatus"] intValue];
        /*
        可抢状态：cgiCmdid = 3 自己可抢 ， cgiCmdid = 5 自己已抢过
        红包状态：hbStatus = 2 可抢红包， hbStatus = 4 自己抢过 ，hbStatus=5 过期红包
        是否自己发的：“isSender”:0 别人发的，“isSender”:1 自己发的
        是否群红包：“hbType”:1 群红包，“hbType”:0 个人红包
        自己是否抢过：“receiveStatus”:0 未抢过 ， “receiveStatus”:2 已抢过
         */
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
                    WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[%c(MMServiceCenter) defaultCenter] getService:[%c(WCRedEnvelopesLogicMgr) class]];
                    if (nil != redEnvelopesLogicMgr){
                        [redEnvelopesLogicMgr OpenRedEnvelopesRequest:redParameter.params];
                    }

                }
            }
        }
    }

}
%end
