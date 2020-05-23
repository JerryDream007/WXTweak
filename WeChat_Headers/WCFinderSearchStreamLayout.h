//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;
@protocol UICollectionViewLayoutDelegate;

@interface WCFinderSearchStreamLayout : UICollectionViewLayout
{
    id <UICollectionViewLayoutDelegate> _delegate;
    NSMutableArray *_attrsArr;
    NSMutableArray *_columnHeights;
    double _maxContentHeight;
}

@property(nonatomic) double maxContentHeight; // @synthesize maxContentHeight=_maxContentHeight;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(retain, nonatomic) NSMutableArray *attrsArr; // @synthesize attrsArr=_attrsArr;
@property(nonatomic) __weak id <UICollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (double)maxYWithColumnHeights;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)setupDecorationViewatIndexPath:(id)arg1 top:(double)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setupSectionFooter:(unsigned long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)setupSectionHeader:(unsigned long long)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)clearData;
- (void)prepareLayout;

@end

