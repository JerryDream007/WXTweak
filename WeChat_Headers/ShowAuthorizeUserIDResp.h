//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AuthorizeInfoWithPhone, AuthorizeUserIDAlarm, AuthorizeUserIDBaseResponse, AuthorizeUserIDJumpItem, BaseResponse, NSMutableArray, NSString, VerifyWxPayReq;

@interface ShowAuthorizeUserIDResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AuthorizeUserIDAlarm *alarmBox; // @dynamic alarmBox;
@property(retain, nonatomic) NSString *appiconUrl; // @dynamic appiconUrl;
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(retain, nonatomic) AuthorizeUserIDBaseResponse *authBaseResponse; // @dynamic authBaseResponse;
@property(nonatomic) _Bool authChecked; // @dynamic authChecked;
@property(retain, nonatomic) NSString *authWording; // @dynamic authWording;
@property(retain, nonatomic) AuthorizeInfoWithPhone *authorizeInfo; // @dynamic authorizeInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *businessWording; // @dynamic businessWording;
@property(retain, nonatomic) NSString *confirmWording; // @dynamic confirmWording;
@property(retain, nonatomic) NSMutableArray *jumpList; // @dynamic jumpList;
@property(retain, nonatomic) NSMutableArray *newUserIdList; // @dynamic newUserIdList;
@property(retain, nonatomic) AuthorizeUserIDJumpItem *protocolJump; // @dynamic protocolJump;
@property(retain, nonatomic) NSString *protocolPrefix; // @dynamic protocolPrefix;
@property(nonatomic) unsigned int showStatus; // @dynamic showStatus;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSMutableArray *userIdList; // @dynamic userIdList;
@property(retain, nonatomic) VerifyWxPayReq *verifyPayReq; // @dynamic verifyPayReq;

@end
