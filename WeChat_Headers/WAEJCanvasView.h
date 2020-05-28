//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAOpenGLView.h"

#import "EJGestureDelegate-Protocol.h"

@class NSString, UIImageView;
@protocol WAEJCanvasViewDelegate;

@interface WAEJCanvasView : WAOpenGLView <EJGestureDelegate>
{
    UIImageView *_snapshotImageView;
    _Bool _keepAlive;
    unsigned int _canvasId;
    int _interactionMode;
    NSString *_data;
    id <WAEJCanvasViewDelegate> _gestureDelegate;
}

@property(nonatomic) __weak id <WAEJCanvasViewDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) int interactionMode; // @synthesize interactionMode=_interactionMode;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) unsigned int canvasId; // @synthesize canvasId=_canvasId;
- (void).cxx_destruct;
- (void)snapshotEnd;
- (void)snapshotBegin;
- (void)dealloc;
- (void)onTouchCancel;
- (void)onTouchEnd;
- (void)onTouchBegin;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 context:(struct OpaqueJSContext *)arg2 appId:(id)arg3 name:(const char *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
