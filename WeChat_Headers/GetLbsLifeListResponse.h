//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface GetLbsLifeListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int autoQueryInterval; // @dynamic autoQueryInterval;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *buff; // @dynamic buff;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned int iconCount; // @dynamic iconCount;
@property(retain, nonatomic) NSMutableArray *iconList; // @dynamic iconList;
@property(nonatomic) unsigned int lifeCount; // @dynamic lifeCount;
@property(retain, nonatomic) NSMutableArray *lifeList; // @dynamic lifeList;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;

@end

