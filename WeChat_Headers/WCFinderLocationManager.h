//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LocationRetrieveDelegate-Protocol.h"

@class CLLocation, LocationRetriever, NSCache, NSString;
@protocol WCFinderLocationManagerDelegate;

@interface WCFinderLocationManager : NSObject <LocationRetrieveDelegate>
{
    _Bool _updating;
    _Bool _debugOn;
    id <WCFinderLocationManagerDelegate> _delegate;
    LocationRetriever *_locationRetriever;
    CLLocation *_currentLocation;
    CLLocation *_debugLocation;
    NSCache *_locationCodeCache;
    CDUnknownBlockType _getLocationCompletionBlock;
    CDUnknownBlockType _getLocationFailedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType getLocationFailedBlock; // @synthesize getLocationFailedBlock=_getLocationFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType getLocationCompletionBlock; // @synthesize getLocationCompletionBlock=_getLocationCompletionBlock;
@property(retain, nonatomic) NSCache *locationCodeCache; // @synthesize locationCodeCache=_locationCodeCache;
@property(retain, nonatomic) CLLocation *debugLocation; // @synthesize debugLocation=_debugLocation;
@property(nonatomic, getter=isDebugOn) _Bool debugOn; // @synthesize debugOn=_debugOn;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(nonatomic) __weak id <WCFinderLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (id)locationKeyWithLatitude:(double)arg1 longitude:(double)arg2;
- (_Bool)stopUpdateRealTimeLocation;
- (_Bool)startUpdateRealTimeLocation;
- (_Bool)isLocationDebugOn;
- (_Bool)setLocationDebugOn:(_Bool)arg1 debugLocation:(id)arg2;
- (_Bool)getCodeFromLocation:(id)arg1 completion:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (_Bool)getLocationWithCompletion:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (id)cachedLocation;
- (void)setupLocationRetriever;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

