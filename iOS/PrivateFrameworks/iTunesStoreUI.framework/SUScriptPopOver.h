//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptViewController, UIPopoverController, UIViewController;

@interface SUScriptPopOver : SUScriptObject
{
    UIViewController *_contentViewController;
    _Bool _ignoreDismiss;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_showAsModalViewController;
- (_Bool)_shouldDisplayAsPopover;
- (void)_setNativeViewController:(id)arg1;
- (void)_setIgnoresDismiss:(_Bool)arg1;
- (id)_presentablePopoverController;
- (id)_popOverController;
- (_Bool)_isViewControllerVisible;
- (id)_nativeViewController;
- (void)_dismissAnimated:(_Bool)arg1;
- (void)_viewControllerDidDismiss:(id)arg1;
- (void)_overlayWillShowNotification:(id)arg1;
@property(readonly) long long backgroundStyleShare;
@property(readonly) long long backgroundStyleDefault;
@property(readonly) long long backgroundStyleCream;
@property(readonly) long long backgroundStyleClear;
@property(readonly) long long backgroundStyleBlack;
@property(retain) SUScriptViewController *viewController;
@property double contentWidth;
@property double contentHeight;
@property long long backgroundStyle;
@property(readonly) SUScriptViewController *presentingViewController;
- (id)_className;
- (_Bool)showFromNavigationItem:(id)arg1;
- (_Bool)showFromElement:(id)arg1;
- (void)setContentWidth:(double)arg1 height:(double)arg2 animated:(_Bool)arg3;
- (void)dismissAnimated:(id)arg1;
- (void)tearDownUserInterface;
- (_Bool)isVisible;
@property(retain, nonatomic) UIPopoverController *nativePopoverController;
@property(readonly, nonatomic) UIPopoverController *presentablePopoverController;
@property(readonly) UIViewController *activeViewController;
- (void)dealloc;
- (id)init;

@end

