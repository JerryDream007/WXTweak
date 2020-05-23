//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class NSDictionary, NSString, ScanQRCodeLogicController, UIImage, UIViewController, WCActionSheetWithScanWXCode;

@interface WebviewJSEventHandler_saveImage : WebviewJSEventHandlerBase <WCActionSheetDelegate, BaseScanLogicDelegate>
{
    NSString *m_imgUrl;
    NSString *m_base64Data;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_actionSheet;
    UIImage *_scanImage;
    UIViewController *_webViewController;
    _Bool _showActionSheet;
    _Bool _isScanScreen;
    _Bool _canShowActionSheetOnlyForQrCode;
    double _elementTop;
    double _elementLeft;
    double _elementWidth;
    double _elementHeight;
    NSDictionary *_eventConfigDict;
}

@property(nonatomic) _Bool canShowActionSheetOnlyForQrCode; // @synthesize canShowActionSheetOnlyForQrCode=_canShowActionSheetOnlyForQrCode;
@property(nonatomic) _Bool isScanScreen; // @synthesize isScanScreen=_isScanScreen;
@property(retain, nonatomic) NSDictionary *eventConfigDict; // @synthesize eventConfigDict=_eventConfigDict;
@property(nonatomic) double elementHeight; // @synthesize elementHeight=_elementHeight;
@property(nonatomic) double elementWidth; // @synthesize elementWidth=_elementWidth;
@property(nonatomic) double elementLeft; // @synthesize elementLeft=_elementLeft;
@property(nonatomic) double elementTop; // @synthesize elementTop=_elementTop;
@property(nonatomic) _Bool showActionSheet; // @synthesize showActionSheet=_showActionSheet;
@property(copy, nonatomic) NSString *m_base64Data; // @synthesize m_base64Data;
@property(copy, nonatomic) NSString *m_imgUrl; // @synthesize m_imgUrl;
- (void).cxx_destruct;
- (_Bool)isForbidForward;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onScanEnds;
- (void)onPushViewContoller:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (void)addImgFavWithImageData:(id)arg1;
- (void)saveImgWithImageData:(id)arg1;
- (void)sendMsgWithImageData:(id)arg1;
- (void)saveImageToAlbumWithUrl:(id)arg1 OrBase64Data:(id)arg2 Selector:(SEL)arg3;
- (void)PreScanQRCode;
- (void)scanImageBySnapshotScreen;
- (void)scanImageBySnapLocation;
- (id)__genImageBySnapLocation;
- (void)scanImageByWebData;
- (_Bool)shouldAddSaveToAlbumButton;
- (_Bool)shouldAddShareButton;
- (_Bool)shouldAddFavButton;
- (_Bool)shouldAddScanQRCodeButton;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)reportWebviewImageActionWithActionSheet:(id)arg1 itemType:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

