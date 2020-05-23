//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PeopleNearByAdTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LbsContactInfoList, MMLbsAdvertismentInfo, MMTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, SeePeopleNearByLogicController;
@protocol PeopleNearByListViewControllerDelegate;

@interface PeopleNearByListViewController : MMUIViewController <PeopleNearByAdTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    LbsContactInfoList *m_lbsContactList;
    MMTableView *m_tableView;
    SeePeopleNearByLogicController *m_logicController;
    NSMutableDictionary *m_userHeaderImageCache;
    id <PeopleNearByListViewControllerDelegate> m_delegate;
    NSArray *m_lbsPoiList;
    unsigned long long m_abtestResult;
    long long m_iRoomMemberCount;
    MMLbsAdvertismentInfo *_adInfo;
    NSMutableArray *_tableModels;
}

@property(retain, nonatomic) NSMutableArray *tableModels; // @synthesize tableModels=_tableModels;
@property(retain, nonatomic) MMLbsAdvertismentInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) NSArray *lbsPoiList; // @synthesize lbsPoiList=m_lbsPoiList;
@property(nonatomic) long long iRoomMemberCount; // @synthesize iRoomMemberCount=m_iRoomMemberCount;
@property(retain, nonatomic) NSMutableDictionary *userHeaderImageCache; // @synthesize userHeaderImageCache=m_userHeaderImageCache;
@property(retain, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=m_tableView;
@property(retain, nonatomic) LbsContactInfoList *lbsContactList; // @synthesize lbsContactList=m_lbsContactList;
- (void).cxx_destruct;
- (void)didSelectCloseAtCell:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)adjustSubviewRects;
- (void)reloadTableModels;
- (void)reloadWithAdInfo:(id)arg1;
- (void)reloadWithLbsPoiList:(id)arg1;
- (void)reloadWithLbsContactInfoList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)genAdInfoCell:(id)arg1 adInfo:(id)arg2;
- (id)genLBSPeopleCell:(id)arg1 contactInfo:(id)arg2;
- (id)genLBSPoiCell:(id)arg1 poiItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)getCachedHeaderImageForUsername:(id)arg1 headImgUrl:(id)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

