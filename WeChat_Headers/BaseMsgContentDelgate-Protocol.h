//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AudioRecorderUserData, CBaseContact, CContact, CEmoticonWrap, CMessageWrap, ChatRoomPanelDynamicWeAppItem, LinkWeAppJumpWrap, MMInputToolView, MMWebViewController, MsgSendOpEntry, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURL, ServiceAppData, SolitaireObj, TranslateInfo, UIBarButtonItem, UIImage, UIScrollView, UIView;

@protocol BaseMsgContentDelgate <NSObject>
- (double)GetTitleLabelOffset;
- (UIView *)GetTitleTailImageView;
- (_Bool)ShouldShowMultiSelectMode;
- (_Bool)shouldPreventViewcontrollerAutorotate;
- (void)AddAtUser:(NSString *)arg1;
- (NSString *)nameForHeadImageLongPressed:(CBaseContact *)arg1;
- (_Bool)canReloadViewIfMemoryWarning;
- (void)didSelectSearchResultForMessageWrap:(CMessageWrap *)arg1 highlightKeywords:(NSArray *)arg2;
- (void)didSelectSearchResultForMessageWrap:(CMessageWrap *)arg1;
- (NSArray *)previewActionItems;
- (void)clearSearchKeywordList;
- (NSArray *)getSearchKeywordList;
- (_Bool)shouldHightlightSearchedKeyWord;
- (_Bool)shouldSearchedMsgHightlight;
- (unsigned int)getFromScene;
- (unsigned int)getSearchedMsgLocalID;
- (_Bool)isInForwardMsgPreView;
- (_Bool)ShouldShowSearchedAnyMsg;
- (_Bool)ShouldShowSearchResultMessageArray;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (_Bool)ShouldShowSearchBar;
- (NSString *)GetRightBarButtonTitle;
- (NSString *)GetRightBarButtonImageName;
- (void)StopPlaying:(CMessageWrap *)arg1;
- (void)StartPlaying:(CMessageWrap *)arg1 FromTouch:(_Bool)arg2;
- (_Bool)IsRecording;
- (AudioRecorderUserData *)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (void)CancelRecording;
- (void)StopRecording;
- (void)StartRecording;
- (NSString *)GetHeadImageUrl:(NSString *)arg1;
- (CBaseContact *)GetContact;
- (void)onTextChange:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (void)onSaveDraft;
- (void)onWillPushFromNavigationController;
- (void)onWillPopFromNavigationController;
- (void)onBackFromNavigationController;
- (void)onPopFromNavigationController;
- (void)ResendMessage:(CMessageWrap *)arg1;
- (void)VoiceModeClicked;
- (void)onTableViewDidEndDisplayingCell:(CMessageWrap *)arg1;
- (void)onAddMsgAndScrollToBottomAnimated:(CMessageWrap *)arg1;
- (void)onAddMsgAndNoScroll:(CMessageWrap *)arg1;
- (void)onScrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)onScrollViewDidScrollToTop:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)onScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)onEnterRoom;
- (void)onExitRoom;
- (void)ViewDidDisappear;
- (void)ViewWillDisappear;
- (void)ViewWillAppear;
- (void)ViewDidAppear;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (NSString *)getSubTitle;
- (NSString *)GetUsrTitleCPKey;
- (_Bool)isUsrTitleUnsafe;
- (NSString *)GetUsrTitle;
- (_Bool)HasCustomToolBar;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)OpenEmoticonToolView:(MMInputToolView *)arg1;
- (void)CustomToolViewEX:(MMInputToolView *)arg1;
- (_Bool)onLoadDownMoreMessage;
- (NSMutableArray *)onLoadMoreMessage;
- (void)onSendCaptrueImage:(NSURL *)arg1;
- (void)onOpenCameraController;
- (void)onOpenFileBrowser;
- (void)onOpenMediaBrowser;
- (void)DelMsgWithMsgList:(NSArray *)arg1 DelAll:(_Bool)arg2;
- (void)clearDownLeftCount;
- (void)clearLastCreateTime;
- (NSMutableArray *)GetMessageArray;
- (void)onOpenServiceApp:(ServiceAppData *)arg1;
- (void)onChatRoomToolButtonClick;
- (void)onShowInputToolWeAppAr:(NSArray *)arg1;
- (void)onInputToolWeAppButtonClickedWithItem:(ChatRoomPanelDynamicWeAppItem *)arg1;
- (void)onGroupPayButtonClick;
- (void)onRedEnvelopesControlLogic;
- (void)onTransferMoneyControlLogic;
- (void)onOpenMyCardPkgViewController;
- (void)onOpenMyFavoritesListController;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)ViewLocation:(CMessageWrap *)arg1;
- (void)SelectLocation:(_Bool)arg1;
- (void)onMultiTalkButtonClick;
- (void)ShareCard;
- (void)SendNotGameEmoticonMessage:(CMessageWrap *)arg1 errorMsg:(NSString *)arg2;
- (void)SendEmoticonMessage:(CEmoticonWrap *)arg1;
- (void)SendEmojiArtMessage:(NSString *)arg1;
- (void)SendTextMessage:(NSString *)arg1 externInfo:(NSDictionary *)arg2;
- (void)SendTextMessageWithSolitaire:(SolitaireObj *)arg1;
- (void)SendTextMessage:(NSString *)arg1 replyingMessage:(CMessageWrap *)arg2;
- (void)SendTextMessage:(NSString *)arg1;
- (void)SendMessageWrap:(CMessageWrap *)arg1;
- (CMessageWrap *)GetMessageFromImage:(UIImage *)arg1;
- (_Bool)CanReportShowInfo;
- (_Bool)CanShowSight;
- (_Bool)CanShowBanner;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (_Bool)CanRotateOrientation;
- (_Bool)CanWXTalk;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanAddApp;
- (_Bool)CanOpenCamera;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(UIImage *)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (NSArray *)getInputToolWeAppOpEntryAr;
- (MsgSendOpEntry *)getMsgSendOpEntry;
- (void)OnClickAttachmentButtonAction;
- (void)OnClickAttachmentButton:(_Bool)arg1;
- (_Bool)IsShowAttachmentButtonRedDot;
- (void)markChatRead;
- (void)clearAllUnread;
- (void)didShowFirstUnReadMessage;
- (void)setLastCreateTime:(unsigned long long)arg1;
- (NSMutableArray *)GetMessageArrayFrom:(unsigned int)arg1 createTime:(unsigned long long)arg2;
- (CMessageWrap *)GetFirstUnReadMessage;
- (NSMutableArray *)GetSearchedResultContentMessageArray;
- (NSMutableArray *)GetDownMessageArray;
- (void)OpenContactInfo:(CBaseContact *)arg1;
- (void)OpenDetailInfo;

