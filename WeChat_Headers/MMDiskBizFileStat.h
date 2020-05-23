//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMDiskBizFileStat : NSObject <PBCoding>
{
    unsigned int m_fileNum;
    unsigned int m_delFileNum;
    unsigned long long m_fileSize;
    unsigned long long m_delFileSize;
}

+ (void)sumDicFilStat:(id)arg1 toDic:(id)arg2;
+ (void)sumDelFileNum:(unsigned int)arg1 DelFileSize:(unsigned long long)arg2 withType:(int)arg3 dicStat:(id)arg4;
+ (void)sumFileNum:(unsigned int)arg1 fileSize:(unsigned long long)arg2 withType:(int)arg3 dicStat:(id)arg4;
+ (id)getFileStatFormDic:(id)arg1 withType:(int)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_m_delFileSize;
+ (void)PBArrayAdd_m_delFileNum;
+ (void)PBArrayAdd_m_fileSize;
+ (void)PBArrayAdd_m_fileNum;
@property(nonatomic) unsigned long long m_delFileSize; // @synthesize m_delFileSize;
@property(nonatomic) unsigned int m_delFileNum; // @synthesize m_delFileNum;
@property(nonatomic) unsigned long long m_fileSize; // @synthesize m_fileSize;
@property(nonatomic) unsigned int m_fileNum; // @synthesize m_fileNum;
- (void)sumFileStat:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

