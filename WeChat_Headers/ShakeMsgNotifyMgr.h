//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IMsgExt-Protocol.h"

@class NSMutableArray;
@protocol ShakeMsgNotifyMgrDelegate;

@interface ShakeMsgNotifyMgr : MMObject <IMsgExt>
{
    NSMutableArray *_messageQueue;
    NSMutableArray *_unreadMsgQueue;
    _Bool _messageLoaded;
    id <ShakeMsgNotifyMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <ShakeMsgNotifyMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)hasSameMsg:(id)arg1;
- (void)insertMsgItem:(id)arg1;
- (void)deleteAllMessages;
- (void)deleteMessageItem:(id)arg1;
- (void)markMessageListRead:(id)arg1;
- (id)getMessagesFrom:(id)arg1 maxCount:(unsigned int)arg2;
- (id)getLastestUnreadMessage;
- (id)getUnreadMsgPidDesc;
- (id)getUnreadMessages;
- (unsigned long long)getUnreadMessageCount;
- (_Bool)hasUnreadMessages;
- (void)saveMessage;
- (void)tryLoadMessage;
- (void)dealloc;
- (id)init;
- (void)serviceReloadData;

@end

