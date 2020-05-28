//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPAudioFrameBuffer : NSObject
{
    int _size;
    unsigned int _sampleRate;
    int _trackID;
    int _flags;
    char **_data;
    long long _channelLayout;
    long long _format;
    long long _ptsMs;
}

@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(nonatomic) long long ptsMs; // @synthesize ptsMs=_ptsMs;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) long long channelLayout; // @synthesize channelLayout=_channelLayout;
@property(nonatomic) unsigned int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) char **data; // @synthesize data=_data;

@end
