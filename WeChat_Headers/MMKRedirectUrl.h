//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKRedirectUrl : NSObject
{
    int _type;
    NSString *_appid;
    NSString *_appVersion;
    NSString *_path;
    NSString *_btnName;
}

+ (id)KRedirectUrlWithType:(int)arg1 appid:(id)arg2 appVersion:(id)arg3 path:(id)arg4 btnName:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *btnName; // @synthesize btnName=_btnName;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (id)initWithType:(int)arg1 appid:(id)arg2 appVersion:(id)arg3 path:(id)arg4 btnName:(id)arg5;

@end

