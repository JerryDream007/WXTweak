//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WXGMapTableObject : NSObject
{
    NSMutableDictionary *_dicMediaIDPath;
    NSMutableArray *_arrDumpInfo;
    NSString *_folderPath;
}

@property(copy, nonatomic) NSString *folderPath; // @synthesize folderPath=_folderPath;
@property(retain, nonatomic) NSMutableArray *arrDumpInfo; // @synthesize arrDumpInfo=_arrDumpInfo;
@property(retain, nonatomic) NSMutableDictionary *dicMediaIDPath; // @synthesize dicMediaIDPath=_dicMediaIDPath;
- (void).cxx_destruct;
- (void)clearDumpInfo;
- (id)getMediaIDPathDictionary;
- (id)getBufferMediaIDPathDictionary;
- (void)safeSetObjectForMediaPath:(id)arg1 forKey:(id)arg2;
- (id)initWithFolderPath:(id)arg1;
- (id)init;

@end
