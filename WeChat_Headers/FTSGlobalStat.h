//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FTSGlobalStat : NSObject
{
    unsigned int _msgIndexCount;
    unsigned int _favIndexCount;
    unsigned int _allContactCount;
    unsigned int _singleContactResultCnt;
    unsigned int _groupContactResultCnt;
    unsigned int _brandContactResultCnt;
    unsigned int _addressBookResultCnt;
    NSString *_searchId;
    NSMutableDictionary *_moduleStat;
}

@property(nonatomic) unsigned int addressBookResultCnt; // @synthesize addressBookResultCnt=_addressBookResultCnt;
@property(nonatomic) unsigned int brandContactResultCnt; // @synthesize brandContactResultCnt=_brandContactResultCnt;
@property(nonatomic) unsigned int groupContactResultCnt; // @synthesize groupContactResultCnt=_groupContactResultCnt;
@property(nonatomic) unsigned int singleContactResultCnt; // @synthesize singleContactResultCnt=_singleContactResultCnt;
@property(nonatomic) unsigned int allContactCount; // @synthesize allContactCount=_allContactCount;
@property(nonatomic) unsigned int favIndexCount; // @synthesize favIndexCount=_favIndexCount;
@property(nonatomic) unsigned int msgIndexCount; // @synthesize msgIndexCount=_msgIndexCount;
@property(retain, nonatomic) NSMutableDictionary *moduleStat; // @synthesize moduleStat=_moduleStat;
@property(nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
- (void).cxx_destruct;
- (id)parseModuleResultCount;
- (id)parseModuleTime;
- (void)doReportOneGlobalSearch:(id)arg1;
- (id)getModuleForType:(unsigned long long)arg1;
- (void)removeModule:(unsigned long long)arg1;
- (void)finishModule:(unsigned long long)arg1 withResultCount:(unsigned int)arg2;
- (void)startModeule:(unsigned long long)arg1;
- (void)startGlobalModule;
- (void)finishContactSearchWithSingleCount:(unsigned int)arg1 groupCount:(unsigned int)arg2 brandCount:(unsigned int)arg3 abfCount:(unsigned int)arg4;
- (id)init;

@end

