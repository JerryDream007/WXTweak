//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IWePkgCheckUpdateMgrExt-Protocol.h"
#import "IWePkgDownloadMgrExt-Protocol.h"
#import "IWePkgWebViewNavigationExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MMLockMutableDictionary, NSMapTable, NSMutableDictionary, NSRecursiveLock, NSString, WePkgCheckUpdateMgr, WePkgCleanMgr, WePkgConfigMgr, WePkgDownloadMgr, WePkgOperateUpdateMgr;

@interface WePkgFacade : MMService <MMServiceProtocol, IWePkgCheckUpdateMgrExt, IWePkgDownloadMgrExt, IWePkgWebViewNavigationExt>
{
    NSRecursiveLock *_createPackageLock;
    WePkgConfigMgr *_configMgr;
    WePkgCheckUpdateMgr *_checkMgr;
    WePkgDownloadMgr *_downloadMgr;
    WePkgOperateUpdateMgr *_operateMgr;
    WePkgCleanMgr *_cleanMgr;
    NSString *_jsCommonLibPkgId;
    MMLockMutableDictionary *_dicPkgId2Package;
    NSMapTable *_dicUrl2UsingWebview;
    NSMutableDictionary *_dicOriginalUrl2A8KeyData;
    NSMutableDictionary *_dicOriginalUrl2NeedReloadWebVC;
    NSMutableDictionary *_reportSyncReloadOBjs;
}

