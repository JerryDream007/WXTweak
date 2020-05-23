//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WCGetAddressControlLogicDelegate-Protocol.h"
#import "WCPayAddressRemarkEditViewDelegate-Protocol.h"
#import "WCPayBeforeTransferCgiDelegate-Protocol.h"
#import "WCPayDecimalKeyboardViewDelegate-Protocol.h"
#import "WCPayGetTransferWordingCgiDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"

@class CgiTransferBeforeResp, GetTransferWordingResponse, MMHeadImageView, MMTipsViewController, NSDictionary, NSString, RichTextView, UIButton, UILabel, UIView, WCPayAddressInfo, WCPayAddressRemarkEditView, WCPayAddressRemarkView, WCPayBeforeTransferCgi, WCPayDecimalKeyboardView, WCPayGetTransferWordingCgi, WCPayMoneyTextFieldItem, WCPayNoticeBanner, WCPayTextField, WCUIAlertView;
@protocol WCPayTransferMoneyViewControllerDelegate;

@interface WCPayTransferMoneyViewController : WCPayBaseViewController <WCGetAddressControlLogicDelegate, WCPayAddressRemarkEditViewDelegate, WCPayNoticeBannerDelegate, WCPayGetTransferWordingCgiDelegate, WCPayBeforeTransferCgiDelegate, WCPayDecimalKeyboardViewDelegate, MMTipsViewControllerDelegate, ILinkEventExt>
{
    UIButton *m_footerButton;
    id <WCPayTransferMoneyViewControllerDelegate> m_delegate;
    WCPayMoneyTextFieldItem *m_textFieldItem;
    MMTipsViewController *tipsView;
    _Bool m_bIsPoped;
    struct CGPoint m_originalViewCenter;
    _Bool m_isShowTips;
    NSDictionary *m_dicBanners;
    WCPayNoticeBanner *noticeBanner;
    UIView *headerView;
    UIView *footerView;
    UIView *backgroundView;
    _Bool _disableEditMoney;
    _Bool _bIsFeeTextFieldFirstTimeAutoFocus;
    CDUnknownBlockType _textFieldResignBlk;
    NSString *_remark;
    WCPayTextField *_feeTextField;
    RichTextView *_commentTextView;
    UILabel *_transferDisplaynameLabel;
    UILabel *_transferTitleLabel;
    MMHeadImageView *_headImageView;
    UIView *_bannerView;
    WCUIAlertView *_alertView;
    UIView *_contentView;
    UILabel *_moneyTitle;
    UILabel *_unitLabel;
    UILabel *_fixMoneyLabel;
    UIView *_m_lineView;
    UILabel *_transferDelayLabel;
    WCPayGetTransferWordingCgi *_wordingCgi;
    GetTransferWordingResponse *_wordingResponse;
    WCPayBeforeTransferCgi *_beforeCgi;
    CgiTransferBeforeResp *_beforeResponse;
    WCPayAddressRemarkEditView *_m_addressRemarkView;
    MMTipsViewController *_m_addressRemarkTipsView;
    WCPayAddressInfo *_m_addressInfo;
    WCPayAddressInfo *_m_selectedAddressInfo;
    WCPayAddressRemarkView *_m_addressDisplayView;
    NSString *_m_remarkOfAddress;
    WCPayDecimalKeyboardView *_keyboardView;
    double _keyboardHeight;
    UIView *_m_footerMask;
}

