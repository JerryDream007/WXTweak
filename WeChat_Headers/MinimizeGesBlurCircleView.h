//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;

@interface MinimizeGesBlurCircleView : UIView
{
    UIVisualEffectView *_blurView;
    UIView *_blurMaskView;
}

@property(retain, nonatomic) UIView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

