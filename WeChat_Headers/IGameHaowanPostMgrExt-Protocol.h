//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol IGameHaowanPostMgrExt <NSObject>

@optional
- (void)onGameHaowanPostCanceled:(NSString *)arg1;
- (void)onGameHaowanPostProgress:(NSString *)arg1 percent:(float)arg2;
- (void)onGameHaowanPostFailed:(NSString *)arg1 error:(NSError *)arg2;
- (void)onGameHaowanPostSucceed:(NSString *)arg1;
@end

