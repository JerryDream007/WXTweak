//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FileDetailViewController.h"

@interface FavFileDetailViewController : FileDetailViewController
{
    unsigned int m_favId;
    _Bool _needReload;
}

@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithFavDataWrap:(id)arg1;
- (id)initWithFavItem:(id)arg1 LogicController:(id)arg2;
- (id)initWithFavItem:(id)arg1;

@end

