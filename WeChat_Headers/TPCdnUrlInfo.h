//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TPCdnUrlInfo : NSObject
{
    NSString *_url;
    NSString *_uIp;
    NSString *_cdnIp;
    NSString *_errorStr;
}

@property(readonly, nonatomic) NSString *errorStr; // @synthesize errorStr=_errorStr;
@property(readonly, nonatomic) NSString *cdnIp; // @synthesize cdnIp=_cdnIp;
@property(readonly, nonatomic) NSString *uIp; // @synthesize uIp=_uIp;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1 uIp:(id)arg2 cdnIp:(id)arg3 errorStr:(id)arg4;

@end
