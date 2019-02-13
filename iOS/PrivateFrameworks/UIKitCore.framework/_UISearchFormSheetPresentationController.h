//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/_UISearchControllerPresenting-Protocol.h>

@class NSString, UIView, _UISearchPresentationAssistant;
@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting>
{
    _UISearchPresentationAssistant *_assistant;
    UIView *_wrapperView;
    struct CGRect finalFrameForContainerView;
}

@property(readonly, nonatomic) struct CGRect finalFrameForContainerView; // @synthesize finalFrameForContainerView;
@property(readonly, nonatomic) unsigned long long edgeForHidingNavigationBar;
@property(readonly, nonatomic) _Bool forceObeyNavigationBarInsets;
@property(readonly, nonatomic) _Bool animatorShouldLayoutPresentationViews;
@property(readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property(readonly, nonatomic) double resultsControllerContentOffset;
@property(readonly, nonatomic) _Bool searchBarToBecomeTopAttached;
- (void)setContentVisible:(_Bool)arg1;
@property(readonly, nonatomic) double statusBarAdjustment;
@property(readonly, nonatomic) _Bool searchBarShouldClipToBounds;
@property(readonly, nonatomic) _Bool searchBarCanContainScopeBar;
@property(readonly, nonatomic) _Bool resultsUnderlapsSearchBar;
@property(readonly, nonatomic) _Bool shouldAccountForStatusBar;
@property(readonly, retain, nonatomic) UIView *searchBarContainerView;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)adaptivePresentationStyle;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(_Bool)arg2;
- (_Bool)_shouldKeepCurrentFirstResponder;
- (_Bool)shouldRemovePresentersView;
- (_Bool)_shouldSubscribeToKeyboardNotifications;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)presentedView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

