//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TPDownloadRecord : NSObject
{
    NSString *_uip;
    NSString *_cdnUip;
    NSString *_cdnIp;
    NSString *_cdnUrl;
    long long _speed;
    long long _maxSpeed;
    long long _totalSpeed;
    long long _totalSpeedCount;
}

@property(nonatomic) long long totalSpeedCount; // @synthesize totalSpeedCount=_totalSpeedCount;
@property(nonatomic) long long totalSpeed; // @synthesize totalSpeed=_totalSpeed;
@property(nonatomic) long long maxSpeed; // @synthesize maxSpeed=_maxSpeed;
@property(nonatomic) long long speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *cdnIp; // @synthesize cdnIp=_cdnIp;
@property(retain, nonatomic) NSString *cdnUip; // @synthesize cdnUip=_cdnUip;
@property(retain, nonatomic) NSString *uip; // @synthesize uip=_uip;
- (void).cxx_destruct;

@end
