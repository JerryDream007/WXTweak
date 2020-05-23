//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "CountryCodePickerDelegate-Protocol.h"

@class CountryCodeWrap, MMTimer, TenpaySecureCtrl, UIButton, UIImageView, UILabel, UIView, WCPayCss, WCUITextField;
@protocol WCPayVerifyPhoneViewControllerDelegate;

@interface WCPayVerifyPhoneViewController : WCPayBaseViewController <CountryCodePickerDelegate>
{
    _Bool _hasSendCode;
    unsigned int _lastSendTime;
    id <WCPayVerifyPhoneViewControllerDelegate> _m_delegate;
    WCPayCss *_css;
    UIView *_containerView;
    UIView *_headerView;
    UIView *_footerView;
    UILabel *_headerTitle;
    UIView *_firstLineView;
    UIView *_phoneSection;
    UILabel *_areaCodeTitle;
    UIImageView *_areaCodeIcon;
    TenpaySecureCtrl *_phoneInput;
    UIView *_phoneLineView;
    UIView *_verifyCodeSection;
    UILabel *_verifyCodeTitle;
    WCUITextField *_verifyCodeInput;
    UIButton *_verifyCodeButton;
    UIView *_verifyCodeLineView;
    UIButton *_infoButton;
    UIButton *_nextButton;
    double _keyboardHeight;
    CountryCodeWrap *_currentCountry;
    MMTimer *_verifyCodeTimer;
}

@property(retain) MMTimer *verifyCodeTimer; // @synthesize verifyCodeTimer=_verifyCodeTimer;
@property(retain) CountryCodeWrap *currentCountry; // @synthesize currentCountry=_currentCountry;
@property unsigned int lastSendTime; // @synthesize lastSendTime=_lastSendTime;
@property _Bool hasSendCode; // @synthesize hasSendCode=_hasSendCode;
@property double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain) UIView *verifyCodeLineView; // @synthesize verifyCodeLineView=_verifyCodeLineView;
@property(retain) UIButton *verifyCodeButton; // @synthesize verifyCodeButton=_verifyCodeButton;
@property(retain) WCUITextField *verifyCodeInput; // @synthesize verifyCodeInput=_verifyCodeInput;
@property(retain) UILabel *verifyCodeTitle; // @synthesize verifyCodeTitle=_verifyCodeTitle;
@property(retain) UIView *verifyCodeSection; // @synthesize verifyCodeSection=_verifyCodeSection;
@property(retain) UIView *phoneLineView; // @synthesize phoneLineView=_phoneLineView;
@property(retain) TenpaySecureCtrl *phoneInput; // @synthesize phoneInput=_phoneInput;
@property(retain) UIImageView *areaCodeIcon; // @synthesize areaCodeIcon=_areaCodeIcon;
@property(retain) UILabel *areaCodeTitle; // @synthesize areaCodeTitle=_areaCodeTitle;
@property(retain) UIView *phoneSection; // @synthesize phoneSection=_phoneSection;
@property(retain) UIView *firstLineView; // @synthesize firstLineView=_firstLineView;
@property(retain) UILabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property __weak id <WCPayVerifyPhoneViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (id)encryptVerifyCode;
- (id)encryptPhoneNo;
- (id)currentCountryCode;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)verifyCodeInputDidChanged:(id)arg1;
- (void)verifyCodeInputDidEndOnExit:(id)arg1;
- (void)phoneInputDidChanged:(id)arg1;
- (void)phoneInputDidEndOnExit:(id)arg1;
- (void)onTapNext;
- (void)onTapAreaCode:(id)arg1;
- (void)verifyCodeTimeOut;
- (void)onTapVerifyCodeButton;
- (void)onClickInfoButton;
- (void)updateNextButton;
- (void)updateFooterView;
- (void)updateInfoButton;
- (void)updateVerifyCodeLineView;
- (void)updateVerifyCodeButton;
- (void)updateVerifyCodeInput;
- (void)updateVerifyCodeTitle;
- (void)updateVerifyCodeSection;
- (void)updatePhoneLineView;
- (void)updatePhoneInput;
- (void)updateAreaCodeIcon;
- (void)updateAreaCodeTitle;
- (void)updatePhoneSection;
- (void)updateFirstLineView;
- (void)updateHeaderTitle;
- (void)updateHeaderView;
- (void)updateView;
- (void)refreshViewWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

