//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AddAvatarUploadImageTask, NSString;

@protocol AddAvatarUploadImageTaskDelegate <NSObject>
- (void)onUploadImageFail:(unsigned int)arg1 errMsg:(NSString *)arg2 task:(AddAvatarUploadImageTask *)arg3;
- (void)onUploadImageCompleted:(NSString *)arg1 task:(AddAvatarUploadImageTask *)arg2;
@end

