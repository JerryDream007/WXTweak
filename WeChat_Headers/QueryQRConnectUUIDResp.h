//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface QueryQRConnectUUIDResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int errcode; // @dynamic errcode;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *redirectUrl; // @dynamic redirectUrl;
@property(retain, nonatomic) NSString *userConfirmRedirectUrl; // @dynamic userConfirmRedirectUrl;
@property(retain, nonatomic) NSString *userConfirmWording; // @dynamic userConfirmWording;
@property(retain, nonatomic) NSString *wxToken; // @dynamic wxToken;

@end
