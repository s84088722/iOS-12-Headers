//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXFullscreenCanvasController, SXFullscreenCanvasViewController, SXFullscreenCaption, SXImageView, UIGestureRecognizer, UIView;
@protocol SXFullscreenCanvasShowable;

@protocol SXFullscreenCanvasShowable <NSObject>
- (_Bool)requestInteractivityFocusForFullScreenCanvasController:(SXFullscreenCanvasController *)arg1;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (struct CGRect)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 fullScreenFrameForShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect)arg4;
- (struct CGRect)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 originalFrameForShowable:(id <SXFullscreenCanvasShowable>)arg2 onCanvasView:(UIView *)arg3 viewIndex:(unsigned long long)arg4;
- (SXImageView *)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 originalViewForShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 viewIndexForPoint:(struct CGPoint)arg2 inShowable:(id <SXFullscreenCanvasShowable>)arg3;
- (SXFullscreenCanvasViewController *)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 canvasViewControllerForShowable:(id <SXFullscreenCanvasShowable>)arg2 completionBlock:(void (^)(void))arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 shouldAddGestureView:(UIView *)arg2 forShowable:(id <SXFullscreenCanvasShowable>)arg3;
- (unsigned long long)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 numberOfViewsForShowable:(id <SXFullscreenCanvasShowable>)arg2;

@optional
- (_Bool)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id <SXFullscreenCanvasShowable>)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 didHideShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 willHideShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 didShowShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (_Bool)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 willShowShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (SXFullscreenCaption *)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 captionForShowable:(id <SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
@end

