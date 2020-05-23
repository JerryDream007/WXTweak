//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ChatMigrationHeartBeatMonitorDelegate-Protocol.h"
#import "LocalAreaCommunicationClientDelegate-Protocol.h"
#import "WXGBackupBasicLogicDelegate-Protocol.h"

@class ChatMigrationHeartBeatMonitor, MMTimer, NSString, WXGBackupBasicLogic, WXGChatLogProtoHandler, WXGLocalAreaCommunicationClient;
@protocol OS_dispatch_queue, WXGBackupLogicDelegate;

@interface WXGBackupLogic : NSObject <LocalAreaCommunicationClientDelegate, WXGBackupBasicLogicDelegate, ChatMigrationHeartBeatMonitorDelegate>
{
    _Bool _bStartTransfer;
    _Bool _bGetFirstPacket;
    _Bool _bInDilutedNetwork;
    _Bool _bDone;
    id <WXGBackupLogicDelegate> _delegate;
    WXGLocalAreaCommunicationClient *_networkHandler;
    WXGChatLogProtoHandler *_protoHandler;
    WXGBackupBasicLogic *_processLogic;
    ChatMigrationHeartBeatMonitor *_heartBeatMonitor;
    NSObject<OS_dispatch_queue> *_processLogicQueue;
    MMTimer *_sendHeartBeatTimer;
}

@property(nonatomic) _Bool bDone; // @synthesize bDone=_bDone;
@property(nonatomic) _Bool bInDilutedNetwork; // @synthesize bInDilutedNetwork=_bInDilutedNetwork;
@property(retain, nonatomic) MMTimer *sendHeartBeatTimer; // @synthesize sendHeartBeatTimer=_sendHeartBeatTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processLogicQueue; // @synthesize processLogicQueue=_processLogicQueue;
@property(retain, nonatomic) ChatMigrationHeartBeatMonitor *heartBeatMonitor; // @synthesize heartBeatMonitor=_heartBeatMonitor;
@property(nonatomic) _Bool bGetFirstPacket; // @synthesize bGetFirstPacket=_bGetFirstPacket;
@property(nonatomic) _Bool bStartTransfer; // @synthesize bStartTransfer=_bStartTransfer;
@property(retain, nonatomic) WXGBackupBasicLogic *processLogic; // @synthesize processLogic=_processLogic;
@property(retain, nonatomic) WXGChatLogProtoHandler *protoHandler; // @synthesize protoHandler=_protoHandler;
@property(retain, nonatomic) WXGLocalAreaCommunicationClient *networkHandler; // @synthesize networkHandler=_networkHandler;
@property(nonatomic) __weak id <WXGBackupLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getConnectDebugInfo;
- (void)onHeartBeatAckIDWrong;
- (void)onHeartBeatLate;
- (void)onHeartBeatOK;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)arg1;
- (void)processOnMainThreadAlertCode:(unsigned long long)arg1;
- (void)processAlertCode:(unsigned long long)arg1;
- (void)processOnMainThreadNotifyCode:(unsigned long long)arg1;
- (void)processNotifyCode:(unsigned long long)arg1;
- (void)onBasicLogicNotifyCanReconnect;
- (void)onBasicLogicAlert:(unsigned long long)arg1;
- (void)onBasicProgresssCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onBasicLogicNotifyEvent:(unsigned long long)arg1;
- (_Bool)onBasicLogicSendData:(id)arg1;
- (void)onClientTransferSendSpeed:(float)arg1 receiveSpeed:(float)arg2;
- (void)onClientReconnected;
- (void)onClientReconnecting;
- (void)onClientConnectFail;
- (void)onClientDisconnect;
- (void)onClientReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)notifyClientReconnect;
- (void)processHeartBeatResponseData:(id)arg1;
- (void)processHeartBeatRequestData:(id)arg1;
- (void)processCancelRequestData:(id)arg1;
- (void)processAuthResponseData:(id)arg1;
- (void)processCommandResponseData:(id)arg1;
- (void)processCommandRequestData:(id)arg1;
- (void)p_dataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)sendHeartBeatRequestWithAck:(unsigned long long)arg1;
- (void)sendHeartBeatResponseWithAck:(unsigned long long)arg1;
- (void)p_sendHeartBeat;
- (void)restSendHeartBeatTimer;
- (void)sendCancelRequest;
- (void)sendSecondAuthenticateRequestPakage;
- (void)sendFirstAuthenticateRequestPakage;
- (_Bool)sendCommandRequestWithCommand:(int)arg1 withData:(id)arg2;
- (_Bool)sendCommandResponseWithCommand:(int)arg1;
- (_Bool)sendData:(id)arg1;
- (_Bool)isInDilutedNetwork;
- (void)startAuthenticate;
- (void)cancelLogic;
- (void)confirmLogic;
- (void)stopLogic;
- (void)startLogic;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

