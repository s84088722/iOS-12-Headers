//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

@class UIDimmingView, UIDropShadowView;

@interface _UIFormSheetPresentationController : UIPresentationController
{
    UIDimmingView *_dimmingView;
    UIDropShadowView *_dropShadowView;
    _Bool _layoutStateShouldAvoidKeyboard;
    double _keyboardYOrigin;
    _Bool _shouldDismissWhenTappedOutside;
}

@property(nonatomic, getter=_shouldDismissWhenTappedOutside, setter=_setShouldDismissWhenTappedOutside:) _Bool shouldDismissWhenTappedOutside; // @synthesize shouldDismissWhenTappedOutside=_shouldDismissWhenTappedOutside;
- (void).cxx_destruct;
- (_Bool)_presentationPotentiallyUnderlapsStatusBar;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (_Bool)shouldSubscribeToKeyboardNotifications;
- (id)dropShadowView;
- (id)presentedView;
- (_Bool)_shouldHideBottomCorner;
- (double)_dropShadowCornerRadius;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)_changeLayoutModeToAvoidKeyboard:(_Bool)arg1 withOrigin:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldOccludeDuringPresentation;
- (id)_presentationView;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (_Bool)shouldRemovePresentersView;
- (_Bool)shouldPresentInFullscreen;
- (unsigned long long)dropShadowAutoresizingMask;
- (long long)presentationStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

