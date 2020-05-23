//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MultiTalkContactCellDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIScrollView;
@protocol MultiTalkContactsCollectionViewDelegate;

@interface MultiTalkContactsCollectionView : UIView <MultiTalkContactCellDelegate, UIScrollViewDelegate>
{
    _Bool _isInMinimizeMode;
    _Bool _m_doingAnimation;
    _Bool _m_hasAnimationTodo;
    _Bool _m_checkVisibleAfterAnimation;
    _Bool _m_hasOriChangeUpdateTodo;
    _Bool _m_isContentViewScroll;
    _Bool _m_hasScrolling;
    _Bool _m_hasScrollToast;
    int _m_mode;
    id <MultiTalkContactsCollectionViewDelegate> m_delegate;
    UIView *m_bigCellBackgroundView;
    UIView *m_bigCellView;
    UIScrollView *_m_contentScrollView;
    NSMutableDictionary *_m_contactViewDic;
    NSMutableDictionary *_m_contactViewCacheDic;
    MMTimer *_m_waittingTimer;
    long long _m_currOrientationType;
    NSMutableArray *_m_lastMember;
    NSMutableArray *_m_currentMember;
    NSMutableSet *_lastVisibleUsrnameSet;
    unsigned long long _m_maxMultiTalkMemCount;
    double _lastCheckContentOffsetY;
    struct CGSize _multiTalkCellSize;
    struct CGSize _currentSize;
}

