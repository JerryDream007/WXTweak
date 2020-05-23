//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface QCustomLayerConfigItem : NSObject
{
    NSString *_layerid;
    NSString *_url;
    NSString *_version;
    NSArray *_params;
    double _zoom_max;
    double _zoom_min;
    NSDictionary *_originJSON;
}

@property(readonly, nonatomic) NSDictionary *originJSON; // @synthesize originJSON=_originJSON;
@property(readonly, nonatomic) double zoom_min; // @synthesize zoom_min=_zoom_min;
@property(readonly, nonatomic) double zoom_max; // @synthesize zoom_max=_zoom_max;
@property(readonly, nonatomic) NSArray *params; // @synthesize params=_params;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *layerid; // @synthesize layerid=_layerid;
- (void).cxx_destruct;
- (id)initWithJSON:(id)arg1;

@end

