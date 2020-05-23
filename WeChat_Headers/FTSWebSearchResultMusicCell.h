//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSWebSearchBaseResultTableViewCell.h"

#import "WSMusicDelegate-Protocol.h"

@class MMUIImageView, NSString, PardusResult;

@interface FTSWebSearchResultMusicCell : FTSWebSearchBaseResultTableViewCell <WSMusicDelegate>
{
    _Bool _isMusicPlayed;
    PardusResult *_resultData;
    NSString *_snsid;
    MMUIImageView *_playIconView;
}

@property(retain, nonatomic) MMUIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(nonatomic) _Bool isMusicPlayed; // @synthesize isMusicPlayed=_isMusicPlayed;
@property(retain, nonatomic) NSString *snsid; // @synthesize snsid=_snsid;
@property(retain, nonatomic) PardusResult *resultData; // @synthesize resultData=_resultData;
- (void).cxx_destruct;
- (void)notifyPageOfMusicStatusChanged:(id)arg1;
- (void)triggerClickCardArea:(id)arg1;
- (void)triggerClickMoreArea:(id)arg1;
- (void)triggerClickMusicArea:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setPlayIconPlayed:(_Bool)arg1;
- (void)updateSubviewWith:(id)arg1;
- (id)parseSnsIdFromMusicId:(id)arg1;
- (void)layoutCardInfoView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

