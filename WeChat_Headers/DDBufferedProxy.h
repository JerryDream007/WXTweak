//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class DDFileLogger, NSOutputStream;

@interface DDBufferedProxy : NSProxy
{
    DDFileLogger *_fileLogger;
    NSOutputStream *_buffer;
    unsigned long long _maxBufferSizeBytes;
    unsigned long long _currentBufferSizeBytes;
}

@property(nonatomic) unsigned long long currentBufferSizeBytes; // @synthesize currentBufferSizeBytes=_currentBufferSizeBytes;
@property(nonatomic) unsigned long long maxBufferSizeBytes; // @synthesize maxBufferSizeBytes=_maxBufferSizeBytes;
@property(retain, nonatomic) NSOutputStream *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) DDFileLogger *fileLogger; // @synthesize fileLogger=_fileLogger;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)unwrapFromBuffer;
- (id)wrapWithBuffer;
- (void)flush;
- (void)logMessage:(id)arg1;
- (void)lt_sendBufferedDataToFileLogger;
- (void)flushBuffer;
- (void)dealloc;
- (id)initWithFileLogger:(id)arg1;

@end

