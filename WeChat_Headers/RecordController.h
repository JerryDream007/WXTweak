//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IAudioSenderExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IRemoteControlCheckExt-Protocol.h"

@class MMTimer;
@protocol RecordControllerDelegate;

@interface RecordController : MMObject <IAudioSenderExt, IRemoteControlCheckExt, IMsgExt>
{
    MMTimer *m_TimeoutTimer;
    id <RecordControllerDelegate> m_delegate;
    _Bool m_bRecording;
    _Bool m_bRecordEnabled;
    unsigned int m_uiTmpRecordID;
    _Bool m_bRemoteControl;
    unsigned int m_currentTmpFormat;
    double m_iLastMsgSentTime;
    _Bool m_isShowPreparing;
}

@property(nonatomic) _Bool m_isShowPreparing; // @synthesize m_isShowPreparing;
@property(nonatomic) unsigned int m_uiTmpRecordID; // @synthesize m_uiTmpRecordID;
@property(nonatomic) __weak id <RecordControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)Reset;
- (void)onVoiceMsgSent:(id)arg1;
- (void)CheckIfButtonPressing:(id)arg1;
- (void)OnSendError:(id)arg1 ErrNo:(int)arg2;
- (void)OnMsgSent:(id)arg1;
- (void)OnAddMsg:(id)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecording:(unsigned int)arg1;
- (void)OnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)iRemoteControlCheckShouldFinishRecord;
- (void)iRemoteControlCheckShouldBeginRecord;
- (_Bool)canRemoteRecord;
- (void)stopRecording_notification:(id)arg1;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)CancelRecording;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (void)StopRecording;
- (void)StopRecordingInternal;
- (void)StartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2 UserInfo:(id)arg3;
- (void)StartTmpRecording;
- (void)StartTmpRecording:(unsigned int)arg1;
- (void)StartTmpRecordInternal;
- (void)StartRecordingInternal:(id)arg1;
- (void)RecordingTimeOutCounting;
- (void)TooLongTips;
- (void)TooShortTips;
- (void)ResetStateWithNotifyResetTips:(id)arg1;
- (void)setButtonHighlighted:(_Bool)arg1;
- (_Bool)isRecording;
- (id)init;
- (void)UnRegister;
- (void)Register;

@end

