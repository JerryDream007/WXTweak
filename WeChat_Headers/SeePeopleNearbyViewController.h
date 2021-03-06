//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "PeopleNearByListViewControllerDelegate-Protocol.h"
#import "SeePeopleNearByUIDelegate-Protocol.h"
#import "VerifyPhoneDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "settingMyAccountExtInfoDelegate-Protocol.h"

@class LBSErrorViewController, MMTipsViewController, NSString, PeopleNearByListViewController, SeePeopleNearByLogicController;

@interface SeePeopleNearbyViewController : MMUIViewController <SeePeopleNearByUIDelegate, settingMyAccountExtInfoDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, PeopleNearByListViewControllerDelegate, VerifyPhoneDelegate>
{
    PeopleNearByListViewController *m_peopleListView;
    SeePeopleNearByLogicController *m_logicController;
    LBSErrorViewController *m_findNothingView;
    MMTipsViewController *m_introView;
    unsigned int m_uiScene;
    _Bool _isAdClicked;
    NSString *_shownAdId;
}

@property(retain, nonatomic) NSString *shownAdId; // @synthesize shownAdId=_shownAdId;
@property(nonatomic) _Bool isAdClicked; // @synthesize isAdClicked=_isAdClicked;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
@property(retain, nonatomic) LBSErrorViewController *findNothingView; // @synthesize findNothingView=m_findNothingView;
@property(retain, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;
@property(retain, nonatomic) PeopleNearByListViewController *peopleListView; // @synthesize peopleListView=m_peopleListView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onSelectAd:(id)arg1;
- (void)onCloseAd:(id)arg1;
- (void)bindPhoneReturn;
- (void)onUploadAddressbookBtnClicked;
- (void)onBindPhoneBtnClicked;
- (void)adjustSubviewRects;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)confirmClearMyLbsData:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)SettingMyAccountExtInfoExit;
- (void)onGetCertificationFinish;
- (void)onSelectedWithLbsPoiItem:(id)arg1;
- (void)onSelectedWithLbsContactInfo:(id)arg1;
- (void)showPeopleInfoView:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)onUpdateLbsContactInfoError:(int)arg1;
- (void)onGetLBSRecommendPoiList:(id)arg1;
- (void)onUpdateAdvertisement:(id)arg1;
- (void)onUpdateLbsContactInfoFinishedWithData:(id)arg1;
- (void)onClearMyLbsDataFinishedWithResult:(_Bool)arg1;
- (void)goBackToRootView;
- (void)showMessage:(id)arg1;
- (void)onRefreshMyFriends;
- (void)onClearMyLbsData;
- (void)willAppear;
- (void)viewDidLoad;
- (id)title;
- (void)setTitleNavView;
- (id)getSexImage;
- (void)setRightNavBtn;
- (void)setRightNavBtnNil;
- (void)showOperationMenu:(id)arg1;
- (void)promptForLBSUsageWarnning;
- (void)onClickNeverPromptForAgree:(id)arg1;
- (void)promptForProfileExtInfo;
- (_Bool)isProfileExtInfoOK;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

