//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, SKBuiltinBuffer_t;

@interface EmojiUploadInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) SKBuiltinBuffer_t *emojiBuffer; // @dynamic emojiBuffer;
@property(retain, nonatomic) NSString *externXml; // @dynamic externXml;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) int newXmlFlag; // @dynamic newXmlFlag;
@property(retain, nonatomic) NSString *report; // @dynamic report;
@property(retain, nonatomic) NSString *sendMsgTicket; // @dynamic sendMsgTicket;
@property(nonatomic) int startPos; // @dynamic startPos;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(nonatomic) int totalLen; // @dynamic totalLen;
@property(nonatomic) int type; // @dynamic type;

@end
