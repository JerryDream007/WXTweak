//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IBottleSessionExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, NSArray, NSMutableDictionary, NSString;

@interface BottleSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, IBottleSessionExt, IMMNewSessionMgrExt>
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_dicSessionCellCache;
    NSArray *m_arrNewArriveList;
    _Bool m_bFromMainFrame;
}

@property(nonatomic) _Bool m_bFromMainFrame; // @synthesize m_bFromMainFrame;
@property(retain, nonatomic) NSArray *m_arrNewArriveList; // @synthesize m_arrNewArriveList;
- (void).cxx_destruct;
- (void)BottleSessionChanged:(id)arg1;
- (void)BottleNeedReload;
- (void)updateSessionByName:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)pluginsChanged:(id)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)initData;
- (void)reloadNewArrList;
- (_Bool)isNewArrive:(id)arg1;
- (void)initView;
- (void)initTableView;
- (void)UpdateTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

