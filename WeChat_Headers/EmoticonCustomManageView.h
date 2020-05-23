//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class EmoticonCustomManageWrap, MMAssetSelectCheckButton, MMUIActivityIndicatorView, UIImageView, UIView;
@protocol EmoticonCustomManageViewDelegate;

@interface EmoticonCustomManageView : MMUIView
{
    MMUIActivityIndicatorView *m_indicator;
    UIImageView *m_imageView;
    EmoticonCustomManageWrap *m_wrap;
    id <EmoticonCustomManageViewDelegate> m_delegate;
    UIView *_m_frameView;
    UIView *_m_bkgView;
    UIView *_m_selectedMaskView;
    MMAssetSelectCheckButton *_m_selectCheckButton;
}

@property(retain, nonatomic) MMAssetSelectCheckButton *m_selectCheckButton; // @synthesize m_selectCheckButton=_m_selectCheckButton;
@property(retain, nonatomic) UIView *m_selectedMaskView; // @synthesize m_selectedMaskView=_m_selectedMaskView;
@property(retain, nonatomic) UIView *m_bkgView; // @synthesize m_bkgView=_m_bkgView;
@property(retain, nonatomic) UIView *m_frameView; // @synthesize m_frameView=_m_frameView;
@property(nonatomic) __weak id <EmoticonCustomManageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) EmoticonCustomManageWrap *m_wrap; // @synthesize m_wrap;
@property(retain, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView;
- (void).cxx_destruct;
- (void)onGestureTap;
- (void)markDelete;
- (void)setDelegate:(id)arg1;
- (void)setEmoticonCustomManageWrap:(id)arg1;
- (void)configSelectedMarkView;
- (void)resizeWithNewSize:(double)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

