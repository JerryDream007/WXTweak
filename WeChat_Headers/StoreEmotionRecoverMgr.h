//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "CNetworkStatusExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "StoreEmotionAddTaskDelegate-Protocol.h"
#import "StoreEmotionDeleteExt-Protocol.h"
#import "StoreEmotionDeleteTaskDelegate-Protocol.h"
#import "StoreEmotionDownloadLogicObjectDelegate-Protocol.h"
#import "StoreEmotionFetchFollowedDesignersUpdateLogicDelegate-Protocol.h"
#import "StoreEmotionRecoverLogicObjectDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, StoreEmotionDownloadLogicObject, StoreEmotionFetchFollowedDesignersUpdateLogic, StoreEmotionRecoverLogicObject;

@interface StoreEmotionRecoverMgr : MMService <StoreEmotionRecoverLogicObjectDelegate, StoreEmotionDownloadLogicObjectDelegate, IMsgExt, StoreEmotionAddTaskDelegate, StoreEmotionDeleteTaskDelegate, StoreEmotionDeleteExt, CNetworkStatusExt, StoreEmotionFetchFollowedDesignersUpdateLogicDelegate, MMServiceProtocol>
{
    int _scene;
    StoreEmotionRecoverLogicObject *_recoverLogic;
    StoreEmotionDownloadLogicObject *_downloadLogic;
    StoreEmotionFetchFollowedDesignersUpdateLogic *_fetchDesignersLogic;
    NSMutableArray *_xmlTaskArray;
    NSMutableDictionary *_serverDic;
}

@property(retain, nonatomic) NSMutableDictionary *serverDic; // @synthesize serverDic=_serverDic;
@property(retain, nonatomic) NSMutableArray *xmlTaskArray; // @synthesize xmlTaskArray=_xmlTaskArray;
@property(retain, nonatomic) StoreEmotionFetchFollowedDesignersUpdateLogic *fetchDesignersLogic; // @synthesize fetchDesignersLogic=_fetchDesignersLogic;
@property(retain, nonatomic) StoreEmotionDownloadLogicObject *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(retain, nonatomic) StoreEmotionRecoverLogicObject *recoverLogic; // @synthesize recoverLogic=_recoverLogic;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)storeEmotionDeleteSuccessWithProductID:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onDeleteTaskComplete;
- (_Bool)canResumeDeleteTask;
- (void)startAddLogicWithPid:(id)arg1;
- (_Bool)canResumeAddTask;
- (void)onFetchAllFollowedDesignersUpdateFinish;
- (void)onStoreEmotionDownloadLogicObjectFailed;
- (void)onStoreEmotionDownloadLogicObjectOK;
- (void)onStoreEmotionRecoverLogicFailed;
- (void)onStoreEmotionRecoverLogicOKWithServerPids:(id)arg1;
- (void)runNotifyTask;
- (id)getStoreEmotionList;
- (_Bool)canStartCgiNow;
- (void)fetchAllFollowedDesignersUpdateFromSvrPids:(id)arg1;
- (void)recoverStoreEmotionFromServerPids:(id)arg1;
- (void)startInternalRequest;
- (_Bool)isRecovering;
- (int)getStateByItem:(id)arg1;
- (float)downloadingProgressFromItem:(id)arg1;
- (id)downloadingInfo;
- (void)startDownloadMyPanelListFromScene:(int)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