+ (double)getBeforeTalkInviteMemberCellMarginTop;
+ (double)getBeforeTalkOtherMemberCellTopInScreen;
+ (double)getBeforeTalkInviteMemberCellBottomInScreen;
+ (double)getVideoContentHeightInScreenInIphone:(unsigned long long)arg1;
@property(nonatomic) struct CGSize currentSize; // @synthesize currentSize=_currentSize;
@property(nonatomic) double lastCheckContentOffsetY; // @synthesize lastCheckContentOffsetY=_lastCheckContentOffsetY;
@property(nonatomic) unsigned long long m_maxMultiTalkMemCount; // @synthesize m_maxMultiTalkMemCount=_m_maxMultiTalkMemCount;
@property(nonatomic) struct CGSize multiTalkCellSize; // @synthesize multiTalkCellSize=_multiTalkCellSize;
@property(retain, nonatomic) NSMutableSet *lastVisibleUsrnameSet; // @synthesize lastVisibleUsrnameSet=_lastVisibleUsrnameSet;
@property(retain, nonatomic) NSMutableArray *m_currentMember; // @synthesize m_currentMember=_m_currentMember;
@property(retain, nonatomic) NSMutableArray *m_lastMember; // @synthesize m_lastMember=_m_lastMember;
@property(nonatomic) int m_mode; // @synthesize m_mode=_m_mode;
@property(nonatomic) long long m_currOrientationType; // @synthesize m_currOrientationType=_m_currOrientationType;
@property(nonatomic) _Bool m_hasScrollToast; // @synthesize m_hasScrollToast=_m_hasScrollToast;
@property(nonatomic) _Bool m_hasScrolling; // @synthesize m_hasScrolling=_m_hasScrolling;
@property(nonatomic) _Bool m_isContentViewScroll; // @synthesize m_isContentViewScroll=_m_isContentViewScroll;
@property(nonatomic) _Bool m_hasOriChangeUpdateTodo; // @synthesize m_hasOriChangeUpdateTodo=_m_hasOriChangeUpdateTodo;
@property(nonatomic) _Bool m_checkVisibleAfterAnimation; // @synthesize m_checkVisibleAfterAnimation=_m_checkVisibleAfterAnimation;
@property(nonatomic) _Bool m_hasAnimationTodo; // @synthesize m_hasAnimationTodo=_m_hasAnimationTodo;
@property(nonatomic) _Bool m_doingAnimation; // @synthesize m_doingAnimation=_m_doingAnimation;
@property(retain, nonatomic) MMTimer *m_waittingTimer; // @synthesize m_waittingTimer=_m_waittingTimer;
@property(retain, nonatomic) NSMutableDictionary *m_contactViewCacheDic; // @synthesize m_contactViewCacheDic=_m_contactViewCacheDic;
@property(retain, nonatomic) NSMutableDictionary *m_contactViewDic; // @synthesize m_contactViewDic=_m_contactViewDic;
@property(nonatomic) _Bool isInMinimizeMode; // @synthesize isInMinimizeMode=_isInMinimizeMode;
@property(retain, nonatomic) UIScrollView *m_contentScrollView; // @synthesize m_contentScrollView=_m_contentScrollView;
@property(retain, nonatomic) UIView *m_bigCellView; // @synthesize m_bigCellView;
@property(retain, nonatomic) UIView *m_bigCellBackgroundView; // @synthesize m_bigCellBackgroundView;
@property(nonatomic) __weak id <MultiTalkContactsCollectionViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)isMultiTalkCellVisible:(id)arg1;
- (_Bool)checkVisibleMultiTalkCells;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setMultitalkCollectionViewDoingAnimatioin:(_Bool)arg1;
- (_Bool)getMultitalkCollectionViewDoingAnimatioin;
- (void)onClickMultiTalkContactCellBigview;
- (void)checkToShowBigView;
- (void)onClickMultiTalkContactCellWithContact:(id)arg1 render:(id)arg2;
- (double)operationPanelDisplayHeight:(int)arg1;
- (id)memberBeforeTalkingAtIndex:(unsigned long long)arg1;
- (unsigned long long)memberCountBeforeTalking;
- (id)memberInviteMeBeforeTalking;
- (void)checkIfOnePerson;
- (_Bool)isVideoOnForUser:(id)arg1;
- (id)renderForUsername:(id)arg1;
- (void)onTapUser:(id)arg1;
- (id)memberOfIndex:(unsigned long long)arg1;
- (unsigned long long)totalMemberCount;
- (struct CGSize)bigCellViewSize;
- (void)updateScrollViewContentSize;
- (id)getLastValidContactCell;
- (id)getCellByUserName:(id)arg1 center:(struct CGPoint)arg2;
- (id)getCurrentCellByUserName:(id)arg1;
- (struct CGRect)layoutInIphoneAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (struct CGRect)layoutInIpadAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (struct CGRect)layoutAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (struct CGSize)getMultiTalkCellSizeForTotalCount:(unsigned long long)arg1;
- (double)alphaAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (id)backgroundColorAtIndex:(unsigned long long)arg1 totalCount:(unsigned long long)arg2;
- (void)waittingTimerCheck;
- (void)initWaittingTimer;
- (void)updateContentLayout;
- (void)layoutSubviews;
- (id)calculateExitUsernameSetWithCurrentSet:(id)arg1;
- (id)calculateCurrentUsernameSet;
- (void)updateCell:(id)arg1 withMember:(id)arg2;
- (void)checkAllMemberCellHidden;
- (void)moveChangeMember;
- (void)placeCellToView;
- (void)removeExitMemberCellWithExitUsernameSet:(id)arg1;
- (void)moveExitMemberCellWithExitUsernameSet:(id)arg1;
- (void)showBusyLabelWithExitUsernameSet:(id)arg1;
- (void)doChangeAnimation;
- (void)doExitAnimationWithExitUsernameSet:(id)arg1;
- (void)updateCellLayoutInIpadForOriChanged;
- (void)updateLastMember;
- (void)updateCurrentMember;
- (void)reloadData;
- (void)updateScrollViewHeight;
- (void)changeViewToTalkingMode;
- (void)reloadOtherMemberBeforeTalking;
- (void)reloadViewInviteMeBeforeTalking;
- (void)reloadDataBeforeTalking;
- (void)multiTalkWindowChange:(_Bool)arg1;
- (void)updateMuteState:(_Bool)arg1;
- (void)updateIpadOrientationAfterFrameChange;
- (void)showView;
- (void)hideView;
- (void)updateDelegate:(id)arg1;
- (void)updateContentScrollViewHidden:(_Bool)arg1 Animating:(_Bool)arg2;
- (void)bigViewTransToCellsView;
- (void)onSingleTap;
- (void)initBigCellView;
- (void)initBigCellBackground;
- (void)initContentScrollView;
- (double)getContentScrollViewHeight;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

