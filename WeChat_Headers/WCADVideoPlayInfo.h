//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCADVideoPlayInfo : NSObject
{
    int playCount;
    unsigned long long startPlayTime;
    unsigned long long endPlayTime;
    unsigned long long playTotalTime;
    unsigned long long videoTotalTime;
    int playMode;
    int playOrientation;
    _Bool _bUsingInfoFromWCPlayer;
    unsigned long long _currentPlaybackTime;
    unsigned long long _totalPlaybackTime;
}

@property(nonatomic) unsigned long long totalPlaybackTime; // @synthesize totalPlaybackTime=_totalPlaybackTime;
@property(nonatomic) unsigned long long currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) _Bool bUsingInfoFromWCPlayer; // @synthesize bUsingInfoFromWCPlayer=_bUsingInfoFromWCPlayer;
@property(nonatomic) int playOrientation; // @synthesize playOrientation;
@property(nonatomic) int playMode; // @synthesize playMode;
@property(nonatomic) unsigned long long videoTotalTime; // @synthesize videoTotalTime;
@property(nonatomic) unsigned long long playTotalTime; // @synthesize playTotalTime;
@property(nonatomic) unsigned long long endPlayTime; // @synthesize endPlayTime;
@property(nonatomic) unsigned long long startPlayTime; // @synthesize startPlayTime;
@property(nonatomic) int playCount; // @synthesize playCount;
- (unsigned long long)fetchTotalPlaybackTime;
- (id)init;

@end

