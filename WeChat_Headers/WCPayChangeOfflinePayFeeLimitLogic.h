//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayChangeOfflinePayLimitFeeViewControllerDelegate-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayVerifyPayCardViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCPayChangeOfflinePayFeeLimitLogic : WCPayControlLogic <WCPayChangeOfflinePayLimitFeeViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate>
{
    int m_enWCPayChangeOfflinePayFeeLimitLogicScene;
}

@property(nonatomic) int m_enWCPayChangeOfflinePayFeeLimitLogicScene; // @synthesize m_enWCPayChangeOfflinePayFeeLimitLogicScene;
- (void)OnChangeOfflinePayLimit:(id)arg1 Error:(id)arg2;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerChangeToLimit:(long long)arg1;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerBack;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)EndChangeOfflinePayFeeLimit;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

