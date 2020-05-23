//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LocalJSLogicBase.h"

#import "YYWebViewDelegate-Protocol.h"

@class NSString, NSURLRequest;
@protocol WASearchJSEventHandlerDelegate;

@interface WAWebSearchJSLogicImpl : LocalJSLogicBase <YYWebViewDelegate>
{
    id <WASearchJSEventHandlerDelegate> _jsEventDelegate;
}

@property(nonatomic) __weak id <WASearchJSEventHandlerDelegate> jsEventDelegate; // @synthesize jsEventDelegate=_jsEventDelegate;
- (void).cxx_destruct;
- (void)sendCallbackWithRet:(int)arg1 error:(id)arg2 data:(id)arg3 callbackId:(id)arg4;
- (void)internalLaunchBrandProfile:(id)arg1 callbackId:(id)arg2;
- (void)internalLaunchWebViewPage:(id)arg1 callbackId:(id)arg2;
- (void)internalLaunchMoreDetailPage:(id)arg1 callbackId:(id)arg2;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)showWebview:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (id)makeNetworkFailParam:(_Bool)arg1;
- (id)makeEmptyJSONResultParam:(_Bool)arg1;
- (id)makePageClearParam;
- (void)handleJSApiFuncOfPreloadSearchWeapp:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfUpdateWASearchTemplate:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfHideSearchLoading:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfShowSearchLoading:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfShowSearchToast:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfOpenSearchCanvas:(id)arg1 callbackId:(id)arg2;
- (void)sendWidgetTapCallback:(id)arg1 withResult:(id)arg2;
- (void)handleJSApiFuncOfReloadWidgetData:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfTapWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfGetSearchGuideData:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfSearchOpLog:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfCancelSearchActionSheet:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfShowSearchActionSheet:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfUpdateWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfRemoveWAWidgetView:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfInsertSearchWAWidget:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfCheckJsApi:(id)arg1 callbackId:(id)arg2;
- (void)handleJSApiFuncOfRegisterWebViewDidScroll:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfLaunchDetailPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfReportFTSRealTime:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfReportWeAppSearchRealTime:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfOpenWeAppPage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfSetSearchWord:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetAvatar:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetImage:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSuggestion:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfClickReport:(id)arg1 withCallBackID:(id)arg2;
- (void)handleJSApiFuncOfGetSearchData:(id)arg1 withCallBackID:(id)arg2;
- (void)handleGetWidgetCaptureImgUrl:(id)arg1 callbackId:(id)arg2;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)sendWASearchGuideDataChanged:(id)arg1;
- (void)sendPageOffsetChanged:(double)arg1;
- (void)sendSearchActionSheetClick:(id)arg1;
- (void)sendSearchWAWidgetAttrChanged:(id)arg1;
- (void)sendResourceDataToJS:(id)arg1;
- (void)sendSearchDataNetFailedJSONToJSIsNewSearch:(_Bool)arg1;
- (void)sendSearchDataJSONToJS:(id)arg1 isNewSearch:(_Bool)arg2 isFromFuncQuery:(_Bool)arg3;
- (void)sendSearchDidClickedToJSWithParams:(id)arg1;
- (void)sendSugDataJSONToJS:(id)arg1;
- (void)sendQueryDidChangedToJS:(id)arg1;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

