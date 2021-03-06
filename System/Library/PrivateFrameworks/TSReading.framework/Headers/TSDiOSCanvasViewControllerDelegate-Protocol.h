//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDiOSCanvasViewController, UIGestureRecognizer, UITouch, UIView, UIViewController;

@protocol TSDiOSCanvasViewControllerDelegate <NSObject>

@optional
- (_Bool)canvasViewController:(TSDiOSCanvasViewController *)arg1 enableSwipeGestureWithNumberOfTouches:(unsigned long long)arg2;
- (UIViewController *)viewControllerForPresentingAnnotationAuthorUI;
- (void)handleFindTapAtPoint:(struct CGPoint)arg1;
- (_Bool)inFindReplaceMode;
- (_Bool)allowEditMenuToAppear;
- (_Bool)isPopoverGestureInFlight;
- (Class)canvasViewClassOverride;
- (_Bool)shouldIgnoreTextGestures;
- (_Bool)canvasViewControllerShouldShowScaleFeedback:(TSDiOSCanvasViewController *)arg1;
- (_Bool)canvasViewController:(TSDiOSCanvasViewController *)arg1 shouldBeginTapHoldDragAtPoint:(struct CGPoint)arg2;
- (_Bool)allowTouchOutsideCanvasView:(UITouch *)arg1 forGesture:(UIGestureRecognizer *)arg2;
- (UIView *)viewForGestureRecognizer:(UIGestureRecognizer *)arg1;
@end

