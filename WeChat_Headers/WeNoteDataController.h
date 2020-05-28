//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IFavCdnDownloadMgrExt-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "IFavoritesRepairSvrDataExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IRecordDownloadExt-Protocol.h"
#import "IWNAudioMgrExt-Protocol.h"
#import "RTESectionMgrDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WNContentStorageBuilderDelegate-Protocol.h"
#import "WNTextViewDataDelegate-Protocol.h"

@class CMessageWrap, FavDataItemWrap, FavoritesItem, NSString, RTESectionMgr, RTETextView, WCDataItem, WNContentStorage, WNContentStorageBuilder;
@protocol WeNoteDataControllerDelegate><WNTextViewOperationDelegate;

@interface WeNoteDataController : MMObject <WNTextViewDataDelegate, WNContentStorageBuilderDelegate, IFavoritesRepairSvrDataExt, IFavoritesExt, IRecordDownloadExt, IMsgExt, IFavCdnDownloadMgrExt, RTESectionMgrDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, IWNAudioMgrExt>
{
    unsigned int m_maxObjectId;
    WNContentStorageBuilder *m_contentBuilder;
    NSString *m_downloadingHtmlUrl;
    _Bool m_hasMoreContent;
    _Bool m_waitForUpload;
    _Bool m_onDelete;
    _Bool _bEditable;
    _Bool _bEdited;
    _Bool _bFromPreView;
    _Bool _hasReportedTextEditOperation;
    FavDataItemWrap *_dataWrap;
    FavoritesItem *_favItem;
    CMessageWrap *_messageWrap;
    WCDataItem *_wcDataItem;
    WNContentStorage *_contentStorage;
    RTESectionMgr *_sectionMgr;
    RTETextView *_firstResponder;
    id <WeNoteDataControllerDelegate><WNTextViewOperationDelegate> _delegate;
    struct _NSRange _selectedRange;
}

@property(nonatomic) __weak id <WeNoteDataControllerDelegate><WNTextViewOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasReportedTextEditOperation; // @synthesize hasReportedTextEditOperation=_hasReportedTextEditOperation;
@property(nonatomic) __weak RTETextView *firstResponder; // @synthesize firstResponder=_firstResponder;
@property(readonly, nonatomic) RTESectionMgr *sectionMgr; // @synthesize sectionMgr=_sectionMgr;
@property(readonly, nonatomic) WNContentStorage *contentStorage; // @synthesize contentStorage=_contentStorage;
@property(readonly, nonatomic) WCDataItem *wcDataItem; // @synthesize wcDataItem=_wcDataItem;
@property(readonly, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(readonly, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(nonatomic) _Bool bFromPreView; // @synthesize bFromPreView=_bFromPreView;
@property(nonatomic) _Bool bEdited; // @synthesize bEdited=_bEdited;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable=_bEditable;
- (void).cxx_destruct;
- (void)onChatNewMsgSent:(id)arg1;
- (void)onRepairCheckFavItemAvailable:(unsigned int)arg1 occupied:(_Bool *)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnNoteSecurityCheck:(unsigned int)arg1 isSuccess:(_Bool)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (_Bool)chectHTMLWithDataId:(id)arg1 isSuccess:(_Bool)arg2;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)onGenerationFinish;
- (void)onGenerateContentStorage:(id)arg1;
- (id)creatRTETextView;
- (void)onSectionAtIndex:(unsigned long long)arg1 heightIncreased:(double)arg2;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setOnDelete;
- (void)resetOnDelete;
- (_Bool)hasMoreData;
- (_Bool)isEmpty;
- (_Bool)saveNote;
- (void)tryStartParseHtml;
- (_Bool)chectMsgFile;
- (void)loadFavItem:(id)arg1 withContent:(id)arg2 withSectionMgr:(id)arg3;
@property(readonly, nonatomic) FavDataItemWrap *dataWrap; // @synthesize dataWrap=_dataWrap;
- (void)configFavItem:(id)arg1;
- (void)configWithDataWrap:(id)arg1;
- (void)configWCDataItem:(id)arg1;
- (void)configWithMsg:(id)arg1 andData:(id)arg2;
- (void)configMsg:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
- (void)handleSectionChange:(id)arg1 withNewSelectionRange:(struct _NSRange)arg2;
- (_Bool)confirmAttachmentSeperationInRange:(struct _NSRange)arg1 withText:(id)arg2;
- (_Bool)handleReplaceListContentInTextView:(id)arg1 inRange:(struct _NSRange)arg2 withText:(id)arg3;
- (_Bool)needHandleListContentChangeInTextView:(id)arg1 inRange:(struct _NSRange)arg2 withText:(id)arg3;
- (void)insertAttributes:(id)arg1;
- (void)setListType:(unsigned int)arg1 isEnable:(_Bool)arg2;
- (void)editSelectedContent;
- (void)pasteSelectedContent;
- (void)deleteSelectedContent;
- (void)cutSelectedContent;
- (void)copySelectedContent;
- (void)setBordEnableOnSelectedContent:(_Bool)arg1;
- (void)selectAll;
- (_Bool)canSelectAll;
- (void)onReplaceTextInRange:(struct _NSRange)arg1 withText:(id)arg2 inTextView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
