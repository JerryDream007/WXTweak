//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseControlLogic.h"

#import "VoicePrintHandlerDelegate-Protocol.h"
#import "WCAccountErrorHandleLogicDelegate-Protocol.h"

@class NSString, WCAccountControlData, WCAccountErrorHandleLogic;

@interface WCAccountBaseControlLogic : WCBaseControlLogic <VoicePrintHandlerDelegate, WCAccountErrorHandleLogicDelegate>
{
    WCAccountControlData *m_data;
    WCAccountErrorHandleLogic *m_errorHandleLogic;
    _Bool m_bNeverAutoStop;
}

- (void).cxx_destruct;
- (_Bool)isFromReg;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2 closeFirstViewWithFadeoutAnimation:(_Bool)arg3;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2;
- (void)checkStopLogic;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2;
- (_Bool)onHandleError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)vcResignFirstResponder;
- (void)vcBecomeFirstResponder;
- (void)stopLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

