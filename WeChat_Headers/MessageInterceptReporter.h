//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MessageInterceptReporter : NSObject
{
    _Bool _isChatroom;
    _Bool _isSelfSend;
    long long _msgId;
    long long _interceptType;
    unsigned long long _lastAction;
}

@property(nonatomic) unsigned long long lastAction; // @synthesize lastAction=_lastAction;
@property(nonatomic) long long interceptType; // @synthesize interceptType=_interceptType;
@property(nonatomic) _Bool isSelfSend; // @synthesize isSelfSend=_isSelfSend;
@property(nonatomic) _Bool isChatroom; // @synthesize isChatroom=_isChatroom;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
- (void)logWithAction:(unsigned long long)arg1 copyLen:(unsigned long long)arg2;
- (void)recordAction:(unsigned long long)arg1 copyLen:(unsigned long long)arg2;
- (void)recordAction:(unsigned long long)arg1;
- (void)checkReport;
- (void)reset;
- (id)initWithMsgWrap:(id)arg1;

@end
