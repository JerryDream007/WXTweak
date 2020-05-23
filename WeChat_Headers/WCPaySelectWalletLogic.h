//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPaySelectWalletViewControllerDelegate-Protocol.h"

@class JSEvent, NSString, WCPaySelectWalletViewController, WCPayWalletInfo;

@interface WCPaySelectWalletLogic : WCPayControlLogic <WCPaySelectWalletViewControllerDelegate>
{
    WCPaySelectWalletViewController *selectWalletViewController;
    WCPayWalletInfo *selectedWallet;
    JSEvent *m_jsEvent;
    unsigned int _scene;
}

@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)OnSetUserWallet:(id)arg1;
- (void)OnQueryUserWallet:(id)arg1 Error:(id)arg2;
- (void)OnSelectWallet:(id)arg1;
- (void)OnSelectWalletBack;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

