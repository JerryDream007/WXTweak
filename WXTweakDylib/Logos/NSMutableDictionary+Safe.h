//
//  NSMutableDictionary+Safe.h
//  WXTweakDylib
//
//  Created by 宋澎 on 2020/5/22.
//  Copyright © 2020 宋澎. All rights reserved.
//

#import <AppKit/AppKit.h>


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableDictionary (Safe)

- (void)safeSetObject:(id)anObject forKey:(id)aKey;

@end

NS_ASSUME_NONNULL_END
