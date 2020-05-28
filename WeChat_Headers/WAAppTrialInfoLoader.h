//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAAppTrialInfoLoader : MMObject
{
    CDUnknownBlockType m_completeBlock;
    NSString *_jumpURL;
    NSString *_jsonInfo;
    int _appServiceType;
}

@property(nonatomic) int appServiceType; // @synthesize appServiceType=_appServiceType;
- (void).cxx_destruct;
- (void)updateNotifyInfoWithDownloadUrl:(id)arg1 md5Str:(id)arg2 extInfo:(id)arg3 oldNotify:(id)arg4;
- (void)sendRequest:(id)arg1 Retry:(unsigned int)arg2;
- (void)dealloc;
- (void)handleTrialDownloadUrlResponse:(id)arg1;
- (void)requestTrialDownloadUrl:(id)arg1;
- (_Bool)isLocalPackageValid:(id)arg1 checkSum:(id)arg2 debugModeType:(unsigned long long)arg3;
- (void)handleCheckTrialInfoResponse:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)requestTrialInfoWithPack:(id)arg1;
- (void)loadTrialInfoWithPack:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
