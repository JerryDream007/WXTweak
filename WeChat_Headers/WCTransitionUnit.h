//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;

@interface WCTransitionUnit : NSObject <UIViewControllerTransitioningDelegate>
{
    unsigned long long _transitionType;
    struct CGPoint _transitionBeginPoint;
    struct CGRect _transitionResultRect;
}

+ (id)transitionUnitWithType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) struct CGRect transitionResultRect; // @synthesize transitionResultRect=_transitionResultRect;
@property(nonatomic) struct CGPoint transitionBeginPoint; // @synthesize transitionBeginPoint=_transitionBeginPoint;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

