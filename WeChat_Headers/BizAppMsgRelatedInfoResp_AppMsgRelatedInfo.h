//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizAppMsgRelatedInfoResp_AppMsgFriendInfo, BizAppMsgRelatedInfoResp_AppMsgPayInfo, NSString;

@interface BizAppMsgRelatedInfoResp_AppMsgRelatedInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) BizAppMsgRelatedInfoResp_AppMsgFriendInfo *friendInfo; // @dynamic friendInfo;
@property(retain, nonatomic) NSString *friendReadCountStr; // @dynamic friendReadCountStr;
@property(retain, nonatomic) BizAppMsgRelatedInfoResp_AppMsgPayInfo *payInfo; // @dynamic payInfo;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

