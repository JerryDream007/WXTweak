//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class FinderExtendedReading, FinderLocation, FinderTopic, NSArray, NSMutableArray, NSString, WCFinderStreamLocationInfo, WCFinderUploadMediaTask;

@interface WCFinderUploadTask : MMObject <PBCoding>
{
    _Bool isRetrying;
    _Bool startCndUpload;
    _Bool bCgiPosting;
    _Bool _fromCamera;
    unsigned int createTime;
    unsigned int enterQueueTime;
    unsigned int startUploadTime;
    unsigned int finishUploadTime;
    unsigned int firstFailTime;
    unsigned int lastFailTime;
    int retCode;
    int cgiRetCode;
    unsigned int retryCount;
    NSString *tid;
    NSString *clientId;
    long long totalsize;
    long long errorType;
    NSString *username;
    NSArray *mediaArray;
    unsigned long long currentUploadingCDNIndex;
    NSString *title;
    NSString *extraText;
    FinderLocation *location;
    FinderExtendedReading *extReading;
    NSString *refContentID;
    WCFinderStreamLocationInfo *locationInfo;
    FinderTopic *topic;
    double _videoWith;
    double _videoHeight;
    unsigned long long _mediaType;
    WCFinderStreamLocationInfo *_mediaLocationInfo;
    NSMutableArray *_topics;
}

+ (id)finderTaskWithDataItem:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_locationInfo;
+ (void)PBArrayAdd_refContentID;
+ (void)PBArrayAdd_extReading;
+ (void)PBArrayAdd_location;
+ (void)PBArrayAdd_extraText;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_currentUploadingCDNIndex;
+ (void)PBArrayAdd_mediaArray;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_errorType;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_cgiRetCode;
+ (void)PBArrayAdd_retCode;
+ (void)PBArrayAdd_lastFailTime;
+ (void)PBArrayAdd_firstFailTime;
+ (void)PBArrayAdd_finishUploadTime;
+ (void)PBArrayAdd_startUploadTime;
+ (void)PBArrayAdd_enterQueueTime;
+ (void)PBArrayAdd_bCgiPosting;
+ (void)PBArrayAdd_startCndUpload;
+ (void)PBArrayAdd_isRetrying;
+ (void)PBArrayAdd_totalsize;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_clientId;
+ (void)PBArrayAdd_tid;
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
@property(nonatomic) _Bool fromCamera; // @synthesize fromCamera=_fromCamera;
@property(retain, nonatomic) WCFinderStreamLocationInfo *mediaLocationInfo; // @synthesize mediaLocationInfo=_mediaLocationInfo;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) double videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) double videoWith; // @synthesize videoWith=_videoWith;
@property(retain, nonatomic) FinderTopic *topic; // @synthesize topic;
@property(retain, nonatomic) WCFinderStreamLocationInfo *locationInfo; // @synthesize locationInfo;
@property(copy, nonatomic) NSString *refContentID; // @synthesize refContentID;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @synthesize extReading;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location;
@property(retain, nonatomic) NSString *extraText; // @synthesize extraText;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) unsigned long long currentUploadingCDNIndex; // @synthesize currentUploadingCDNIndex;
@property(copy, nonatomic) NSArray *mediaArray; // @synthesize mediaArray;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(nonatomic) long long errorType; // @synthesize errorType;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount;
@property(nonatomic) int cgiRetCode; // @synthesize cgiRetCode;
@property(nonatomic) int retCode; // @synthesize retCode;
@property(nonatomic) unsigned int lastFailTime; // @synthesize lastFailTime;
@property(nonatomic) unsigned int firstFailTime; // @synthesize firstFailTime;
@property(nonatomic) unsigned int finishUploadTime; // @synthesize finishUploadTime;
@property(nonatomic) unsigned int startUploadTime; // @synthesize startUploadTime;
@property(nonatomic) unsigned int enterQueueTime; // @synthesize enterQueueTime;
@property(nonatomic) _Bool bCgiPosting; // @synthesize bCgiPosting;
@property(nonatomic) _Bool startCndUpload; // @synthesize startCndUpload;
@property(nonatomic) _Bool isRetrying; // @synthesize isRetrying;
@property(nonatomic) long long totalsize; // @synthesize totalsize;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId;
@property(copy, nonatomic) NSString *tid; // @synthesize tid;
- (void).cxx_destruct;
- (_Bool)directCGIPost;
- (_Bool)isForward;
@property(readonly, nonatomic) WCFinderUploadMediaTask *currentMediaTask;
- (id)genObjectDesc;
- (unsigned long long)currentUploadSuccessSize;
- (_Bool)shouldStopRetry;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

