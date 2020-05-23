//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface DBContactOther : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int deleteFlag;
    unsigned int friendScene;
    NSString *antispamTicket;
    NSString *sourceExtInfo;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(struct NSObject *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_sourceExtInfo;
+ (void)PBArrayAdd_antispamTicket;
+ (void)PBArrayAdd_friendScene;
+ (void)PBArrayAdd_deleteFlag;
@property(retain, nonatomic) NSString *sourceExtInfo; // @synthesize sourceExtInfo;
@property(retain, nonatomic) NSString *antispamTicket; // @synthesize antispamTicket;
@property(nonatomic) unsigned int friendScene; // @synthesize friendScene;
@property(nonatomic) unsigned int deleteFlag; // @synthesize deleteFlag;
- (void).cxx_destruct;
- (struct NSObject *)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

