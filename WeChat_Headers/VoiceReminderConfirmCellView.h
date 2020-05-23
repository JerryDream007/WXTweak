//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "IAudioReceiverExt-Protocol.h"
#import "ISettingExtChange-Protocol.h"
#import "IVoiceReminderExt-Protocol.h"

@class MMUIActivityIndicatorView, NSString, UIButton, UIImageView, UILabel, UIView, VoiceReminderConfirmViewModel;

@interface VoiceReminderConfirmCellView : BaseMessageCellView <IVoiceReminderExt, IAudioReceiverExt, ISettingExtChange>
{
    int m_playCount;
    _Bool m_playing;
    _Bool m_deleting;
    UIImageView *m_bgImageView;
    UIImageView *m_remindStatusImageView;
    UIImageView *m_bodyBkgImageView;
    UILabel *m_dateLabel;
    UILabel *m_timeLabel;
    UILabel *m_timeDescLabel;
    UILabel *m_descLabel;
    UIButton *m_playButton;
    UIButton *m_cancelButton;
    MMUIActivityIndicatorView *m_spinner;
    UIView *m_maskView;
    UIView *m_separatorView;
}

- (void).cxx_destruct;
- (void)onSettingExtChanged:(int)arg1;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)onDeleteRemindMsgsReturn:(_Bool)arg1 msgWrap:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)downloadAppData;
- (void)cancelRemindMsg:(id)arg1;
- (void)becomeRemindStatus;
- (id)getRemindBackgroundImage:(id)arg1;
- (void)stopPlayVoice;
- (void)startPlayVoice;
- (void)onPlayButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onDelete:(id)arg1;
- (id)operationMenuItems;
- (void)initView;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VoiceReminderConfirmViewModel *viewModel; // @dynamic viewModel;

@end

