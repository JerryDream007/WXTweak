//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavorComposeInfo, NSString;

@protocol WCPayBizF2FTransferMoneyViewControllerDelegate <NSObject>
- (_Bool)BizTransferMoneyCurrentLogicIsTop;
- (void)onBizTransferMoneyTransferBtnClickWithAmount:(unsigned int)arg1 payerComment:(NSString *)arg2 composeInfo:(FavorComposeInfo *)arg3;
- (void)onBizTransferMoneyViewControllerBack;
@end

