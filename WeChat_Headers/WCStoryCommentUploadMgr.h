//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, WCStoryComment;
@protocol WCStoryCommentUploadMgrDelegate;

@interface WCStoryCommentUploadMgr : NSObject <PBMessageObserverDelegate, INewSyncExt, ICdnComMgrExt, INetworkStatusMgrExt>
{
    id <WCStoryCommentUploadMgrDelegate> _delegate;
    NSMutableArray *_taskQueue;
    NSMutableArray *_failedQueue;
    WCStoryComment *_curTask;
    NSMutableDictionary *_dicUploadingComments;
}

@property(retain, nonatomic) NSMutableDictionary *dicUploadingComments; // @synthesize dicUploadingComments=_dicUploadingComments;
@property(retain, nonatomic) WCStoryComment *curTask; // @synthesize curTask=_curTask;
@property(retain, nonatomic) NSMutableArray *failedQueue; // @synthesize failedQueue=_failedQueue;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) __weak id <WCStoryCommentUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onNetworkStatusChange:(int)arg1;
- (void)OnSetCdnDnsInfo;
- (void)onNewSyncOplogOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleNewStoryDoCommentResponse:(id)arg1;
- (void)onStoryCommentFail:(long long)arg1;
- (void)removeCommentFromDicUploadingCache:(id)arg1;
- (void)addCommentToDicUploadingCache:(id)arg1;
- (id)getUploadingCommentsWithTid:(id)arg1;
- (void)moveTaskToBack;
- (id)removeFirstTask;
- (void)addTask:(id)arg1;
- (_Bool)canTaskRetryWithErrorType:(long long)arg1;
- (void)deleteFailedComment:(id)arg1;
- (id)getFailedComments;
- (_Bool)startCgiWithStoryComment:(id)arg1;
- (void)CheckQueue;
- (void)retry;
- (void)addNewStoryComment:(id)arg1;
- (long long)getErrorTypeWithRetcode:(int)arg1;
- (_Bool)isRetryTimeout:(id)arg1;
- (_Bool)isFailCommentWithComment:(id)arg1;
- (_Bool)isUploadingWithComment:(id)arg1;
- (void)saveFailQueue;
- (void)saveTaskQueue;
- (void)loadFailQueue;
- (void)loadTaskQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

