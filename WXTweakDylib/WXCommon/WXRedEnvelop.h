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
