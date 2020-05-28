//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, WAPackageUpdateLogic;
@protocol OS_dispatch_queue;

@interface WACacheVersionPreCheckerMgr : MMService <WAAppTaskMgrExt, MMServiceProtocol>
{
    WAPackageUpdateLogic *_pluginPkgUpdateLogic;
    NSMutableArray *_arrReportUseWeappPlugins;
    NSMutableDictionary *_dicAutoUpdatePluginKey2VersionInfo;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_checkers;
}

@property(retain, nonatomic) NSMutableDictionary *checkers; // @synthesize checkers=_checkers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(readonly, nonatomic) NSMutableDictionary *dicAutoUpdatePluginKey2VersionInfo; // @synthesize dicAutoUpdatePluginKey2VersionInfo=_dicAutoUpdatePluginKey2VersionInfo;
@property(readonly, nonatomic) NSMutableArray *arrReportUseWeappPlugins; // @synthesize arrReportUseWeappPlugins=_arrReportUseWeappPlugins;
@property(readonly, nonatomic) WAPackageUpdateLogic *pluginPkgUpdateLogic; // @synthesize pluginPkgUpdateLogic=_pluginPkgUpdateLogic;
- (void).cxx_destruct;
- (void)onAppTaskTerminateWithContact:(id)arg1;
- (id)getPreCheckCacheVersionResultForAppid:(id)arg1 appVersion:(unsigned long long)arg2 debugType:(unsigned int)arg3;
- (void)clearPreCheckCacheVersionResultForAppid:(id)arg1 appVersion:(unsigned long long)arg2 debugType:(unsigned int)arg3;
- (void)startPreCheckCacheVersionWithCheckerContext:(id)arg1;
- (void)onServiceReloadData;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
