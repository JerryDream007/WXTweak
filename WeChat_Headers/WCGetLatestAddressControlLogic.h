//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizControlLogic.h"

#import "WCAddressLogicMgrExt-Protocol.h"

@class JSEvent, NSString, WCAddressAuthenticationSturct, WCAddressBaseAddress;

@interface WCGetLatestAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt>
{
    JSEvent *m_jsEvent;
    WCAddressAuthenticationSturct *m_oWCAddressAuthenticationSturct;
    WCAddressBaseAddress *m_oWCAddressBaseAddress;
    NSString *m_nsAppUserName;
}

- (void).cxx_destruct;
- (void)OnNotAcceptGetLatestAddress;
- (void)OnAcceptGetLatestAddress;
- (void)OnGetLatestAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)stopLogic;
- (void)startLogic;
- (void)handleGetLatestAddress;
- (void)dealloc;
- (id)initWithJSEvent:(id)arg1 AuthenticationInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
