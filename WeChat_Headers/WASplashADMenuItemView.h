//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, MMWebImageView, NSDictionary, UIButton, UIImageView;
@protocol WASplashADMenuItemViewDelegate;

@interface WASplashADMenuItemView : MMUIView
{
    id <WASplashADMenuItemViewDelegate> _delegate;
    NSDictionary *_itemDict;
    MMUILabel *_mainTitleLabel;
    MMUILabel *_subTitleLabel;
    MMWebImageView *_logoImageView;
    UIImageView *_arrowView;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMWebImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) NSDictionary *itemDict; // @synthesize itemDict=_itemDict;
@property(nonatomic) __weak id <WASplashADMenuItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithMenuItemDict:(id)arg1;

@end
