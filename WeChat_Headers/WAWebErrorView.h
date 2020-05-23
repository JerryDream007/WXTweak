//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class MMUIButton, MMUILabel, MMWebImageView, NSObject, NSString, UIButton, WAContact;
@protocol WAWebErrorViewDelegate;

@interface WAWebErrorView : MMUIView <MMWebImageViewDelegate>
{
    WAContact *m_contact;
    NSString *m_title;
    NSString *m_desc;
    NSString *m_buttonTitle;
    MMUILabel *m_descLabel;
    MMUIButton *_quitButton;
    _Bool m_isNeedGray;
    _Bool m_isSupportDark;
    MMWebImageView *m_logoView;
    MMUILabel *m_titleLabel;
    UIButton *m_operationButton;
    NSObject<WAWebErrorViewDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<WAWebErrorViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onOperationButtonTapped:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)initOperationButton;
- (void)initDescLabel;
- (void)onClickQuitButton;
- (void)showQuitButton;
- (void)initTitleLabel;
- (void)initLogoView;
- (void)layoutSubviews;
- (id)initWithUserName:(id)arg1 title:(id)arg2 desc:(id)arg3 buttonTitle:(id)arg4 needGrayed:(_Bool)arg5 supportDark:(_Bool)arg6;
- (id)initWithUserName:(id)arg1 title:(id)arg2 desc:(id)arg3 supportDark:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

