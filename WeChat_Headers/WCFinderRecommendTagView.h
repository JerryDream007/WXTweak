//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderRecommendTagTableViewCellDelegate-Protocol.h"

@class MMTableView, MMUILabel, NSArray, NSString, UIImageView;
@protocol WCFinderRecommendTagViewDelegate;

@interface WCFinderRecommendTagView : UIView <UITableViewDelegate, UITableViewDataSource, WCFinderRecommendTagTableViewCellDelegate>
{
    id <WCFinderRecommendTagViewDelegate> _delegate;
    UIImageView *_triangleBView;
    MMTableView *_mTableView;
    MMUILabel *_tipsLabel;
    NSArray *_suggestsArray;
}

@property(retain, nonatomic) NSArray *suggestsArray; // @synthesize suggestsArray=_suggestsArray;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMTableView *mTableView; // @synthesize mTableView=_mTableView;
@property(retain, nonatomic) UIImageView *triangleBView; // @synthesize triangleBView=_triangleBView;
@property(nonatomic) __weak id <WCFinderRecommendTagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickTagCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateTableView;
- (void)setTrianglePoint:(double)arg1;
- (void)initTableView;
- (void)initTipsLabel;
- (void)initTriangleView;
- (void)initView;
- (void)beginToRequestSuggests:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

