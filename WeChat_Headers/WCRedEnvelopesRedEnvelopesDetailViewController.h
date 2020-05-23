//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "EmoticonBoardViewDelegate-Protocol.h"
#import "EmoticonCustomAddLogicControllerDelegate-Protocol.h"
#import "SharePreConfirmViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCRedEnvelopesCommentInputToolViewDelegate-Protocol.h"
#import "WCRedEnvelopesStoryViewControllerDelegate-Protocol.h"
#import "WebAddContactDelegate-Protocol.h"

@class AVAudioPlayer, CEmoticonWrap, CMessageWrap, ContactUpdateHelper, EmoticonBoardView, EmoticonCustomAddLogicController, MMEmoticonView, MMTableView, MMUILabel, NSString, SharePreConfirmView, UIButton, UIImageView, UILabel, UIView, WCRedEnvelopesCommentInputToolView, WCRedEnvelopesStoryDargUtil, WCRedEnvelopesStoryViewController, WCUITextField;
@protocol WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate;

@interface WCRedEnvelopesRedEnvelopesDetailViewController : WCRedEnvelopesBaseViewController <WebAddContactDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonCustomAddLogicControllerDelegate, WCActionSheetDelegate, SharePreConfirmViewDelegate, WCRedEnvelopesStoryViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, WCRedEnvelopesCommentInputToolViewDelegate>
{
    id <WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate> m_delegate;
    _Bool m_loadingMoreOrderList;
    MMTableView *m_tableView;
    _Bool m_bDidBack;
    WCUITextField *m_oWishingTextField;
    UIView *m_oHeaderView;
    WCRedEnvelopesCommentInputToolView *oWCRedEnvelopesCommentInputToolView;
    UIView *oMsgAnimationView;
    UIView *oMoneyAnimationView;
    UIView *oTableAnimationView;
    UIView *oTopHeaderView;
    UIView *oNavigationBarView;
    UIImageView *commentImageView;
    UIButton *commentButton;
    AVAudioPlayer *luckyPlayer;
    AVAudioPlayer *whistlePlayer;
    UIButton *tailBtn;
    UIView *oBottomView;
    _Bool hasChangeBackgroundY;
    UIView *headImageView;
    _Bool m_bEnterpriseRedEnvelopes;
    _Bool _isPreviewMode;
    _Bool _isAnimationMode;
    _Bool _bIsEmoticonBoardViewShow;
    _Bool _hasShowGuideAnimate;
    _Bool _isDisappearFromStory;
    _Bool _isRefreshInAnimation;
    _Bool _m_isStoryShowing;
    int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
    unsigned int m_uiStatFromScene;
    UILabel *_m_globalStoryTitleLabel;
    UIButton *_m_globalDragDownImageView;
    UIView *_m_globalSwipeUpView;
    UIButton *_m_showStoryBigBtn;
    ContactUpdateHelper *_m_helperForSenderNickName;
    ContactUpdateHelper *_m_helperForSenderNickNameAnimation;
    UIView *_m_pinImageViewAnimation;
    UIView *_m_pinImageView;
    MMEmoticonView *_emoticonView;
    UIButton *_thxEmoticonBtn;
    UIButton *_thxEmoticonTipsBtn;
    MMEmoticonView *_thxEmoticonView;
    UIView *_thxEmoticonBkgView;
    UIButton *_sendThxEmoticonBtn;
    CEmoticonWrap *_thxEmoticonWrap;
    UIImageView *_changeIconImgView;
    UIImageView *_loadingImgView;
    MMUILabel *_loadingLabel;
    EmoticonBoardView *_emoticonBoardView;
    EmoticonCustomAddLogicController *_emoticonCustomAddLogic;
    double _maskViewBottom;
    UIView *_emoticonBoardViewTopMaskView;
    SharePreConfirmView *_sharePreConfirmView;
    CMessageWrap *_thxEmoticonMsgWrap;
    UIButton *_bottomTailBtn;
    UIImageView *_topCoverImgView;
    UIButton *_detailLinkBtn;
    UILabel *_nickNameLabel;
    UILabel *_descLabel;
    UIView *_headImageView;
    UIView *_fightingIcon;
    UIView *_senderEmoticonView;
    UILabel *_moneyLabel;
    UILabel *_feeTypeLabel;
    UIButton *_jumpBalanceBtn;
    UIImageView *_topSkinBottomImageView;
    UIImageView *_m_headerRedSkinMaskCurveView;
    UIImageView *_m_globalRedSkinMaskCurveView;
    WCRedEnvelopesStoryViewController *_m_redSkinStoryVC;
    WCRedEnvelopesStoryDargUtil *_m_storyDragAnimationUtil;
    double _currentTableViewOffSetY;
    UIImageView *_storyMaskLoadingView;
    UIImageView *_m_globalStoryGuideHandImageView;
    UILabel *_m_globalStoryGuideLabel;
}

