//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "FavSightViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class FavSightView, NSString;

@interface FavSightDetailViewController : FavBaseDetailViewController <WCActionSheetDelegate, FavForwardLogicDelegate, FavSightViewDelegate>
{
    FavSightView *m_sightView;
    _Bool m_hasIllegalData;
}

- (void).cxx_destruct;
- (void)OnUpdateItems:(id)arg1;
- (void)saveSight;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (id)getFavForawrdViewController;
- (void)initSightView;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)viewDidLoad;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

