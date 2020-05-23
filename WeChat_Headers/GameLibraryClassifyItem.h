//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface GameLibraryClassifyItem : MMObject <PBCoding>
{
    NSString *classifyID;
    NSString *iconURL;
    NSString *name;
    NSString *webURL;
}

+ (void)initialize;
+ (void)PBArrayAdd_webURL;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_iconURL;
+ (void)PBArrayAdd_classifyID;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL;
@property(retain, nonatomic) NSString *classifyID; // @synthesize classifyID;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

