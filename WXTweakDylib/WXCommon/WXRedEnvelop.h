//
//  WXRedEnvelop.h
//  WXTweakDylib
//
//  Created by 宋澎 on 2020/5/26.
//  Copyright © 2020 宋澎. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSMutableDictionary+Safe.h"

@interface FindFriendEntryViewController
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;
@end

@interface WCPayInfoItem
@property(copy, nonatomic) NSString *m_c2cNativeUrl;
@end

@interface CMessageMgr : NSObject

- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onRevokeMsg:(id)arg1;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4;
- (void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2;

@end

@interface CMessageWrap : NSObject

@property (retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem;
@property (assign, nonatomic) NSUInteger m_uiMesLocalID;
@property (retain, nonatomic) NSString* m_nsFromUsr;            ///< 发信人，可能是群或个人
@property (retain, nonatomic) NSString* m_nsToUsr;              ///< 收信人
@property (assign, nonatomic) NSUInteger m_uiStatus;
@property (retain, nonatomic) NSString* m_nsContent;            ///< 消息内容
@property (retain, nonatomic) NSString* m_nsRealChatUsr;        ///< 群消息的发信人，具体是群里的哪个人
@property (assign, nonatomic) NSUInteger m_uiMessageType;
@property (assign, nonatomic) long long m_n64MesSvrID;
@property (assign, nonatomic) NSUInteger m_uiCreateTime;
@property (retain, nonatomic) NSString *m_nsDesc;
@property (retain, nonatomic) NSString *m_nsAppExtInfo;
@property (assign, nonatomic) NSUInteger m_uiAppDataSize;
@property (assign, nonatomic) NSUInteger m_uiAppMsgInnerType;
@property (retain, nonatomic) NSString *m_nsShareOpenUrl;
@property (retain, nonatomic) NSString *m_nsShareOriginUrl;
@property (retain, nonatomic) NSString *m_nsJsAppId;
@property (retain, nonatomic) NSString *m_nsPrePublishId;
@property (retain, nonatomic) NSString *m_nsAppID;
@property (retain, nonatomic) NSString *m_nsAppName;
@property (retain, nonatomic) NSString *m_nsThumbUrl;
@property (retain, nonatomic) NSString *m_nsAppMediaUrl;
@property (retain, nonatomic) NSData *m_dtThumbnail;
@property (retain, nonatomic) NSString *m_nsTitle;
@property (retain, nonatomic) NSString *m_nsMsgSource;

- (id)initWithMsgType:(long long)arg1;
+ (_Bool)isSenderFromMsgWrap:(id)arg1;

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
- (void)OpenRedEnvelopesRequest:(id)params;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)GetHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)OnWCToHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
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
@property(nonatomic) int cgiCmdid; // @dynamic cgiCmdid;
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
