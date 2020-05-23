//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRTCMenuResponder.h"

#import "ForwardMessageLogicDelegate-Protocol.h"

@class CMessageWrap, ForwardMessageLogicController, NSString;

@interface MMRTCTextMsgFloatMenuResponder : MMRTCMenuResponder <ForwardMessageLogicDelegate>
{
    CMessageWrap *_messageWrap;
    ForwardMessageLogicController *_forwardLogicController;
}

@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onSelectTextCopy:(id)arg1;
- (void)onSelectTextForward:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

