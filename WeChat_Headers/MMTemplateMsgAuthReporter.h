//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface MMTemplateMsgAuthReporter : MMObject
{
}

+ (void)reportGoToSettingPageInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (void)reportToastInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (void)reportAlertViewInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (void)reportPopUpInBrandChatPage:(id)arg1 msgContentByUrlEncoded:(id)arg2;
+ (id)genKVUidInBrandChatPage:(id)arg1;
+ (unsigned int)getContactTypeForUserName:(id)arg1;
+ (void)reportAlertViewInTemplateMsgBottom:(id)arg1 forUser:(id)arg2;
+ (void)reportActionSheetInTemplateMsgBottom:(id)arg1 forUser:(id)arg2;
+ (void)reportScopeCacheModifyInSettingPage:(id)arg1;

@end

