//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QBPostRequestDataManager : NSObject
{
    NSMutableDictionary *_dicData;
}

+ (id)appendBodyForRequest:(id)arg1 originURLString:(id *)arg2;
+ (void)setHTTPBodyElementStream:(id)arg1 forRequest:(id)arg2;
+ (void)setHTTPBodyElementData:(id)arg1 forRequest:(id)arg2;
+ (id)sharedInstance;
@property(retain) NSMutableDictionary *dicData; // @synthesize dicData=_dicData;
- (void).cxx_destruct;
- (void)removeAllPostData;
- (id)arrayFromKey:(id)arg1;
- (id)arrayFromContainerWithKey:(id)arg1;
- (void)removeFirstDataForURLString:(id)arg1;
- (void)fillElement:(id)arg1 forRandomString:(long long)arg2 URLString:(id)arg3;
- (id)postDataElementForURLString:(id)arg1;
- (void)addPostDataElement:(id)arg1 forURLString:(id)arg2 mainURLString:(id)arg3;
- (id)init;

@end

