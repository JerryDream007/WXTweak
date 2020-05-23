//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayEntrustPayInfo : NSObject
{
    _Bool _isAutoDeduct;
    _Bool _isSelectPayWay;
    unsigned int _uiDeductShowType;
    NSString *_contractTitle;
    NSArray *_showInfo;
    NSString *_contractUrl;
    NSString *_buttonWording;
    NSString *_deductRuleWording;
    NSString *_openDeductWording;
    NSString *_open_deduct_wording_color;
}

@property(retain, nonatomic) NSString *open_deduct_wording_color; // @synthesize open_deduct_wording_color=_open_deduct_wording_color;
@property(retain, nonatomic) NSString *openDeductWording; // @synthesize openDeductWording=_openDeductWording;
@property(retain, nonatomic) NSString *deductRuleWording; // @synthesize deductRuleWording=_deductRuleWording;
@property(retain, nonatomic) NSString *buttonWording; // @synthesize buttonWording=_buttonWording;
@property(nonatomic) unsigned int uiDeductShowType; // @synthesize uiDeductShowType=_uiDeductShowType;
@property(nonatomic) _Bool isSelectPayWay; // @synthesize isSelectPayWay=_isSelectPayWay;
@property(retain, nonatomic) NSString *contractUrl; // @synthesize contractUrl=_contractUrl;
@property(retain, nonatomic) NSArray *showInfo; // @synthesize showInfo=_showInfo;
@property(nonatomic) _Bool isAutoDeduct; // @synthesize isAutoDeduct=_isAutoDeduct;
@property(retain, nonatomic) NSString *contractTitle; // @synthesize contractTitle=_contractTitle;
- (void).cxx_destruct;

@end

