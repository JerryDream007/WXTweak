//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZZFLEXAngelSectionBaseChainModel.h"

@class NSMutableArray;

@interface ZZFLEXAngelSectionInsertChainModel : ZZFLEXAngelSectionBaseChainModel
{
    NSMutableArray *_listData;
}

@property(retain, nonatomic) NSMutableArray *listData; // @synthesize listData=_listData;
- (void).cxx_destruct;
- (_Bool)p_insertToListDataAtIndex:(long long)arg1;
- (CDUnknownBlockType)afterSection;
- (CDUnknownBlockType)beforeSection;
- (CDUnknownBlockType)toIndex;
- (id)initWithSectionModel:(id)arg1 listData:(id)arg2;

@end

