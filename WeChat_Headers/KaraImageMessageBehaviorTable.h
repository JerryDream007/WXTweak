//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCDBTableHolder.h"

@interface KaraImageMessageBehaviorTable : WCDBTableHolder
{
}

- (_Bool)deleteBehaviorsBefore:(id)arg1;
- (id)getTimeAscendingBehaviorsFrom:(id)arg1 to:(id)arg2 limit:(long long)arg3;
- (id)updateDownload:(_Bool)arg1 ofBehavior:(id)arg2 before:(id)arg3;
- (_Bool)insertOrIgnoreBehavior:(id)arg1;

@end