@optional
- (void)setWillDismissStatus;
- (NSString *)businessInfoForCurrentPage;
- (NSArray *)obtainSessionParamExpects;
- (NSString *)tagForCurrentPage;
- (void)clearGroupUndoneSessionFlag;
- (void)onChangeReferMsgId:(long long)arg1;
- (void)onScheduleMessage:(CMessageWrap *)arg1;
- (void)onClickUnreadTip;
- (void)setHasShowUnreadTip;
- (void)onClickPlayMusicBtn:(CMessageWrap *)arg1 isPlay:(_Bool)arg2;
- (void)onClickMsg:(CMessageWrap *)arg1;
- (void)onDeleteMsg:(CMessageWrap *)arg1;
- (void)onClickFavMenu:(CMessageWrap *)arg1;
- (void)onClickVoiceTranslate:(CMessageWrap *)arg1;
- (void)onClickTranslateMsg:(CMessageWrap *)arg1 translateInfo:(TranslateInfo *)arg2;
- (void)onClickMessageWrapOpenedWebViewUseFastLoad:(CMessageWrap *)arg1;
- (void)onClickTextFloatPreView:(CMessageWrap *)arg1;
- (_Bool)isSharePreview;
- (_Bool)isChatStatusNotifyOpen;
- (void)headerImageClickedWithMsg:(CMessageWrap *)arg1;
- (void)onExposeTemplateMsg:(CMessageWrap *)arg1;
- (void)openOpenSDKAppBrand:(CMessageWrap *)arg1;
- (void)openWaApp:(CMessageWrap *)arg1;
- (void)shareDataToOpenSDK:(CMessageWrap *)arg1;
- (void)onClickWeAppReceiveSessionMsg;
- (void)onClickReceiveBrandMsg;
- (void)onClickShieldBrandMsg;
- (void)hadShowNewXmlSystemMessage:(CMessageWrap *)arg1;
- (void)clickLinkToDealWithSysXml:(CMessageWrap *)arg1 fromScene:(NSString *)arg2;
- (void)setExtraInfo;
- (NSMutableDictionary *)getExtraInfo;
- (NSString *)genMsgSource;
- (void)hasTapReaderNodeView;
- (_Bool)shouldHideToolViewWhenKeyboardHide;
- (void)viewDidRotateToOrientation:(long long)arg1;
- (void)viewWillRotateToOrientation:(long long)arg1;
- (void)RevokeMsg:(CMessageWrap *)arg1;
- (void)SetMsgPlayed:(CMessageWrap *)arg1;
- (void)exitTracking;
- (void)openTrackRoom:(NSNumber *)arg1;
- (void)clearUpdatableMsgNotify;
- (void)clearAACount;
- (void)clearTransferCount;
- (void)clearNewInvApprove;
- (void)clearNewInvCount;
- (void)clearAtMeCount;
- (void)onInputTextDeleteAll;
- (void)onMultiMsgSelected:(NSMutableArray *)arg1 Username:(NSString *)arg2;
- (void)resetWithMessageWrap:(CMessageWrap *)arg1;
- (void)onMultiSelectCancel;
- (void)onMultiMsgDelete:(NSMutableArray *)arg1;
- (void)downloadMultiMsg:(NSMutableArray *)arg1 saveToAlbum:(_Bool)arg2;
- (void)sendMultiMsgToBrandContact:(NSMutableArray *)arg1 To:(CContact *)arg2;
- (void)sendMultiMsgByMail:(NSMutableArray *)arg1;
- (void)sendMultiMsgToFriend:(NSMutableArray *)arg1;
- (void)addMultiMsgToMyFav:(NSMutableArray *)arg1;
- (void)toBeEditing:(_Bool)arg1;
- (UIBarButtonItem *)getLeftBarButton;
- (void)onMassSendSendAgain:(NSArray *)arg1;
- (_Bool)isShowHeadImage:(CMessageWrap *)arg1;
- (MMWebViewController *)getPreviewForLink:(NSString *)arg1;
- (void)OnTagWeAppLink:(LinkWeAppJumpWrap *)arg1 messageWrap:(CMessageWrap *)arg2;
- (void)OnTagLink:(NSString *)arg1 messageWrap:(CMessageWrap *)arg2;
- (UIBarButtonItem *)GetRightBarBtn;
- (_Bool)hasDownMoreMsg;
- (_Bool)hasMoreMsg;
- (_Bool)canShowChatRoomInfo;
- (UIView *)getBackgroundView;
- (void)OnVideoPlayEnd:(CMessageWrap *)arg1 isForceStop:(_Bool)arg2;
- (void)StartDownloadVideo:(CMessageWrap *)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartDownloadVideo:(CMessageWrap *)arg1;
- (void)StartUploadVideo:(CMessageWrap *)arg1;
- (void)StopDownloadVideo:(CMessageWrap *)arg1;
- (void)StopUploadVideo:(CMessageWrap *)arg1;
- (_Bool)NeedRightButtonRedDot;
@end