@property(nonatomic) _Bool m_isStoryShowing; // @synthesize m_isStoryShowing=_m_isStoryShowing;
@property(retain, nonatomic) UILabel *m_globalStoryGuideLabel; // @synthesize m_globalStoryGuideLabel=_m_globalStoryGuideLabel;
@property(retain, nonatomic) UIImageView *m_globalStoryGuideHandImageView; // @synthesize m_globalStoryGuideHandImageView=_m_globalStoryGuideHandImageView;
@property(retain, nonatomic) UIImageView *storyMaskLoadingView; // @synthesize storyMaskLoadingView=_storyMaskLoadingView;
@property(nonatomic) _Bool isRefreshInAnimation; // @synthesize isRefreshInAnimation=_isRefreshInAnimation;
@property(nonatomic) _Bool isDisappearFromStory; // @synthesize isDisappearFromStory=_isDisappearFromStory;
@property(nonatomic) _Bool hasShowGuideAnimate; // @synthesize hasShowGuideAnimate=_hasShowGuideAnimate;
@property(nonatomic) double currentTableViewOffSetY; // @synthesize currentTableViewOffSetY=_currentTableViewOffSetY;
@property(retain, nonatomic) WCRedEnvelopesStoryDargUtil *m_storyDragAnimationUtil; // @synthesize m_storyDragAnimationUtil=_m_storyDragAnimationUtil;
@property(retain, nonatomic) WCRedEnvelopesStoryViewController *m_redSkinStoryVC; // @synthesize m_redSkinStoryVC=_m_redSkinStoryVC;
@property(retain, nonatomic) UIImageView *m_globalRedSkinMaskCurveView; // @synthesize m_globalRedSkinMaskCurveView=_m_globalRedSkinMaskCurveView;
@property(retain, nonatomic) UIImageView *m_headerRedSkinMaskCurveView; // @synthesize m_headerRedSkinMaskCurveView=_m_headerRedSkinMaskCurveView;
@property(retain, nonatomic) UIImageView *topSkinBottomImageView; // @synthesize topSkinBottomImageView=_topSkinBottomImageView;
@property(retain, nonatomic) UIButton *jumpBalanceBtn; // @synthesize jumpBalanceBtn=_jumpBalanceBtn;
@property(retain, nonatomic) UILabel *feeTypeLabel; // @synthesize feeTypeLabel=_feeTypeLabel;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UIView *senderEmoticonView; // @synthesize senderEmoticonView=_senderEmoticonView;
@property(retain, nonatomic) UIView *fightingIcon; // @synthesize fightingIcon=_fightingIcon;
@property(retain, nonatomic) UIView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIButton *detailLinkBtn; // @synthesize detailLinkBtn=_detailLinkBtn;
@property(retain, nonatomic) UIImageView *topCoverImgView; // @synthesize topCoverImgView=_topCoverImgView;
@property(retain, nonatomic) UIButton *bottomTailBtn; // @synthesize bottomTailBtn=_bottomTailBtn;
@property(retain, nonatomic) CMessageWrap *thxEmoticonMsgWrap; // @synthesize thxEmoticonMsgWrap=_thxEmoticonMsgWrap;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) UIView *emoticonBoardViewTopMaskView; // @synthesize emoticonBoardViewTopMaskView=_emoticonBoardViewTopMaskView;
@property(nonatomic) double maskViewBottom; // @synthesize maskViewBottom=_maskViewBottom;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonCustomAddLogic; // @synthesize emoticonCustomAddLogic=_emoticonCustomAddLogic;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) _Bool bIsEmoticonBoardViewShow; // @synthesize bIsEmoticonBoardViewShow=_bIsEmoticonBoardViewShow;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIImageView *loadingImgView; // @synthesize loadingImgView=_loadingImgView;
@property(retain, nonatomic) UIImageView *changeIconImgView; // @synthesize changeIconImgView=_changeIconImgView;
@property(retain, nonatomic) CEmoticonWrap *thxEmoticonWrap; // @synthesize thxEmoticonWrap=_thxEmoticonWrap;
@property(retain, nonatomic) UIButton *sendThxEmoticonBtn; // @synthesize sendThxEmoticonBtn=_sendThxEmoticonBtn;
@property(retain, nonatomic) UIView *thxEmoticonBkgView; // @synthesize thxEmoticonBkgView=_thxEmoticonBkgView;
@property(retain, nonatomic) MMEmoticonView *thxEmoticonView; // @synthesize thxEmoticonView=_thxEmoticonView;
@property(retain, nonatomic) UIButton *thxEmoticonTipsBtn; // @synthesize thxEmoticonTipsBtn=_thxEmoticonTipsBtn;
@property(retain, nonatomic) UIButton *thxEmoticonBtn; // @synthesize thxEmoticonBtn=_thxEmoticonBtn;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) UIView *m_pinImageView; // @synthesize m_pinImageView=_m_pinImageView;
@property(retain, nonatomic) UIView *m_pinImageViewAnimation; // @synthesize m_pinImageViewAnimation=_m_pinImageViewAnimation;
@property(retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickNameAnimation; // @synthesize m_helperForSenderNickNameAnimation=_m_helperForSenderNickNameAnimation;
@property(retain, nonatomic) ContactUpdateHelper *m_helperForSenderNickName; // @synthesize m_helperForSenderNickName=_m_helperForSenderNickName;
@property(retain, nonatomic) UIButton *m_showStoryBigBtn; // @synthesize m_showStoryBigBtn=_m_showStoryBigBtn;
@property(retain, nonatomic) UIView *m_globalSwipeUpView; // @synthesize m_globalSwipeUpView=_m_globalSwipeUpView;
@property(retain, nonatomic) UIButton *m_globalDragDownImageView; // @synthesize m_globalDragDownImageView=_m_globalDragDownImageView;
@property(retain, nonatomic) UILabel *m_globalStoryTitleLabel; // @synthesize m_globalStoryTitleLabel=_m_globalStoryTitleLabel;
@property(nonatomic) _Bool isAnimationMode; // @synthesize isAnimationMode=_isAnimationMode;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(nonatomic) unsigned int m_uiStatFromScene; // @synthesize m_uiStatFromScene;
@property(nonatomic) _Bool m_bEnterpriseRedEnvelopes; // @synthesize m_bEnterpriseRedEnvelopes;
@property(nonatomic) int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene; // @synthesize enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
- (void).cxx_destruct;
- (void)scrollViewDidEndScroll:(struct CGPoint *)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)isNeedShowStoryGuideAnimation;
- (void)onWCRedEnvelopesStoryViewControlleMaskViewDownloadFail;
- (void)onWCRedEnvelopesStoryViewControlleMaskViewDownloadOK;
- (void)panGestureRecognize:(id)arg1;
- (void)onWCRedEnvelopesStoryViewControlleClickGoToMP:(id)arg1;
- (void)resetAllStatus;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)onTableViewSwipeUp:(id)arg1;
- (void)onDragDownImageSwipe:(id)arg1;
- (void)onDragDownImageClick:(id)arg1;
- (void)onWCRedEnvelopesStoryViewControllerClickCloseBtn;
- (void)panFronViewGestureRecognize:(id)arg1;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)onTakePhotoCancelled;
- (id)GetCurrentViewController;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (_Bool)handleAddCameraEmoji;
- (void)onSendButtonClicked;
- (void)deleteSelctedEmoticon;
- (void)handleGetEmoticonWrap;
- (void)makeSelfieEmoitcon;
- (void)setEmoticonBoardHidden:(_Bool)arg1;
- (void)setLabelAreaDisabled:(_Bool)arg1;
- (void)handleEmoticonBoardViewMaskViewTap;
- (void)saveLastSelectEmoticonPid:(id)arg1;
- (id)getLastSelectEmoticonPid;
- (void)forwardEmoticon;
- (void)saveEmoticon;
- (void)emoticonViewLongPress:(id)arg1;
- (void)emotionViewClick;
- (_Bool)isDetailFromMessageScene;
- (void)handleThxEmoticonTap;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)selectThxEmoticonBtnClick;
- (void)selectThxEmoticonTopBtnClick;
- (_Bool)enableAnswerBySelfie;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)dismissDetailViewController;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)showSharePreConfirmView;
- (void)sendThxEmoticonBtnClick;
- (void)saveSendThxEmoticonWrap;
- (unsigned int)lastThxEmoticonType;
- (id)lastThxEmoticonMd5;
- (_Bool)hasEmoticon;
- (id)GetViewFooter;
- (id)addBorderViewBottomAtView:(id)arg1;
- (id)currentViewController;
- (void)OnWebAddContactReturn;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (id)generateEmitterLayer:(_Bool)arg1 withColors:(id)arg2;
- (void)showLuckyAnimationWithLuckyData:(id)arg1 needWhistle:(_Bool)arg2 withWhistleData:(id)arg3;
- (void)setLeftCloseBarButton;
- (void)animationForLabel;
- (void)startOpenAnimation;
- (void)OnToolViewDissmiss;
- (void)SendTextMessageToolView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)watchMyRedEnvelopesList;
- (void)handleTailOperation;
- (void)handleRedEnvelopesOperation:(id)arg1;
- (void)gotoUrl;
- (void)gotoBalanceDetail;
- (void)commentRedEnvelopes;
- (void)showStoryInfoGuideAnimation;
- (id)getTabview;
- (void)refreshViewWithData:(id)arg1;
- (void)reportChangeLinkClick:(unsigned int)arg1 Url:(id)arg2;
- (id)GetHeaderView:(id)arg1;
- (_Bool)isNotchScreen;
- (id)generateMaskImage:(id)arg1;
- (id)creatImageWithMaskImage:(id)arg1 andBackimage:(id)arg2;
- (id)cropImage:(id)arg1 toRect:(struct CGRect)arg2;
- (id)GetViewHeader:(id)arg1;
- (id)getHeaderImageViewWithImgSize:(double)arg1;
- (id)GetNavigationBarViewHeader:(id)arg1;
- (id)getAnimationView:(id)arg1;
- (id)getShowResourceDetailView;
- (void)onClickDetailLinkBtn;
- (void)bfs:(id)arg1;
- (void)initTableView;
- (_Bool)hasStoryInfo;
- (_Bool)hasRedSkin;
- (id)getTailButton;
- (id)getNoMoreBottomView;
- (id)getBottomView;
- (void)statExpourseOperation;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)loadMoreOrderList;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)OnRealnameVerfitySuccess:(id)arg1;
- (void)OnLeftBarButtonDoneLogic;
- (void)OnLeftBarButtonDone;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (_Bool)showSmallShareButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

