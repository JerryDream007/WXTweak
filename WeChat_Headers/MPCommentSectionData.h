//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MPCommentMsg, NSMutableArray;

@interface MPCommentSectionData : MMObject
{
    MPCommentMsg *_commentMsg;
    NSMutableArray *_cellViewModelArray;
}

@property(retain, nonatomic) NSMutableArray *cellViewModelArray; // @synthesize cellViewModelArray=_cellViewModelArray;
@property(retain, nonatomic) MPCommentMsg *commentMsg; // @synthesize commentMsg=_commentMsg;
- (void).cxx_destruct;
- (void)initCellViewModelArray:(_Bool)arg1;
- (id)initWithMPCommentMsg:(id)arg1 isMutiReplyEnable:(_Bool)arg2;

@end
