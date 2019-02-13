//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIStatusBarViewController, UIWindow, UIZoomViewController;

@interface UIClassicController : NSObject
{
    UIWindow *_window;
    UIStatusBarViewController *_statusBarViewController;
    UIZoomViewController *_zoomViewController;
    _Bool _hidesStatusBarFiller;
}

+ (id)sharedClassicController;
- (void).cxx_destruct;
- (void)setDrawsStatusBarFiller:(_Bool)arg1;
- (_Bool)drawsStatusBarFiller;
- (void)setZoomed:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldHideStatusBar;
- (void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(_Bool)arg2 context:(id)arg3;
- (void)_classicChangeStatusBarOrientation:(id)arg1;
- (void)_initializeStatusBarOrientation;
- (void)setZoomed:(_Bool)arg1;
- (_Bool)isZoomed;
- (_Bool)_supportsZoom;
- (id)_window;
- (void)_setupWindow;
- (_Bool)isClassicControlWindow:(id)arg1;
- (void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 animationParameters:(id)arg2;

@end

