//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface GetColikeBlockListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int total; // @dynamic total;
@property(nonatomic) unsigned int updateFlag; // @dynamic updateFlag;
@property(nonatomic) unsigned long long version; // @dynamic version;

@end

