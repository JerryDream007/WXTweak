//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface SendSmsReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *optionalMobile; // @dynamic optionalMobile;
@property(retain, nonatomic) NSString *payToken; // @dynamic payToken;
@property(retain, nonatomic) NSString *phoneId; // @dynamic phoneId;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end
