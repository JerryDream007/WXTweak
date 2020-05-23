//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, WWKMessageAttachment;

@interface WWKMessageAttachmentWrapper : NSObject
{
    NSString *_name;
    NSDate *_date;
    NSString *_avatarUrl;
    NSData *_avatarData;
    WWKMessageAttachment *_attachment;
}

@property(retain, nonatomic) WWKMessageAttachment *attachment; // @synthesize attachment=_attachment;
@property(copy, nonatomic) NSData *avatarData; // @synthesize avatarData=_avatarData;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

