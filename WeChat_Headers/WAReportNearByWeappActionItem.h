//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportNearByWeappActionItem : WAReportBaseItem
{
    unsigned int _appCount;
    unsigned int _clicktime;
    unsigned long long _enterScene;
    unsigned long long _openType;
    NSString *_nearbyListID;
}

@property(nonatomic) unsigned int clicktime; // @synthesize clicktime=_clicktime;
@property(copy, nonatomic) NSString *nearbyListID; // @synthesize nearbyListID=_nearbyListID;
@property(nonatomic) unsigned int appCount; // @synthesize appCount=_appCount;
@property(nonatomic) unsigned long long openType; // @synthesize openType=_openType;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (void).cxx_destruct;
- (id)reportString;

// Remaining properties
@property(copy, nonatomic) NSString *sceneNote;

@end

