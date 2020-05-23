//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderDataItemExt-Protocol.h"

@class ForwardMessageLogicController, NSNumber, NSString, WCFinderDataItem;

@interface WCFinderFeedContentVM : NSObject <WCFinderContactExt, WCFinderDataItemExt, WCCommitViewResultDelegate, ForwardMessageLogicDelegate>
{
    _Bool _forceExpand;
    _Bool _hideSeparatorLine;
    _Bool _showRecommendReason;
    _Bool _shouldForceDisableLikeAction;
    _Bool _isPostingDataItem;
    _Bool _isFinderIdentity;
    _Bool _hasPreloadCommentList;
    _Bool _isVideoNeedSilentPaly;
    WCFinderDataItem *_dataItem;
    double _unExpandConstTextHeight;
    double _expandConstTextHeight;
    unsigned long long _currentDisplayImageIndex;
    unsigned long long _currentPageStartTimestamp;
    double _uploadingProgress;
    unsigned long long _refCommentID;
    unsigned long long _scene;
    NSNumber *_commentListViewHeight;
    NSString *_descriptionText;
    unsigned long long _contentStyle;
    NSString *_dataSceneClassName;
    double _createTime;
    unsigned long long _descriptionType;
    double _feedStayStartTimeInMs;
    ForwardMessageLogicController *_forwardLogic;
    NSString *_videoMediaPath;
    unsigned long long _feedPhotoPreDownloadMaxCount;
}

@property(nonatomic) _Bool isVideoNeedSilentPaly; // @synthesize isVideoNeedSilentPaly=_isVideoNeedSilentPaly;
@property(nonatomic) unsigned long long feedPhotoPreDownloadMaxCount; // @synthesize feedPhotoPreDownloadMaxCount=_feedPhotoPreDownloadMaxCount;
@property(nonatomic) _Bool hasPreloadCommentList; // @synthesize hasPreloadCommentList=_hasPreloadCommentList;
@property(nonatomic) _Bool isFinderIdentity; // @synthesize isFinderIdentity=_isFinderIdentity;
@property(retain, nonatomic) NSString *videoMediaPath; // @synthesize videoMediaPath=_videoMediaPath;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) _Bool isPostingDataItem; // @synthesize isPostingDataItem=_isPostingDataItem;
@property(nonatomic) double feedStayStartTimeInMs; // @synthesize feedStayStartTimeInMs=_feedStayStartTimeInMs;
@property(nonatomic) unsigned long long descriptionType; // @synthesize descriptionType=_descriptionType;
@property(nonatomic, getter=getFetchDataItemTime) double createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *dataSceneClassName; // @synthesize dataSceneClassName=_dataSceneClassName;
@property(nonatomic) _Bool shouldForceDisableLikeAction; // @synthesize shouldForceDisableLikeAction=_shouldForceDisableLikeAction;
@property(nonatomic) _Bool showRecommendReason; // @synthesize showRecommendReason=_showRecommendReason;
@property(nonatomic) _Bool hideSeparatorLine; // @synthesize hideSeparatorLine=_hideSeparatorLine;
@property(nonatomic) unsigned long long contentStyle; // @synthesize contentStyle=_contentStyle;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSNumber *commentListViewHeight; // @synthesize commentListViewHeight=_commentListViewHeight;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
@property(nonatomic) double uploadingProgress; // @synthesize uploadingProgress=_uploadingProgress;
@property(nonatomic) unsigned long long currentPageStartTimestamp; // @synthesize currentPageStartTimestamp=_currentPageStartTimestamp;
@property(nonatomic) unsigned long long currentDisplayImageIndex; // @synthesize currentDisplayImageIndex=_currentDisplayImageIndex;
@property(nonatomic) double expandConstTextHeight; // @synthesize expandConstTextHeight=_expandConstTextHeight;
@property(nonatomic) double unExpandConstTextHeight; // @synthesize unExpandConstTextHeight=_unExpandConstTextHeight;
@property(nonatomic) _Bool forceExpand; // @synthesize forceExpand=_forceExpand;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void).cxx_destruct;
- (void)reverseCommentState;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onFinderDataItemBeDeletedWithTid:(id)arg1;
- (void)onFinderDataItemDeleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 tid:(id)arg3;
- (void)onFinderDataItemIsLikedFailed:(id)arg1 isLike:(_Bool)arg2;
- (void)onFinderDataItemIsLikedUpdate:(id)arg1 isLike:(_Bool)arg2;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 likeStatus:(_Bool)arg3;
- (void)onFinderDataItemPostSubCommentFail:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)updateCommentCountByPostingComment;
- (void)onFinderDataItemPostCommentFail:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostCommentSuccessful:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostComment:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemRePostWithTid:(id)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)onFinderDataItemUpdate:(id)arg1;
- (void)updateDataItem;
- (void)clickCommentLikeAction:(id)arg1 scene:(unsigned long long)arg2 reportScene:(unsigned long long)arg3;
- (void)deleteComment:(id)arg1 scene:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)preloadCommentWithScene:(unsigned long long)arg1;
- (unsigned long long)getAuthorFeedContentStatus;
- (void)generalStartDownloadImagePriority:(_Bool)arg1 maxCount:(unsigned long long)arg2 onlyThumb:(_Bool)arg3;
- (void)startDownloadAllThumbImageImmediately;
- (void)startDownloadStreamImagePriority:(_Bool)arg1;
- (void)startDownloadStreamImageImmediately;
- (void)startDownloadImagePage:(unsigned long long)arg1;
- (void)cancelDownloadImage;
- (void)startDownloadImagePriority:(_Bool)arg1;
- (void)startDownloadImageImmediately;
- (_Bool)isRecommendFeed;
- (void)updateLikeListDisplayName;
- (void)updateHotCommentListDisplayName;
- (void)resetContentHeight;
- (void)shareToFriend;
- (void)shareToMoment;
- (id)genUploadTask:(id)arg1;
- (id)makeShareItem;
- (void)clickLikeFeedActionWithScene:(unsigned long long)arg1 reportScene:(unsigned long long)arg2;
- (void)clickFullTextAction:(_Bool)arg1;
@property(readonly, nonatomic) NSString *contentTid;
- (_Bool)isCurrentVideoMediaInfoNeedPreload;
- (id)currentDisplayMediaInfo;
- (_Bool)hasExtReadingLink;
- (_Bool)isFeedContainVideo;
- (_Bool)isFeedContainPhoto;
- (_Bool)existMediaContent;
- (_Bool)isItemUploadingOrFail;
- (_Bool)isDisplayHotCommentReady;
- (_Bool)isDisplayRecommendReason;
- (_Bool)isFeedContainText;
- (unsigned long long)getFeedContentType;
- (void)onFinderContactFollowStatusUpdate:(id)arg1 isFollowing:(_Bool)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (void)setSilentPlayStatu:(_Bool)arg1;
- (_Bool)isNeedSilentPlay;
- (void)dealloc;
- (unsigned long long)rowForContent;
- (id)initWithDataItem:(id)arg1 scene:(unsigned long long)arg2 dataScene:(id)arg3;
- (id)initWithDataItem:(id)arg1 scene:(unsigned long long)arg2 dataScene:(id)arg3 isFinderIdentity:(_Bool)arg4;
- (void)searchHighToNormalTransform;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

