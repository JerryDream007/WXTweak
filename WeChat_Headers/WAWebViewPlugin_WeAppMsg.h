//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "IWAWebViewPlugin_WeAppMsg-Protocol.h"

@class CMessageWrap, ForwardMessageLogicController, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WaReportMessageVideoActionItem;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_WeAppMsg : WAWebViewPlugin_embedView <ForwardMessageLogicDelegate, IWAWebViewPlugin_WeAppMsg>
{
    struct CGPoint _ptOffset;
    _Bool _offsetChanged;
    NSMutableDictionary *_shareKeys;
    NSMutableArray *_reportArray;
    WaReportMessageVideoActionItem *_waMessageVideoReport;
    _Bool _waitingShare;
    _Bool shouldUseDynamicShare;
    _Bool _bNoCapture;
    _Bool sdkToWX;
    _Bool _shouldUseUpdatableShare;
    _Bool _isToDoMessage;
    _Bool _bInSharing;
    _Bool _bSpecificContact;
    _Bool _downloadImage;
    _Bool _forNativeApp;
    int _cardType;
    id <IWAWebViewPluginDelegate> _resultDelegate;
    NSData *_thumbData;
    NSString *_updatableShareTemplateId;
    NSString *_toDoActivityId;
    NSString *_messageExtraData;
    NSMutableDictionary *_customData;
    ForwardMessageLogicController *_forwardLogic;
    NSMutableDictionary *_scrollOffset;
    ForwardMessageLogicController *_shareController;
    NSDictionary *_shareParam;
    unsigned long long _shareImageType;
    NSArray *_arrSpecificSendToContacts;
    CMessageWrap *_waitingMsgWrap;
    NSArray *_arrWaitingContactList;
}

@property(retain, nonatomic) NSArray *arrWaitingContactList; // @synthesize arrWaitingContactList=_arrWaitingContactList;
@property(retain, nonatomic) CMessageWrap *waitingMsgWrap; // @synthesize waitingMsgWrap=_waitingMsgWrap;
@property(retain, nonatomic) NSArray *arrSpecificSendToContacts; // @synthesize arrSpecificSendToContacts=_arrSpecificSendToContacts;
@property(nonatomic) _Bool forNativeApp; // @synthesize forNativeApp=_forNativeApp;
@property(nonatomic) unsigned long long shareImageType; // @synthesize shareImageType=_shareImageType;
@property(nonatomic) _Bool downloadImage; // @synthesize downloadImage=_downloadImage;
@property(retain, nonatomic) NSDictionary *shareParam; // @synthesize shareParam=_shareParam;
@property(nonatomic) __weak ForwardMessageLogicController *shareController; // @synthesize shareController=_shareController;
@property(retain, nonatomic) NSMutableDictionary *scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) NSMutableDictionary *customData; // @synthesize customData=_customData;
@property(nonatomic) _Bool bSpecificContact; // @synthesize bSpecificContact=_bSpecificContact;
@property(retain, nonatomic) NSString *messageExtraData; // @synthesize messageExtraData=_messageExtraData;
@property(nonatomic) _Bool bInSharing; // @synthesize bInSharing=_bInSharing;
@property(retain, nonatomic) NSString *toDoActivityId; // @synthesize toDoActivityId=_toDoActivityId;
@property(nonatomic) _Bool isToDoMessage; // @synthesize isToDoMessage=_isToDoMessage;
@property(retain, nonatomic) NSString *updatableShareTemplateId; // @synthesize updatableShareTemplateId=_updatableShareTemplateId;
@property(nonatomic) _Bool shouldUseUpdatableShare; // @synthesize shouldUseUpdatableShare=_shouldUseUpdatableShare;
@property(nonatomic) int cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(nonatomic) _Bool sdkToWX; // @synthesize sdkToWX;
@property(nonatomic) _Bool bNoCapture; // @synthesize bNoCapture=_bNoCapture;
@property(nonatomic) _Bool shouldUseDynamicShare; // @synthesize shouldUseDynamicShare;
- (void).cxx_destruct;
- (void)openWeAppForwardMessage:(id)arg1 type:(int)arg2 forNativeApp:(_Bool)arg3 toContacts:(id)arg4;
- (void)openWeAppForwardMessage:(id)arg1 type:(int)arg2 forNativeApp:(_Bool)arg3;
- (void)openWeAppForwardMessage:(id)arg1 type:(int)arg2;
- (void)cancelSnapshot;
- (void)useSnapshot;
- (void)snapshotWebView;
- (void)takeSnapShot;
- (void)restoreScrollOffsets:(id)arg1;
- (void)saveScrollOffsets:(id)arg1;
- (void)OnForwardWeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (id)getCurrentViewController;
- (void)addReportShareParamWithContacts:(id)arg1;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (unsigned int)getAppType;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)pluginReportPageEvent;
- (double)getCompressRatioWithImage:(id)arg1;
- (void)checkShouldContinueSendMsg;
- (void)getShareInfoWithContactList:(id)arg1 forwardLogic:(id)arg2;
- (void)shareToFriend:(int)arg1 appInfo:(id)arg2;
- (void)onCustomWeAppMessage:(id)arg1;
- (void)notifyToSharePage:(int)arg1 customData:(id)arg2;
- (void)clearAll;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
