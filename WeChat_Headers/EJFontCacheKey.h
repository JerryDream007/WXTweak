//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class EJFontDescriptor;

@interface EJFontCacheKey : NSObject <NSCopying>
{
    EJFontDescriptor *descriptor;
    float lineWidth;
    int normalizedContentScale;
    unsigned long long hash;
}

+ (id)keyWithDescriptor:(id)arg1 lineWidth:(float)arg2 contentScale:(float)arg3 isWgfxMode:(_Bool)arg4;
@property(readonly) int normalizedContentScale; // @synthesize normalizedContentScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