@property(retain, nonatomic) NSMutableDictionary *reportSyncReloadOBjs; // @synthesize reportSyncReloadOBjs=_reportSyncReloadOBjs;
@property(retain) NSMutableDictionary *dicOriginalUrl2NeedReloadWebVC; // @synthesize dicOriginalUrl2NeedReloadWebVC=_dicOriginalUrl2NeedReloadWebVC;
@property(retain) NSMutableDictionary *dicOriginalUrl2A8KeyData; // @synthesize dicOriginalUrl2A8KeyData=_dicOriginalUrl2A8KeyData;
@property(retain, nonatomic) NSMapTable *dicUrl2UsingWebview; // @synthesize dicUrl2UsingWebview=_dicUrl2UsingWebview;
@property(retain, nonatomic) MMLockMutableDictionary *dicPkgId2Package; // @synthesize dicPkgId2Package=_dicPkgId2Package;
@property(retain, nonatomic) NSString *jsCommonLibPkgId; // @synthesize jsCommonLibPkgId=_jsCommonLibPkgId;
@property(retain, nonatomic) WePkgCleanMgr *cleanMgr; // @synthesize cleanMgr=_cleanMgr;
@property(retain, nonatomic) WePkgOperateUpdateMgr *operateMgr; // @synthesize operateMgr=_operateMgr;
@property(retain, nonatomic) WePkgDownloadMgr *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) WePkgCheckUpdateMgr *checkMgr; // @synthesize checkMgr=_checkMgr;
@property(retain, nonatomic) WePkgConfigMgr *configMgr; // @synthesize configMgr=_configMgr;
- (void).cxx_destruct;
- (void)reportSyncReloadEnd:(id)arg1 result:(int)arg2;
- (void)reportSyncReloadBegin:(id)arg1 url:(id)arg2 pkg:(id)arg3 version:(id)arg4;
- (void)reloadWithoutCommonLibForWebView:(id)arg1;
- (void)tryStopLoadingViewAndReloadA8KeyFullUrl:(id)arg1 OriginalUrl:(id)arg2 ReloadUrl:(id)arg3;
- (void)notifyGetA8KeyReturn:(id)arg1 OriginalUrl:(id)arg2 FullUrl:(id)arg3;
- (void)reloadCurrentWebview:(id)arg1 WithoutWePkg:(id)arg2;
- (id)mmWebViewControllerForWebView:(id)arg1;
- (void)startReloadWithOnlineModeAfterDownloadFailed:(id)arg1 errorCode:(int)arg2;
- (void)startReloadWebviews:(id)arg1 withPackage:(id)arg2;
- (void)reloadCurrentWebviewWaitWePkg:(id)arg1 localVersion:(id)arg2 serverVersion:(id)arg3;
- (void)reloadCurrentWebviewWithoutWePkg:(id)arg1 Version:(id)arg2;
- (id)getLocalWePkgInfo:(id)arg1;
- (_Bool)wePkgGlobalConfigDisabled;
- (void)refreshWebViewWhenSyncReload:(id)arg1 errCode:(int)arg2;
- (void)downloadMgr:(id)arg1 didFailForDownloadInfoNonAtomicPart:(id)arg2 NoAutoRetry:(_Bool)arg3;
- (void)downloadMgr:(id)arg1 didFailForDownloadInfoAtomicPart:(id)arg2 NoAutoRetry:(_Bool)arg3;
- (void)downloadMgr:(id)arg1 didFailForDownloadInfo:(id)arg2 errCode:(int)arg3 NoAutoRetry:(_Bool)arg4;
- (void)downloadMgr:(id)arg1 didSuccessForDownloadInfoNonAtomicPart:(id)arg2;
- (void)downloadMgr:(id)arg1 didSuccessForDownloadInfoAtomicPart:(id)arg2;
- (void)downloadMgr:(id)arg1 didSuccessForDownloadInfo:(id)arg2;
- (void)checkUpdateMgr:(id)arg1 didSuccessForPkgId:(id)arg2;
- (void)clearWkWebviewCache;
- (void)webViewDidExit:(id)arg1;
- (_Bool)existPkgForUrl:(id)arg1;
- (void)releaseDataForUrl:(id)arg1 alsoReleasePreload:(_Bool)arg2;
- (_Bool)checkUpdateFrequenceIsOK:(id)arg1 CheckInterval:(unsigned int)arg2;
- (void)checkUpdateForExistPkgs:(id)arg1 andForcePkgs:(id)arg2;
- (void)checkUpdate:(id)arg1 CheckInterval:(unsigned int)arg2;
- (void)traceEventForWepkgEnterWebWithPkgId:(id)arg1 Url:(id)arg2 Version:(id)arg3 Result:(int)arg4;
- (_Bool)isPkgNeedForceUpdate:(id)arg1;
- (void)cleanInvalidPkg:(id)arg1;
- (id)loadPkgForPkgId:(id)arg1 Domain:(id)arg2 Version:(id *)arg3;
- (_Bool)loadWePkgForUrl:(id)arg1 PkgId:(id *)arg2 Version:(id *)arg3 preloadMain:(_Bool)arg4;
- (_Bool)loadPkgForJsCommonLib;
- (void)tryToLoadPkgForJsCommonLibWithPkg:(id)arg1 isSuccess:(_Bool *)arg2;
- (_Bool)tryLoadPkgForUrl:(id)arg1 preloadMain:(_Bool)arg2;
- (void)tryToLoadPkgForUrl:(id)arg1 fromEntry:(_Bool)arg2 isSuccess:(_Bool *)arg3;
- (_Bool)updateWePkg:(id)arg1 UsingWebview:(id)arg2;
- (_Bool)updateWePkgUsingWebview:(id)arg1 WebView:(id)arg2;
- (void)setLastDownloadTmpConfigInDBTime:(unsigned int)arg1;
- (unsigned int)getLastDownloadTmpConfigInDBTime;
- (void)downloadTmpConfigInDB;
- (void)tryOperateUpdateForPkgId:(id)arg1 AtomicPart:(_Bool)arg2 NonAtomicPart:(_Bool)arg3;
- (id)getNeedDownloadSingleFileListOnCurrentNetwork:(id)arg1 PkgId:(id)arg2 Version:(id)arg3 IsAtomicPart:(_Bool)arg4;
- (id)getNeedDownloadFileListOnCurrentNetwork:(id)arg1;
- (id)loadPackage:(id)arg1 createIfNeed:(_Bool)arg2;
- (void)observerMemoryWarning;
- (void)observerWebViewNotification;
- (_Bool)isWePkgAllEntryEnabled;
- (void)setupMgr;
- (_Bool)isCommonLibNeedForceUpdate;
- (id)getCacheDataForResouceUrlInternal:(id)arg1 mainDocUrl:(id)arg2 PkgId:(id *)arg3 Version:(id *)arg4;
- (void)reportResourceHookResult:(id)arg1 Version:(id)arg2 ResourceUrl:(id)arg3 Hook:(_Bool)arg4;
- (_Bool)checkIfNeedHookInCanInit:(id)arg1 mainDocUrl:(id)arg2;
- (id)getCacheDataForResouceUrl:(id)arg1 mainDocUrl:(id)arg2;
- (void)checkUpdateForJsCommonLibWithPkg:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)preloadWkProxyIfNeed;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

