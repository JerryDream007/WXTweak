//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, UIImage;
@protocol AddAvatarUploadImageTaskDelegate;

@interface AddAvatarUploadImageTask : NSObject <PBMessageObserverDelegate, ICdnComMgrExt>
{
    unsigned int _state;
    id <AddAvatarUploadImageTaskDelegate> _delegate;
    NSString *_appId;
    UIImage *_uploadImage;
    NSString *_uploadFileName;
    NSString *_tmpFilePath;
    NSString *_imageCdnUrl;
    NSString *_imageCdnFileId;
}

@property(retain, nonatomic) NSString *imageCdnFileId; // @synthesize imageCdnFileId=_imageCdnFileId;
@property(retain, nonatomic) NSString *imageCdnUrl; // @synthesize imageCdnUrl=_imageCdnUrl;
@property(retain, nonatomic) NSString *tmpFilePath; // @synthesize tmpFilePath=_tmpFilePath;
@property(retain, nonatomic) NSString *uploadFileName; // @synthesize uploadFileName=_uploadFileName;
@property(retain, nonatomic) UIImage *uploadImage; // @synthesize uploadImage=_uploadImage;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <AddAvatarUploadImageTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)handleAddAvatarHeadImgResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendAddAvatarHeadImageReq;
- (void)OnCdnUpload:(id)arg1;
- (void)reset;
- (void)setState:(unsigned int)arg1;
- (void)cancelUpload;
- (_Bool)startUploadByImageCdnUrl:(id)arg1;
- (_Bool)startUploadByImage:(id)arg1;
- (id)initWithAppId:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

