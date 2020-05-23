//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"

@class MMTableViewInfo, MMUIView, NSArray, NSString, WCPayControlData;
@protocol WCPaySelectPayWayViewDelegate;

@interface WCPaySelectPayWayView : UIView <ILinkEventExt>
{
    _Bool _showAddNewCard;
    id <WCPaySelectPayWayViewDelegate> _delegate;
    WCPayControlData *_data;
    NSArray *_infos;
    NSString *_title;
    NSString *_desc;
    NSString *_selectedCardSerial;
    MMUIView *_backgroundView;
    MMUIView *_contentView;
    MMTableViewInfo *_tableViewInfo;
}

@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *selectedCardSerial; // @synthesize selectedCardSerial=_selectedCardSerial;
@property(nonatomic) _Bool showAddNewCard; // @synthesize showAddNewCard=_showAddNewCard;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *infos; // @synthesize infos=_infos;
@property(retain, nonatomic) WCPayControlData *data; // @synthesize data=_data;
@property(nonatomic) __weak id <WCPaySelectPayWayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)cardName:(id)arg1;
- (_Bool)isCardForbid:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)cancelBtnPress;
- (void)handleTap;
- (void)selectAddNewCard;
- (void)clickCardCell:(struct WCTableViewNormalCellManager *)arg1;
- (void)makeSelectNewCardCell:(id)arg1;
- (void)makeCardCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)reloadTableView;
- (void)layoutSubviews;
- (void)dismiss;
- (void)show;
- (id)initWithCards:(id)arg1 data:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