@property(retain) UIView *m_footerMask; // @synthesize m_footerMask=_m_footerMask;
@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) NSString *m_remarkOfAddress; // @synthesize m_remarkOfAddress=_m_remarkOfAddress;
@property(retain, nonatomic) WCPayAddressRemarkView *m_addressDisplayView; // @synthesize m_addressDisplayView=_m_addressDisplayView;
@property(retain, nonatomic) WCPayAddressInfo *m_selectedAddressInfo; // @synthesize m_selectedAddressInfo=_m_selectedAddressInfo;
@property(retain, nonatomic) WCPayAddressInfo *m_addressInfo; // @synthesize m_addressInfo=_m_addressInfo;
@property(retain, nonatomic) MMTipsViewController *m_addressRemarkTipsView; // @synthesize m_addressRemarkTipsView=_m_addressRemarkTipsView;
@property(retain, nonatomic) WCPayAddressRemarkEditView *m_addressRemarkView; // @synthesize m_addressRemarkView=_m_addressRemarkView;
@property(nonatomic) _Bool bIsFeeTextFieldFirstTimeAutoFocus; // @synthesize bIsFeeTextFieldFirstTimeAutoFocus=_bIsFeeTextFieldFirstTimeAutoFocus;
@property(retain, nonatomic) CgiTransferBeforeResp *beforeResponse; // @synthesize beforeResponse=_beforeResponse;
@property(retain, nonatomic) WCPayBeforeTransferCgi *beforeCgi; // @synthesize beforeCgi=_beforeCgi;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
@property(retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi; // @synthesize wordingCgi=_wordingCgi;
@property(retain, nonatomic) UILabel *transferDelayLabel; // @synthesize transferDelayLabel=_transferDelayLabel;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain, nonatomic) UILabel *fixMoneyLabel; // @synthesize fixMoneyLabel=_fixMoneyLabel;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UILabel *moneyTitle; // @synthesize moneyTitle=_moneyTitle;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) WCUIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *transferTitleLabel; // @synthesize transferTitleLabel=_transferTitleLabel;
@property(retain, nonatomic) UILabel *transferDisplaynameLabel; // @synthesize transferDisplaynameLabel=_transferDisplaynameLabel;
@property(retain, nonatomic) RichTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) WCPayTextField *feeTextField; // @synthesize feeTextField=_feeTextField;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) CDUnknownBlockType textFieldResignBlk; // @synthesize textFieldResignBlk=_textFieldResignBlk;
@property(nonatomic) _Bool disableEditMoney; // @synthesize disableEditMoney=_disableEditMoney;
- (void).cxx_destruct;
- (void)activeTextField;
- (void)showFloatConfirmBtn;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)reportAction:(unsigned long long)arg1;
- (void)reportEnter;
- (void)logicStopWithoutAddress:(id)arg1;
- (void)logicStop:(id)arg1 didGetAddress:(id)arg2;
- (void)onWCPayAddressRemarkEditViewKeyboardDidHide;
- (void)onWCPayAddressRemarkEditViewKeyboardWillShow:(id)arg1;
- (void)onWCPayAddressRemarkEditViewRemove;
- (void)onWCPayAddressRemarkEditViewEdit;
- (void)onWCPayAddressRemarkEditViewAddAddress;
- (void)onWCPayAddressRemarkEditViewDidChange;
- (void)onWCPayAddressRemarkEditViewEndEdit;
- (void)onKeyboardDidHide;
- (void)textFieldResignFirstResponderWithBlk:(CDUnknownBlockType)arg1;
- (void)beforeTransferCgi:(id)arg1 didFailWith:(id)arg2;
- (void)beforeTransferCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)setChargeFeeDesc;
- (void)setNoticeBanner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)changeY:(id)arg1;
- (void)showChargeFeeTips;
- (void)textFieldDidChange;
- (void)remarkConfirm;
- (void)remarkCancel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showAddressRemarkTipsView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)onOpenQA;
- (void)reloadTableView;
- (void)setLeftCancelButton:(id)arg1;
- (void)initNavigationBar;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (_Bool)isTransferScene;
- (void)FillSaveMoneyCancel;
- (void)CancelMySelfViewController;
- (id)getTransferDelayTips;
- (void)layoutForTransfer;
- (void)updateFooterButtonForTransferScene;
- (void)updateFooterButtonForTransferSceneKeyboard;
- (void)initNewHeaderView;
- (id)getTransferContactDisplayName;
- (void)requestBeforeInfo;
- (void)requestWording;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

