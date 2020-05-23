#line 1 "/Users/songpeng/Desktop/WXTweak/WXTweakDylib/Logos/WXTweakDylib.xm"








#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "NSMutableDictionary+Safe.h"
#import "WXMacro.h"

@interface WCPayInfoItem
@property(copy, nonatomic) NSString *m_c2cNativeUrl;
@end

@interface CMessageWrap
@property(retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
@property(nonatomic) unsigned int m_uiMessageType; 
@property(retain, nonatomic) NSString *m_nsMsgSource; 
@property(retain, nonatomic) NSString *m_nsBizChatId; 
@property(retain, nonatomic) NSString *m_nsBizClientMsgID; 
@property(retain, nonatomic) NSString *m_nsContent; 
@property(retain, nonatomic) NSString *m_nsToUsr; 
@property(retain, nonatomic) NSString *m_nsFromUsr; 
@property(retain, nonatomic) NSString *m_nsAtUserList; 
@property(retain, nonatomic) NSString *m_nsKFWorkerOpenID; 
@property(retain, nonatomic) NSString *m_nsDisplayName; 
@property(retain, nonatomic) NSString *m_nsPattern; 
@property(retain, nonatomic) NSString *m_nsRealChatUsr; 
@property(retain, nonatomic) NSString *m_nsPushContent; 
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


- (void)addParams:(SPRedParameter *) params{
    @synchronized(self) {
        [_array addObject:params];
    }
}

- (SPRedParameter *) getParams:(NSString *) sendId{
    @synchronized(self) {
        NSInteger resultIndex = -1;
        for (NSInteger index = 0 ; index < self.array.count ; index++) {
            SPRedParameter *params = self.array[index];
            if ([params.sendId isEqualToString:sendId]){ 
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


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class CContactMgr; @class WCBizUtil; @class MMMsgLogicManager; @class WCRedEnvelopesLogicMgr; @class MMServiceCenter; @class CMessageMgr; 
static void (*_logos_orig$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$)(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, NSString *, id); static void _logos_method$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST, SEL, NSString *, id); static void (*_logos_orig$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$)(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesLogicMgr* _LOGOS_SELF_CONST, SEL, id, id); static void _logos_method$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesLogicMgr* _LOGOS_SELF_CONST, SEL, id, id); 
static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$MMServiceCenter(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("MMServiceCenter"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCRedEnvelopesLogicMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCRedEnvelopesLogicMgr"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$MMMsgLogicManager(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("MMMsgLogicManager"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$WCBizUtil(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("WCBizUtil"); } return _klass; }static __inline__ __attribute__((always_inline)) __attribute__((unused)) Class _logos_static_class_lookup$CContactMgr(void) { static Class _klass; if(!_klass) { _klass = objc_getClass("CContactMgr"); } return _klass; }
#line 155 "/Users/songpeng/Desktop/WXTweak/WXTweakDylib/Logos/WXTweakDylib.xm"



static void _logos_method$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$(_LOGOS_SELF_TYPE_NORMAL CMessageMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSString * msg, id wrap) {
    _logos_orig$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$(self, _cmd, msg, wrap);
    
    CMessageWrap * wrap1 = wrap;
    NSInteger uiMessageType = [wrap1 m_uiMessageType];
    BOOL isAutoRed = [SP_Defaults boolForKey:SP_AutoKey];
    if (uiMessageType == 49 && isAutoRed){
        
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
        NSDictionary *dict =  [_logos_static_class_lookup$WCBizUtil() dictionaryWithDecodedComponets:subString separator:@"&"];
        NSMutableDictionary *mutableDict =  [NSMutableDictionary dictionary];
        [mutableDict setObject:@"1" forKey:@"msgType"];
        NSString *sendId = dict[@"sendid"];
        [mutableDict safeSetObject:sendId forKey:@"sendId"];
        NSString *channelId = dict[@"channelid"];
        [mutableDict safeSetObject:channelId forKey:@"channelId"];
        
        CContactMgr *service =  [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$CContactMgr() class]];
        CContact *contact =  [service getSelfContact];
        NSString *displayName = [contact getContactDisplayName];
        [mutableDict safeSetObject:displayName forKey:@"nickName"];
        NSString *headerImg =  [contact m_nsHeadImgUrl];
        [mutableDict safeSetObject:headerImg forKey:@"headImg"];
        
        id nativeUrl = [payInfoItem m_c2cNativeUrl];
        [mutableDict safeSetObject:nativeUrl forKey:@"nativeUrl"];
        
        MMMsgLogicManager *logicManager =  [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$MMMsgLogicManager() class]];
        BaseMsgContentLogicController *logicController = [logicManager GetCurrentLogicController];
        id m_contact = [logicController m_contact];
        id sessionUserName = [m_contact m_nsUsrName];
        [mutableDict safeSetObject:sessionUserName forKey:@"sessionUserName"];
        
        if ([nsFromUsr hasSuffix:@"@chatroom"]){
            
            [mutableDict safeSetObject:@"0" forKey:@"inWay"]; 
        }else {
            
            [mutableDict safeSetObject:@"1" forKey:@"inWay"]; 
        }
        
        [mutableDict safeSetObject:@"0" forKey:@"agreeDuty"];
        
        if (sendId.length > 0)   {
            SPRedParameter *redParameter = [[SPRedParameter alloc] init];
            redParameter.params = mutableDict;
            [[SPRedManager sharedInstance] addParams:redParameter];
        }
        NSLog(@"SPRedManager------mutableDict=%@",mutableDict);
        
        WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$WCRedEnvelopesLogicMgr() class]];
        [redEnvelopesLogicMgr ReceiverQueryRedEnvelopesRequest:mutableDict];
    }
}





static void _logos_method$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$(_LOGOS_SELF_TYPE_NORMAL WCRedEnvelopesLogicMgr* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id hongBaoRes, id hongBaoReq){
    _logos_orig$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$(self, _cmd, hongBaoRes, hongBaoReq);
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
        






        if (receiveStatus == 0 && hbStatus == 2){
            
            NSString *timingIdentifier = bufferDic[@"timingIdentifier"];
            NSString *sendId = bufferDic[@"sendId"];
            if (sendId.length > 0 && timingIdentifier.length > 0){
                SPRedParameter *redParameter = [[SPRedManager sharedInstance] getParams:sendId];
                if (redParameter != nil){
                    redParameter.timingIdentifier = timingIdentifier;
                    
                    sleep(1);
                    WCRedEnvelopesLogicMgr *redEnvelopesLogicMgr = [[_logos_static_class_lookup$MMServiceCenter() defaultCenter] getService:[_logos_static_class_lookup$WCRedEnvelopesLogicMgr() class]];
                    if (nil != redEnvelopesLogicMgr){
                        [redEnvelopesLogicMgr OpenRedEnvelopesRequest:redParameter.params];
                    }

                }
            }
        }
    }

}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$CMessageMgr = objc_getClass("CMessageMgr"); MSHookMessageEx(_logos_class$_ungrouped$CMessageMgr, @selector(AsyncOnAddMsg:MsgWrap:), (IMP)&_logos_method$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$, (IMP*)&_logos_orig$_ungrouped$CMessageMgr$AsyncOnAddMsg$MsgWrap$);Class _logos_class$_ungrouped$WCRedEnvelopesLogicMgr = objc_getClass("WCRedEnvelopesLogicMgr"); MSHookMessageEx(_logos_class$_ungrouped$WCRedEnvelopesLogicMgr, @selector(OnWCToHongbaoCommonResponse:Request:), (IMP)&_logos_method$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$, (IMP*)&_logos_orig$_ungrouped$WCRedEnvelopesLogicMgr$OnWCToHongbaoCommonResponse$Request$);} }
#line 274 "/Users/songpeng/Desktop/WXTweak/WXTweakDylib/Logos/WXTweakDylib.xm"
