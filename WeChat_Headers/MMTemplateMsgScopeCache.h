//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface MMTemplateMsgScopeCache : MMObject <PBCoding, NSCopying>
{
    _Bool isGlobalRecv;
    _Bool hasSettingEntry;
    NSString *userName;
    NSMutableArray *scopeList;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasSettingEntry;
+ (void)PBArrayAdd_scopeList;
+ (void)PBArrayAdd_isGlobalRecv;
+ (void)PBArrayAdd_userName;
@property(nonatomic) _Bool hasSettingEntry; // @synthesize hasSettingEntry;
@property(retain, nonatomic) NSMutableArray *scopeList; // @synthesize scopeList;
@property(nonatomic) _Bool isGlobalRecv; // @synthesize isGlobalRecv;
@property(copy, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (id)showInSettingScopeList;
- (id)getScopeItemWithScopeID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

