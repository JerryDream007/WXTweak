//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WCDataItem;

@interface WCTimelineCommentEmotionReport : NSObject
{
    WCDataItem *_dataItem;
    NSMutableArray *_clickEmojiIconIdList;
    NSMutableArray *_clickEmojiIdList;
}

@property(retain, nonatomic) NSMutableArray *clickEmojiIdList; // @synthesize clickEmojiIdList=_clickEmojiIdList;
@property(retain, nonatomic) NSMutableArray *clickEmojiIconIdList; // @synthesize clickEmojiIconIdList=_clickEmojiIconIdList;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void).cxx_destruct;
- (void)report:(unsigned char)arg1;
- (id)init;

@end

