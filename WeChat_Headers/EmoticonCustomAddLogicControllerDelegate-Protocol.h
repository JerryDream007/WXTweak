//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AddEmoticonWrap;

@protocol EmoticonCustomAddLogicControllerDelegate <NSObject>

@optional
- (void)onAddCustomEmoticonPendingUploadWithWrap:(AddEmoticonWrap *)arg1;
- (void)onAddEmoticonFinishedWithWrap:(AddEmoticonWrap *)arg1 isSucceeded:(_Bool)arg2;
- (void)onTakePhotoCancelled;
@end

