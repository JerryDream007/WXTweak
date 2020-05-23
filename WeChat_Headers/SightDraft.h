//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class MMImageExifLogInfo, NSMutableArray, NSString, VideoUploadStatInfo;

@interface SightDraft : MMObject <PBCoding, NSCoding>
{
    _Bool _isPortraitVideo;
    int draftID;
    int date;
    int _sourceForSNSUploadStat;
    NSMutableArray *itemAry;
    VideoUploadStatInfo *_uploadStatInfo;
    MMImageExifLogInfo *_exifLogInfo;
}

+ (id)draftWithVideoURL:(id)arg1 thumbImage:(id)arg2;
+ (id)draftWithVideoURL:(id)arg1 andPathPrefix:(id)arg2;
+ (id)draftWithVideoURL:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_date;
+ (void)PBArrayAdd_itemAry;
+ (void)PBArrayAdd_draftID;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(retain, nonatomic) VideoUploadStatInfo *uploadStatInfo; // @synthesize uploadStatInfo=_uploadStatInfo;
@property(nonatomic) _Bool isPortraitVideo; // @synthesize isPortraitVideo=_isPortraitVideo;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat=_sourceForSNSUploadStat;
@property(nonatomic) int date; // @synthesize date;
@property(retain, nonatomic) NSMutableArray *itemAry; // @synthesize itemAry;
@property(nonatomic) int draftID; // @synthesize draftID;
- (void).cxx_destruct;
- (id)getItem:(int)arg1;
- (void)addItem:(id)arg1 pathPrefix:(id)arg2;
- (void)addItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;
- (void)saveToPhotoLibraryWithTips:(_Bool)arg1;
- (void)saveToPhotoLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

