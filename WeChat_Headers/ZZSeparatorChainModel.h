//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, ZZSeparatorModel;

@interface ZZSeparatorChainModel : NSObject
{
    UIView *_view;
    ZZSeparatorModel *_separatorModel;
}

@property(readonly, nonatomic) ZZSeparatorModel *separatorModel; // @synthesize separatorModel=_separatorModel;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (CDUnknownBlockType)borderWidth;
- (CDUnknownBlockType)endAt;
- (CDUnknownBlockType)length;
- (CDUnknownBlockType)beginAt;
- (CDUnknownBlockType)color;
- (CDUnknownBlockType)offset;
- (id)initWithView:(id)arg1 andPosition:(long long)arg2;

@end

