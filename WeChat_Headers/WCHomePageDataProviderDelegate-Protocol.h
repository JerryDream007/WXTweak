//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCBGUserInfo;

@protocol WCHomePageDataProviderDelegate <NSObject>
- (void)onReturnBGUserInfo:(WCBGUserInfo *)arg1;
- (void)onResetOnceReturnAllDataRenderNoMore;
- (void)onOnceReturnAllDataRenderNoMore;
- (void)onOnceReturnAllDataWithRet:(int)arg1 andTip:(NSString *)arg2;
- (void)onReturnIsAllData:(NSArray *)arg1 andAdData:(NSArray *)arg2;
- (void)onReturnLimitFeedId:(unsigned long long)arg1;
- (void)onNoMoreDataWithRet:(int)arg1 andTip:(NSString *)arg2;
- (void)onDataUpdated:(NSArray *)arg1 maxItemID:(unsigned long long)arg2 minItemID:(unsigned long long)arg3 withChangedTime:(unsigned int)arg4;
@end

