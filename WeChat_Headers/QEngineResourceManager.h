//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface QEngineResourceManager : NSObject
{
    NSString *_configDirectoryPath;
    NSBundle *_QMapKitBundle;
    NSString *_businessKey;
}

+ (id)defaultConfigDirectoryPath;
+ (id)roadEventDataOnlineDirectoryPath;
+ (id)worldmapOnlineDirectoryPath;
+ (id)satelliteOnlineDirectoryPath;
+ (id)vectorDataOnlineDirectoryPath;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(retain, nonatomic) NSBundle *QMapKitBundle; // @synthesize QMapKitBundle=_QMapKitBundle;
@property(copy, nonatomic) NSString *configDirectoryPath; // @synthesize configDirectoryPath=_configDirectoryPath;
- (void).cxx_destruct;
- (id)initWithBusinessKey:(id)arg1;
- (void)setupConfigDirectoryWithBusinessKey:(id)arg1;
- (void)setupBundle;
- (_Bool)checkConfigFileMD5:(id)arg1;
- (_Bool)compareResourceVersion:(id)arg1 cacheVersionDict:(id)arg2;
- (_Bool)shouldOverwrite:(id)arg1;
- (id)localVersionPlistPath;
- (void)copyConfigResource;

@end

