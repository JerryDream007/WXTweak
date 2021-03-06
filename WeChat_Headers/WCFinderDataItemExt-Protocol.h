//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCFinderComment, WCFinderDataItem, WCFinderUploadProgressModel;

@protocol WCFinderDataItemExt <NSObject>

@optional
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderTimelineNeedReload;
- (void)onFinderUserpageUpdateWithDataItems:(NSArray *)arg1;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataItemDeleteBySpamList:(NSArray *)arg1;
- (void)onFinderDataItemBeDeletedWithTid:(NSString *)arg1;
- (void)onFinderDataItemPostSubCommentFail:(WCFinderComment *)arg1 tid:(NSString *)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemPostSubCommentSuccessful:(WCFinderComment *)arg1 tid:(NSString *)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubComment:(WCFinderComment *)arg1 tid:(NSString *)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(NSString *)arg1 commentID:(unsigned long long)arg2 likeStatus:(_Bool)arg3;
- (void)onFinderDataItemDeleteComment:(WCFinderComment *)arg1 rootCommentID:(unsigned long long)arg2 tid:(NSString *)arg3;
- (void)onFinderDataItemPostCommentSuccessful:(WCFinderComment *)arg1 tid:(NSString *)arg2;
- (void)onFinderDataItemPostCommentFailBySpecialError:(WCFinderComment *)arg1 errorCode:(int)arg2 errorMsg:(NSString *)arg3;
- (void)onFinderDataItemPostCommentFail:(WCFinderComment *)arg1 tid:(NSString *)arg2;
- (void)onFinderDataItemPostComment:(WCFinderComment *)arg1 tid:(NSString *)arg2;
- (void)onFinderDataItemRePostWithTid:(NSString *)arg1;
- (void)onFinderDataItemPostFailWithTid:(NSString *)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemPostProgressWithTid:(NSString *)arg1 progress:(WCFinderUploadProgressModel *)arg2;
- (void)onFinderDataItemPostRetry:(NSString *)arg1;
- (void)onFinderDataItemPostUpLoadFailWithTid:(NSString *)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(NSArray *)arg1;
- (void)onFinderDataItemPostUpLoadSuccessful:(WCFinderDataItem *)arg1;
- (void)onFinderDataItemDelete:(NSString *)arg1;
- (void)onFinderDataItemIsLikedFailed:(NSString *)arg1 isLike:(_Bool)arg2;
- (void)onFinderDataItemIsLikedUpdate:(NSString *)arg1 isLike:(_Bool)arg2;
- (void)onFinderDataItemUpdate:(WCFinderDataItem *)arg1;
@end

