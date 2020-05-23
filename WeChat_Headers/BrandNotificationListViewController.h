//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BrandTimelineMsgMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableView, MMUILabel, NSMutableArray, NSString, UIView, WCTimeLineFooterView;

@interface BrandNotificationListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, tableViewDelegate, MMRefreshTableFooterDelegate, BrandTimelineMsgMgrExt, IContactMgrExt>
{
    UIView *m_topNavView;
    MMTableView *m_tableView;
    WCTimeLineFooterView *m_footerView;
    MMUILabel *m_noMsgTipsLabel;
    NSMutableArray *m_arrViewModel;
    _Bool m_bLoadingData;
    NSMutableArray *m_sessionData;
    unsigned int _brandTimelineSessionId;
    unsigned int _scene;
    unsigned int _enterId;
    unsigned long long _state;
}

@property(nonatomic) unsigned int enterId; // @synthesize enterId=_enterId;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int brandTimelineSessionId; // @synthesize brandTimelineSessionId=_brandTimelineSessionId;
- (void).cxx_destruct;
- (void)reportNotificationAction:(unsigned int)arg1 viewModel:(id)arg2 indexPathRow:(long long)arg3;
- (_Bool)isContactNeedProcess:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)checkListState;
- (void)onSetNotificationDelFlag:(id)arg1;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onDelNotification:(id)arg1;
- (void)onAddNotification:(id)arg1;
- (void)tryLoadDownMoreMessage;
- (void)fetchMoreHistoryMessage;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)updateLoadingState;
- (_Bool)shouldDownMoreLoading;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)fetchMoreCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)onNavBackBarButtonClicked;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)initNavigationBar;
- (void)updateNoMsgTipsLabel;
- (void)initFooterView;
- (void)initTableView;
- (void)initView;
- (void)updateSectionData;
- (void)initData;
- (void)updateVisibleCellTime;
- (void)willEnterForeground:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

