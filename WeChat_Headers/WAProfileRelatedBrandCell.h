//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, UIImageView, WAHeaderStackDisplayView, WAProfileRelatedViewModel;

@interface WAProfileRelatedBrandCell : UITableViewCell
{
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    WAHeaderStackDisplayView *_headerStackView;
    UIImageView *_arrowView;
    WAProfileRelatedViewModel *_viewModel;
    unsigned long long _showIconCount;
}

+ (double)cellHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCellTitle;
- (void)updateCellRelatedListWith:(id)arg1;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

