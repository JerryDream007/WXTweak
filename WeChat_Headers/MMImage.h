//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class EditImageAttr, MMAsset, MMImageExifLogInfo, MMImageLocation, NSData, NSString;

@interface MMImage : UIImage <PBCoding, NSCoding>
{
    int m_processState;
    int sourceForSNSUploadStat;
    long long mattID;
    NSString *dataPath;
    long long imageFrom;
    NSString *referenceUrlStr;
    NSString *m_assetClassNameStr;
    MMImageLocation *m_location;
    MMImageExifLogInfo *exifLogInfo;
    NSString *draftPath;
    MMAsset *_m_asset;
    UIImage *_m_imageFromAsset;
    NSData *_m_imageData;
}

+ (void)initialize;
+ (void)PBArrayAdd_draftPath;
+ (void)PBArrayAdd_exifLogInfo;
+ (void)PBArrayAdd_sourceForSNSUploadStat;
+ (void)PBArrayAdd_m_location;
+ (void)PBArrayAdd_m_assetClassNameStr;
+ (void)PBArrayAdd_referenceUrlStr;
+ (void)PBArrayAdd_m_processState;
+ (void)PBArrayAdd_imageFrom;
+ (void)PBArrayAdd_dataPath;
+ (void)PBArrayAdd_mattID;
@property(retain, nonatomic) NSData *m_imageData; // @synthesize m_imageData=_m_imageData;
@property(retain, nonatomic) UIImage *m_imageFromAsset; // @synthesize m_imageFromAsset=_m_imageFromAsset;
@property(retain, nonatomic) MMAsset *m_asset; // @synthesize m_asset=_m_asset;
@property(copy, nonatomic) NSString *draftPath; // @synthesize draftPath;
@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo;
@property(nonatomic) int sourceForSNSUploadStat; // @synthesize sourceForSNSUploadStat;
@property(retain, nonatomic) MMImageLocation *m_location; // @synthesize m_location;
@property(copy, nonatomic) NSString *m_assetClassNameStr; // @synthesize m_assetClassNameStr;
@property(copy, nonatomic) NSString *referenceUrlStr; // @synthesize referenceUrlStr;
@property(nonatomic) int m_processState; // @synthesize m_processState;
@property(nonatomic) long long imageFrom; // @synthesize imageFrom;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath;
@property(nonatomic) long long mattID; // @synthesize mattID;
- (void).cxx_destruct;
- (Class)m_assetClass;
- (void)setReferenceURL:(id)arg1;
- (id)referenceURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)init;
- (void)commonInit;
- (id)getPBPropertyTable;
@property(retain, nonatomic) EditImageAttr *editImageAttr;
@property(nonatomic) _Bool isEdited;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
