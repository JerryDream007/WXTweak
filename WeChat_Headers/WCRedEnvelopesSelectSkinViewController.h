//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "MMWebViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class HbEnvelopSource, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UILabel, WCRedEnvelopesReceiveHomeTemplateView, WCRedEnvelopesSelectSkinFlowLayout, WCRedEnvelopesSelectSkinScrollView;
@protocol WCRedEnvelopesSelectSkinViewControllerDelegate;

@interface WCRedEnvelopesSelectSkinViewController : WCRedEnvelopesBaseViewController <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCActionSheetDelegate, MMWebViewDelegate>
{
    id <WCRedEnvelopesSelectSkinViewControllerDelegate> m_delegate;
    _Bool m_bDidBack;
    _Bool _hasReportScroll;
    _Bool _beginDragging;
    _Bool _isFirstLayout;
    unsigned int _enterIndex;
    unsigned int _endIndex;
    WCRedEnvelopesReceiveHomeTemplateView *_templateView;
    UICollectionView *_m_collectionView;
    WCRedEnvelopesSelectSkinScrollView *_m_scrollView;
    HbEnvelopSource *_selectedResource;
    NSIndexPath *_selectedIndexPath;
    UILabel *_overtimeLabel;
    long long _selectedIndex;
    double _dragStartX;
    double _dragEndX;
    UILabel *_noSkinLabel;
    NSMutableArray *_m_selectSkinViewArr;
    WCRedEnvelopesSelectSkinFlowLayout *_m_flowLayout;
    NSMutableDictionary *_m_cellIdentifierDict;
    UIButton *_m_exchangeBtn;
    NSString *_enterCoverId;
}

@property(retain, nonatomic) NSString *enterCoverId; // @synthesize enterCoverId=_enterCoverId;
@property(nonatomic) unsigned int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) unsigned int enterIndex; // @synthesize enterIndex=_enterIndex;
@property(retain, nonatomic) UIButton *m_exchangeBtn; // @synthesize m_exchangeBtn=_m_exchangeBtn;
@property(retain, nonatomic) NSMutableDictionary *m_cellIdentifierDict; // @synthesize m_cellIdentifierDict=_m_cellIdentifierDict;
@property(retain, nonatomic) WCRedEnvelopesSelectSkinFlowLayout *m_flowLayout; // @synthesize m_flowLayout=_m_flowLayout;
@property(retain, nonatomic) NSMutableArray *m_selectSkinViewArr; // @synthesize m_selectSkinViewArr=_m_selectSkinViewArr;
@property(nonatomic) _Bool isFirstLayout; // @synthesize isFirstLayout=_isFirstLayout;
@property(nonatomic) _Bool beginDragging; // @synthesize beginDragging=_beginDragging;
@property(retain, nonatomic) UILabel *noSkinLabel; // @synthesize noSkinLabel=_noSkinLabel;
@property(nonatomic) double dragEndX; // @synthesize dragEndX=_dragEndX;
@property(nonatomic) double dragStartX; // @synthesize dragStartX=_dragStartX;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UILabel *overtimeLabel; // @synthesize overtimeLabel=_overtimeLabel;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) HbEnvelopSource *selectedResource; // @synthesize selectedResource=_selectedResource;
@property(retain, nonatomic) WCRedEnvelopesSelectSkinScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
@property(retain, nonatomic) UICollectionView *m_collectionView; // @synthesize m_collectionView=_m_collectionView;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateView *templateView; // @synthesize templateView=_templateView;
@property(nonatomic) _Bool hasReportScroll; // @synthesize hasReportScroll=_hasReportScroll;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScroll:(struct CGPoint *)arg1;
- (void)switchToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)updateDoneBtnStatus;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLongPressCell:(id)arg1;
- (void)deleteHbEnvelopSource:(id)arg1;
- (id)getData;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateCollectionView;
- (void)updateNavigationBackground;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onClickExchageBtn;
- (void)updateExchangeButton;
- (void)updateViewData;
- (void)scrollToSelectedCell;
- (void)viewDidLayoutSubviews;
- (void)refreshCollectionAndScrollToSelectedCell:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)OnRightBarButtonDone;
- (void)OnLeftBarButtonDone;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

