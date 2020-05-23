//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFeedUserNameClickDelegate-Protocol.h"

@class NSString, UIView, WCFinderFeedContentVM, WCFinderFeedFriendLikeView;
@protocol WCFinderFeedCommentTableViewCellDelegate;

@interface WCFinderFeedCommentTableViewCell : UITableViewCell <WCFinderFeedUserNameClickDelegate, WCFinderFeedContentVMExt>
{
    _Bool _shouldHiddenComment;
    id <WCFinderFeedCommentTableViewCellDelegate> _delegate;
    WCFinderFeedFriendLikeView *_friendLikeView;
    UIView *_commentContainerView;
    WCFinderFeedContentVM *_contentVM;
}

+ (double)cellHeightWith:(id)arg1 hiddenComment:(_Bool)arg2 width:(double)arg3;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIView *commentContainerView; // @synthesize commentContainerView=_commentContainerView;
@property(retain, nonatomic) WCFinderFeedFriendLikeView *friendLikeView; // @synthesize friendLikeView=_friendLikeView;
@property(nonatomic) _Bool shouldHiddenComment; // @synthesize shouldHiddenComment=_shouldHiddenComment;
@property(nonatomic) __weak id <WCFinderFeedCommentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onFeedContentHotCommentListChanged:(id)arg1 needAnimation:(_Bool)arg2;
- (void)onFeedContentLikedDataChanged:(id)arg1;
- (void)onClickCommentUserName:(id)arg1;
- (void)feedCommentViewDidClickLike:(id)arg1 comment:(id)arg2;
- (void)onClickComment:(id)arg1;
- (id)iconImageWithType:(unsigned long long)arg1;
- (void)updateNewCommentUIWith:(id)arg1 commentTop:(double)arg2;
- (void)updateUIWithContentVM:(id)arg1 hiddenComment:(_Bool)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

