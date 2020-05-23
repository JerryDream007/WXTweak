//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBase.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class PublicWifiGetA8keyResult, UIViewController;
@protocol APCheckPwdDelegate;

@interface APCheckPwd : APBase <PBMessageObserverDelegate>
{
    id <APCheckPwdDelegate> _delegate;
    PublicWifiGetA8keyResult *_geta8keyResult;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) PublicWifiGetA8keyResult *geta8keyResult; // @synthesize geta8keyResult=_geta8keyResult;
@property(nonatomic) __weak id <APCheckPwdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handlePortalModeWithProtolResp:(id)arg1;
- (void)handlePasswordModel;
- (void)handleAuthModeWithProtolType:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponse:(id)arg1;
- (void)sendCheckPwdToServer;
- (void)didSuccess;
- (void)checkSuccessWithSsid:(id)arg1;
- (void)start;
- (id)initWithGetA8keyResult:(id)arg1 scene:(unsigned int)arg2 delegate:(id)arg3 vc:(id)arg4;
- (void)dealloc;

@end

