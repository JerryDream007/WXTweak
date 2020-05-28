//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface EmoticonDownloadMd5ListObject : MMObject <PBCoding>
{
    unsigned int m_lastUpdateTime;
    NSMutableArray *m_md5List;
    unsigned long long _m_type;
}

+ (unsigned int)extFlagForCustomEmoticonType:(unsigned long long)arg1;
+ (id)getEmoticonDownloadMd5ListPathWithType:(unsigned long long)arg1;
+ (id)getEmoticonBackupRootDir;
+ (_Bool)IsEmoticonDownloadMd5ListExistWithType:(unsigned long long)arg1;
+ (id)GetEmoticonDownloadMd5ListObjectWithType:(unsigned long long)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_lastUpdateTime;
+ (void)PBArrayAdd_m_md5List;
@property(nonatomic) unsigned long long m_type; // @synthesize m_type=_m_type;
@property(nonatomic) unsigned int m_lastUpdateTime; // @synthesize m_lastUpdateTime;
@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List;
- (void).cxx_destruct;
- (void)checkCompleteForMd5Object:(id)arg1;
- (unsigned long long)indexOfMd5ObjectWithMd5:(id)arg1;
- (id)sortedAndUnionWithEmoticonWraps:(id)arg1;
- (id)getNextUncompleteMd5Object;
- (id)getMd5List;
- (unsigned long long)completeCount;
- (unsigned long long)totalCount;
- (unsigned long long)checkCompleteAndReturnNeedMd5DownloadCount;
- (void)checkComplete;
- (void)failedMd5:(id)arg1;
- (id)completeMd5:(id)arg1;
- (void)clearMd5List;
- (void)stickyMd5List:(id)arg1;
- (void)removeMd5:(id)arg1;
- (void)addMd5ObjectList:(id)arg1 atFirst:(_Bool)arg2;
- (void)addMd5ObjectList:(id)arg1;
- (void)updateLastUpdateTime;
- (_Bool)moreThanADaySinceLastUpdateTime;
- (void)saveToFile;
- (void)dealloc;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
