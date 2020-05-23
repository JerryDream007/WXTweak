//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class CTRichTextView, NSString, VoiceTransInfo;

@interface VoiceMessageViewModel : CommonMessageViewModel
{
    _Bool _isPlaying;
    _Bool _inMultiSelectStatus;
    double _voiceNodeWidth;
    double _voiceNodeHeight;
    VoiceTransInfo *_voiceTranslateInfo;
    CTRichTextView *_richTextViewForCalcu;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(retain, nonatomic) CTRichTextView *richTextViewForCalcu; // @synthesize richTextViewForCalcu=_richTextViewForCalcu;
@property(nonatomic) _Bool inMultiSelectStatus; // @synthesize inMultiSelectStatus=_inMultiSelectStatus;
@property(retain, nonatomic) VoiceTransInfo *voiceTranslateInfo; // @synthesize voiceTranslateInfo=_voiceTranslateInfo;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double voiceNodeHeight; // @synthesize voiceNodeHeight=_voiceNodeHeight;
@property(nonatomic) double voiceNodeWidth; // @synthesize voiceNodeWidth=_voiceNodeWidth;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
- (void)onMessageStopPlaying;
- (void)onMessageStartPlaying;
- (void)foldTranslateResult;
- (void)removeTranslateVoiceInfo;
- (void)stopTranslateVoice;
- (void)translateVoice;
- (void)adjustTableOffset:(struct CGRect)arg1 delayForReloadTable:(_Bool)arg2;
- (_Bool)canShowTranslateLoadingView;
- (_Bool)canShowTranslateText;
- (_Bool)hasLocalTranslateResult;
- (id)pathOfTranslateResult;
@property(readonly, nonatomic) struct CGSize displayTextSize;
@property(readonly, nonatomic) struct CGSize translatedTextSize;
- (id)getDisplayString;
- (struct CGRect)getCellFrame;
@property(readonly, nonatomic) NSString *voiceTimeStirng;
@property(readonly, nonatomic) double voiceTimeLength;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end

