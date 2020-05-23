//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMVoiceSearchReport : NSObject
{
    unsigned long long _beginTimeInMs;
    unsigned long long _voiceRecordEndTimeInMs;
    unsigned long long _voiceTranEndTimeInMs;
    NSString *_localSearchId;
}

@property(retain, nonatomic) NSString *localSearchId; // @synthesize localSearchId=_localSearchId;
@property(nonatomic) unsigned long long voiceTranEndTimeInMs; // @synthesize voiceTranEndTimeInMs=_voiceTranEndTimeInMs;
@property(nonatomic) unsigned long long voiceRecordEndTimeInMs; // @synthesize voiceRecordEndTimeInMs=_voiceRecordEndTimeInMs;
@property(nonatomic) unsigned long long beginTimeInMs; // @synthesize beginTimeInMs=_beginTimeInMs;
- (void).cxx_destruct;
- (void)kvstatVoiceSearchInfo:(id)arg1;
- (void)kvstatVoiceSearchBegin;

@end

