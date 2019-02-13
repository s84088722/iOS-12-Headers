//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKitCore/UILayoutContainerViewDelegate-Protocol.h>
#import <UIKitCore/_UINavigationBarDelegatePrivate-Protocol.h>
#import <UIKitCore/_UIScrollViewScrollObserver-Protocol.h>

@class NSArray, NSMapTable, NSString, NSUUID, UIFocusContainerGuide, UIGestureRecognizer, UILayoutContainerView, UINavigationBar, UINavigationDeferredTransitionContext, UINavigationTransitionView, UIPanGestureRecognizer, UITapGestureRecognizer, UIToolbar, UIView, _UIAnimationCoordinator, _UIBarPanGestureRecognizer, _UIBarTapGestureRecognizer, _UINavigationControllerPalette, _UINavigationInteractiveTransition, _UINavigationParallaxTransition;
@protocol UINavigationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegatePrivate, _UINavigationBarDelegatePrivate, _UIScrollViewScrollObserver, UILayoutContainerViewDelegate>
{
    UILayoutContainerView *_containerView;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    UIToolbar *_toolbar;
    UIView *_navigationTransitionView;
    double _bottomInsetDelta;
    double _statusBarHeightForHideShow;
    UIViewController *_disappearingViewController;
    UINavigationDeferredTransitionContext *_deferredTransitionContext;
    id <UINavigationControllerDelegate> _delegate;
    long long _savedNavBarStyleBeforeSheet;
    long long _savedToolBarStyleBeforeSheet;
    UITapGestureRecognizer *_backGestureRecognizer;
    _UINavigationControllerPalette *_topPalette;
    UIView *_paletteClippingView;
    _UINavigationControllerPalette *_freePalette;
    _UINavigationControllerPalette *_transitioningTopPalette;
    _Bool _interactiveScrollActive;
    CDStruct_ef18196a _interactiveScrollNavBarIntrinsicHeightRange;
    long long _updateTopViewFramesToMatchScrollOffsetDisabledCount;
    unsigned int _pushSoundID;
    unsigned int _popSoundID;
    struct {
        unsigned int isAppearingAnimated:1;
        unsigned int isAlreadyPoppingNavigationItem:1;
        unsigned int isNavigationBarHidden:1;
        unsigned int isToolbarShown:1;
        unsigned int needsDeferredTransition:1;
        unsigned int isTransitioning:1;
        unsigned int paletteTransitionPending:1;
        unsigned int lastOperation:4;
        unsigned int lastOperationAnimated:1;
        unsigned int deferredTransition:8;
        unsigned int didPreloadKeyboardAnimation:1;
        unsigned int didHideBottomBar:1;
        unsigned int didExplicitlyHideTabBar:1;
        unsigned int isChangingOrientationForPop:1;
        unsigned int pretendNavBarHidden:1;
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding:1;
        unsigned int searchBarHidNavBar:1;
        unsigned int useSystemPopoverBarAppearance:1;
        unsigned int isCustomTransition:1;
        unsigned int isBuiltinTransition:1;
        unsigned int resetDidHideOnCancel:1;
        unsigned int delegateWillShowViewController:1;
        unsigned int delegateDidShowViewController:1;
        unsigned int delegateTransitionController:1;
        unsigned int delegateTransitionControllerEx:1;
        unsigned int delegateInteractionController:1;
        unsigned int delegateInteractionControllerEx:1;
        unsigned int delegateShouldCrossFadeNavigationBar:1;
        unsigned int delegateShouldCrossFadeBottomBars:1;
        unsigned int delegateShouldUseBuiltinInteractionController:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int delegateLayoutTransitioningClass:1;
        unsigned int delegateWasNonNil:1;
        unsigned int navigationBarHidesCompletelyOffscreen:1;
        unsigned int clipUnderlapWhileTransitioning:1;
        unsigned int isCrossfadingOutTabBar:1;
        unsigned int isCrossfadingInTabBar:1;
        unsigned int skipContentInsetCalculation:1;
        unsigned int neverInWindow:1;
        unsigned int useStandardStatusBarHeight:1;
        unsigned int allowUserInteractionDuringTransition:1;
        unsigned int enableBackButtonDuringTransition:1;
        unsigned int allowsGroupBlending:1;
        unsigned int allowNestedNavigationControllers:1;
        unsigned int allowChildSplitViewControllers:1;
        unsigned int nestedNavigationBarWasHidden:1;
        unsigned int nestedToolbarWasHidden:1;
        unsigned int isNested:1;
        unsigned int searchHidNavigationBar:1;
        unsigned int suppressMixedOrientationPop:1;
        unsigned int disappearingViewControllerIsBeingRemoved:1;
        unsigned int isWrappingDuringAdaptation:1;
        unsigned int cannotPerformShowViewController:1;
        unsigned int navigationSoundsEnabled:1;
        unsigned int didSetNeedsFocusInTransition:1;
        unsigned int layingOutTopViewController:1;
        unsigned int hasScheduledDeferredUpdateNavigationBarHostedRefreshControl:1;
        unsigned int allowsFreezeLayoutForOrientationChangeOnDismissal:1;
    } _navigationControllerFlags;
    _Bool _interactiveTransition;
    _Bool _hidesBarsWhenKeyboardAppears;
    _Bool _hidesBarsOnSwipe;
    _Bool _hidesBarsWhenVerticallyCompact;
    _Bool _hidesBarsOnTap;
    _Bool __positionBarsExclusivelyWithSafeArea;
    _Bool __shouldUseBuiltinAnimator;
    _Bool __usingBuiltinAnimator;
    _Bool __toolbarAnimationWasCancelled;
    _Bool __navigationBarAnimationWasCancelled;
    Class _toolbarClass;
    double _customNavigationTransitionDuration;
    NSMapTable *_rememberedFocusedItemsByViewController;
    long long _builtinTransitionStyle;
    double _builtinTransitionGap;
    NSString *__backdropGroupName;
    long long __preferredNavigationBarPosition;
    id <UIViewControllerAnimatedTransitioning> __transitionController;
    _UINavigationParallaxTransition *__cachedTransitionController;
    id <UIViewControllerInteractiveTransitioning> __interactionController;
    _UINavigationInteractiveTransition *__cachedInteractionController;
    NSUUID *__toolbarAnimationId;
    NSUUID *__navbarAnimationId;
    CDUnknownBlockType __updateNavigationBarHandler;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    id __keyboardAppearedNotificationToken;
    _UIBarPanGestureRecognizer *__barSwipeHideGesture;
    _UIAnimationCoordinator *__barInteractiveAnimationCoordinator;
    _UIBarTapGestureRecognizer *__barTapHideGesture;
}

+ (_Bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (_Bool)_directlySetsContentOverlayInsetsForChildren;
+ (_Bool)doesOverrideSupportedInterfaceOrientations;
+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;
@property(retain, nonatomic, setter=_setBarTapHideGesture:) _UIBarTapGestureRecognizer *_barTapHideGesture; // @synthesize _barTapHideGesture=__barTapHideGesture;
@property(retain, nonatomic, setter=_setInteractiveAnimationCoordinator:) _UIAnimationCoordinator *_barInteractiveAnimationCoordinator; // @synthesize _barInteractiveAnimationCoordinator=__barInteractiveAnimationCoordinator;
@property(retain, nonatomic, setter=_setBarSwipeHideGesture:) _UIBarPanGestureRecognizer *_barSwipeHideGesture; // @synthesize _barSwipeHideGesture=__barSwipeHideGesture;
@property(retain, nonatomic, setter=_setKeyboardAppearedNotificationToken:) id _keyboardAppearedNotificationToken; // @synthesize _keyboardAppearedNotificationToken=__keyboardAppearedNotificationToken;
@property(readonly, nonatomic, getter=_contentFocusContainerGuide) UIFocusContainerGuide *contentFocusContainerGuide; // @synthesize contentFocusContainerGuide=_contentFocusContainerGuide;
@property(copy, nonatomic, setter=_setUpdateNavigationBarHandler:) CDUnknownBlockType _updateNavigationBarHandler; // @synthesize _updateNavigationBarHandler=__updateNavigationBarHandler;
@property(nonatomic, setter=_setNavigationBarAnimationWasCancelled:) _Bool _navigationBarAnimationWasCancelled; // @synthesize _navigationBarAnimationWasCancelled=__navigationBarAnimationWasCancelled;
@property(nonatomic, setter=_setToolbarAnimationWasCancelled:) _Bool _toolbarAnimationWasCancelled; // @synthesize _toolbarAnimationWasCancelled=__toolbarAnimationWasCancelled;
@property(retain, nonatomic, setter=_setNavbarAnimationId:) NSUUID *_navbarAnimationId; // @synthesize _navbarAnimationId=__navbarAnimationId;
@property(retain, nonatomic, setter=_setToolbarAnimationId:) NSUUID *_toolbarAnimationId; // @synthesize _toolbarAnimationId=__toolbarAnimationId;
@property(nonatomic, getter=_isUsingBuiltinAnimator, setter=_setUsingBuiltinAnimator:) _Bool _usingBuiltinAnimator; // @synthesize _usingBuiltinAnimator=__usingBuiltinAnimator;
@property(nonatomic, setter=_setShouldUseBuiltinAnimator:) _Bool _shouldUseBuiltinAnimator; // @synthesize _shouldUseBuiltinAnimator=__shouldUseBuiltinAnimator;
@property(retain, nonatomic, setter=_setCachedInteractionController:) _UINavigationInteractiveTransition *_cachedInteractionController; // @synthesize _cachedInteractionController=__cachedInteractionController;
@property(retain, nonatomic, setter=_setInteractionController:) id <UIViewControllerInteractiveTransitioning> _interactionController; // @synthesize _interactionController=__interactionController;
@property(retain, nonatomic, setter=_setCachedTransitionController:) _UINavigationParallaxTransition *_cachedTransitionController; // @synthesize _cachedTransitionController=__cachedTransitionController;
@property(retain, nonatomic, setter=_setTransitionController:) id <UIViewControllerAnimatedTransitioning> _transitionController; // @synthesize _transitionController=__transitionController;
@property(nonatomic, setter=_setPositionBarsExclusivelyWithSafeArea:) _Bool _positionBarsExclusivelyWithSafeArea; // @synthesize _positionBarsExclusivelyWithSafeArea=__positionBarsExclusivelyWithSafeArea;
@property(nonatomic, setter=_setPreferredNavigationBarPosition:) long long _preferredNavigationBarPosition; // @synthesize _preferredNavigationBarPosition=__preferredNavigationBarPosition;
@property(retain, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // @synthesize _backdropGroupName=__backdropGroupName;
@property(nonatomic, getter=_builtinTransitionGap, setter=_setBuiltinTransitionGap:) double builtinTransitionGap; // @synthesize builtinTransitionGap=_builtinTransitionGap;
@property(nonatomic, getter=_builtinTransitionStyle, setter=_setBuiltinTransitionStyle:) long long builtinTransitionStyle; // @synthesize builtinTransitionStyle=_builtinTransitionStyle;
@property(nonatomic) _Bool hidesBarsOnTap; // @synthesize hidesBarsOnTap=_hidesBarsOnTap;
@property(nonatomic) _Bool hidesBarsWhenVerticallyCompact; // @synthesize hidesBarsWhenVerticallyCompact=_hidesBarsWhenVerticallyCompact;
@property(nonatomic) _Bool hidesBarsOnSwipe; // @synthesize hidesBarsOnSwipe=_hidesBarsOnSwipe;
@property(nonatomic) _Bool hidesBarsWhenKeyboardAppears; // @synthesize hidesBarsWhenKeyboardAppears=_hidesBarsWhenKeyboardAppears;
@property(nonatomic, setter=_setInteractiveScrollActive:) _Bool _interactiveScrollActive; // @synthesize _interactiveScrollActive;
@property(retain, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
@property(nonatomic, getter=isInteractiveTransition) _Bool interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) __weak id <UINavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double customNavigationTransitionDuration; // @synthesize customNavigationTransitionDuration=_customNavigationTransitionDuration;
@property(nonatomic, setter=_setToolbarClass:) Class _toolbarClass; // @synthesize _toolbarClass;
- (void).cxx_destruct;
- (id)moreListTableCell;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)_moreListTitle;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)_viewForContentInPopover;
- (_Bool)isModalInPopover;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(_Bool)arg2 andBottomView:(_Bool)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_setPreferredContentSizeFromChildContentContainer:(id)arg1;
- (struct CGSize)preferredContentSize;
- (struct CGSize)contentSizeForViewInPopover;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize)arg1;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (void)_layoutTopViewControllerInSheet;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)tabBarItem;
- (_Bool)_navigationSoundsEnabled;
- (void)_setNavigationSoundsEnabled:(_Bool)arg1;
- (void)_playPopNavigationSound;
- (void)_playPushNavigationSound;
- (id)defaultPNGName;
- (void)_setBarsHidden:(_Bool)arg1 allowAnimation:(_Bool)arg2;
- (void)_setBarsHidden:(_Bool)arg1;
- (void)_gestureRecognizedToggleVisibility:(id)arg1;
- (_Bool)_useCrossFadeForGestureHiding;
- (_Bool)_shouldHideBarsForTraits:(id)arg1;
- (void)_configureBarTapGesture;
- (id)_existingToolbarWithItems;
@property(readonly, nonatomic) UITapGestureRecognizer *barHideOnTapGestureRecognizer;
- (void)_makeBarHideGestureIfNecessary;
- (void)_gestureRecognizedInteractiveHide:(id)arg1;
- (void)_configureBarSwipeGesture;
@property(readonly, nonatomic) UIPanGestureRecognizer *barHideOnSwipeGestureRecognizer;
- (void)_makeBarSwipeGestureIfNecessary;
- (void)setCondensesBarsOnSwipe:(_Bool)arg1;
- (_Bool)condensesBarsOnSwipe;
- (void)_configureKeyboardBarHiding;
- (void)_hideForKeyboardAppearance;
- (void)_setKeyboardNotificationToken:(id)arg1;
- (void)_configureBarsAutomaticActions;
- (void)_navigationItemDidUpdateSearchController:(id)arg1 oldSearchController:(id)arg2;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (struct NSDirectionalEdgeInsets)_layoutMarginsforNavigationBar:(id)arg1;
- (void)_performCoordinatedUpdateTopFramesTransitionAnimation;
- (void)_performCoordinatedLayoutToLayoutNavigationTransitionAnimations;
- (struct CGRect)_incomingNavigationBarFrame;
- (void)_navigationBarWillBeginCoordinatedTransitionAnimations:(id)arg1;
- (_Bool)_isPushingOrPoppingUsingLayoutToLayoutNavigationTransition;
- (void)_initializeNavigationDeferredTransitionContextIfNecessary;
- (void)_navigationBarChangedSize:(id)arg1;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)_findViewControllerToPopToForNavigationItem:(id)arg1;
- (long long)_positionForBar:(id)arg1;
- (_Bool)_viewControllerUnderlapsStatusBar;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)updateTitleForViewController:(id)arg1;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (_Bool)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldSynthesizeSupportedOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)_doesTopViewControllerSupportInterfaceOrientation:(long long)arg1;
- (_Bool)_allowsAutorotation;
- (_Bool)_allowsFreezeLayoutForOrientationChangeOnDismissal;
- (void)_setAllowsFreezeLayoutForOrientationChangeOnDismissal:(_Bool)arg1;
- (_Bool)_transitionConflictsWithNavigationTransitions:(id)arg1;
- (void)_presentationTransitionUnwrapViewController:(id)arg1;
- (void)_presentationTransitionWrapViewController:(id)arg1 forTransitionContext:(id)arg2;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(_Bool)arg2;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)popViewControllerWithAnimationTransition:(long long)arg1 duration:(double)arg2 curve:(long long)arg3;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(_Bool)arg2;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(_Bool)arg1;
- (double)_customNavigationTransitionDuration;
- (id)_interruptibleNavigationTransitionAnimator;
- (_Bool)_hasInterruptibleNavigationTransition;
- (_Bool)_isInteractiveCustomNavigationTransition;
- (_Bool)_willPerformCustomNavigationTransitionForPush;
- (_Bool)_willPerformCustomNavigationTransitionForPop;
- (_Bool)_shouldPopFromLandscapeToPortraitOrientation;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_snapshotView;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1 isHidden:(_Bool)arg2;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_updateBottomBarHiddenState;
- (void)_resetBottomBarHiddenState;
- (_Bool)_shouldBottomBarBeHidden;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)_findViewControllerToPopTo;
- (id)_nthChildViewControllerFromTop:(unsigned long long)arg1;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_prepareForNormalDisplayWithNavigationController:(id)arg1;
- (void)_noteNestedNavigationControllerDidReturnToNormal:(id)arg1;
- (void)_detachTopPaletteIfShowingSearchBarForViewController:(id)arg1;
- (void)_detachTopPaletteIfShowingSearchBarForTopmostViewControllerInNavigationController:(id)arg1;
- (void)_prepareForNestedDisplayWithNavigationController:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (void)_executeNavigationHandler:(CDUnknownBlockType)arg1 deferred:(_Bool)arg2;
- (id)_customInteractionController:(id)arg1;
- (_Bool)_shouldUseBuiltinInteractionController;
- (void)__viewWillLayoutSubviews;
- (void)_safeAreaInsetsDidChangeForView;
- (void)_layoutContainerViewSemanticContentAttributeChanged:(id)arg1;
- (id)_customTransitionController:(_Bool)arg1;
- (_Bool)_isPerformingLayoutToLayoutTransition;
- (void)_propagateContentAdjustmentsForControllersWithSharedViews;
- (id)_builtinInteractionController;
- (id)_builtinTransitionController;
- (void)_notifyTransitionBegan:(id)arg1;
- (void)_clearLastOperation;
- (int)_deferredTransition;
- (void)_startDeferredTransitionIfNeeded;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (long long)_navigationTransitionForUITransition:(int)arg1;
- (void)_layoutViewController:(id)arg1;
- (void)_performSkippedHostedRefreshControlUpdateSchedulingDeferredUpdateIfNecessary;
- (_Bool)_shouldSkipHostedRefreshControlUpdateSchedulingDeferredUpdateIfNecessary;
- (_Bool)_canHostRefreshControlOwnedByScrollView:(id)arg1;
- (void)_updateNavigationBarHostedRefreshControlToHostRefreshControlForScrollView:(id)arg1;
- (void)_reloadCachedInteractiveScrollMeasurements;
- (void)_handleSubtreeDidGainScrollView:(id)arg1;
- (void)_viewControllerSubtreeDidGainViewController:(id)arg1;
- (void)_viewSubtreeDidGainScrollView:(id)arg1 enclosingViewController:(id)arg2;
- (void)_observeScrollView:(id)arg1 didBeginTransitionToDeferredContentOffset:(struct CGPoint)arg2;
- (void)_stopObservingContentScrollViewForViewController:(id)arg1;
- (void)_stopObservingContentScrollView:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1 topLayoutType:(long long)arg2;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_observeScrollViewDidEndDecelerating:(id)arg1;
- (void)_observeScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_observeScrollViewWillBeginDragging:(id)arg1;
- (struct UIEdgeInsets)_collapsableContentPaddingForObservedScrollView:(id)arg1;
- (struct UIEdgeInsets)_revealableContentPaddingForObservedScrollView:(id)arg1 includeContentWithCollapsedAffinity:(_Bool)arg2;
- (void)_observeScrollView:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3 unclampedOriginalTarget:(struct CGPoint)arg4;
- (double)_scrollOffsetRetargettedToDetentOffsetIfNecessary:(double)arg1 unclampedOriginalTargetOffset:(double)arg2 scrollView:(id)arg3;
- (id)_scrollDetentOffsetsForScrollView:(id)arg1;
- (double)_topBarHeight;
- (double)_heightOfTopPartsWhenHiddenAndCollapsed;
- (double)_heightOfTopPartsWhenVisibleAndExpanded;
- (struct CGSize)_navigationBarSizeForViewController:(id)arg1 proposedHeight:(double)arg2 allowRubberBandStretch:(_Bool)arg3;
- (CDStruct_c3b9c2ee)_intrinsicNavigationBarHeightRangeForViewController:(id)arg1;
- (double)_preferredHeightForHidingNavigationBarForViewController:(id)arg1;
- (double)_widthForLayout;
- (id)_independentContainedScrollViewIntermediateToDescendantViewController:(id)arg1;
- (void)_calculateTopViewFramesForExpandedLayoutWithViewController:(id)arg1 contentScrollView:(id)arg2 gettingNavBarFrame:(struct CGRect *)arg3 topPaletteFrame:(struct CGRect *)arg4;
- (void)_calculateTopViewFramesForPushPopIncomingLayoutWithViewController:(id)arg1 contentScrollView:(id)arg2 gettingNavBarFrame:(struct CGRect *)arg3 topPaletteFrame:(struct CGRect *)arg4;
- (double)_topPalettePreferredLayoutHeightForVisibilityStateIfDisplayedForViewController:(id)arg1;
- (void)_calculateTopViewFramesForLayoutWithViewController:(id)arg1 contentScrollView:(id)arg2 navBarFrame:(struct CGRect *)arg3 topPaletteFrame:(struct CGRect *)arg4 topLayoutType:(long long)arg5;
- (CDStruct_1c6ce877)_calculateTopLayoutInfoForViewController:(id)arg1;
- (void)_performTopViewGeometryUpdates:(CDUnknownBlockType)arg1;
- (void)_initializeHeightOfTopPalette:(id)arg1;
- (void)_updateTopPaletteVisibilityState;
- (void)_updateTopViewFramesToMatchScrollOffsetInViewController:(id)arg1 contentScrollView:(id)arg2 topLayoutType:(long long)arg3;
- (_Bool)_canUpdateTopViewFramesToMatchScrollView;
- (void)_performWhileIgnoringUpdateTopViewFramesToMatchScrollOffset:(CDUnknownBlockType)arg1;
- (long long)_topLayoutTypeForViewController:(id)arg1;
- (_Bool)_isPushingOrPopping;
- (void)_updateTopViewFramesForViewController:(id)arg1;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (double)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (double)_scrollViewTopContentInsetForViewController:(id)arg1;
- (struct UIEdgeInsets)_expectedContentInsetDeltaForViewController:(id)arg1;
- (struct CGRect)_frameForWrapperViewForViewController:(id)arg1;
- (struct CGRect)_frameForViewController:(id)arg1;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (struct UIEdgeInsets)_edgeInsetsDeferringToCommandeeringTableHeaderViewStyleSearchControllerWithPresentingViewController:(id)arg1;
- (struct UIEdgeInsets)_avoidanceInsets;
- (void)_eagerlyUpdateSafeAreaInsets;
- (void)_layoutTopViewController;
@property(readonly, nonatomic) _Bool _isLayingOutTopViewController;
- (void)_updateChildContentMargins;
- (void)_updatePaletteConstraints;
- (void)_updatePalettesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_shouldLayoutViewControllerForTransparentStatusBar:(id)arg1;
- (_Bool)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (_Bool)_shouldToolBar:(id)arg1 insetViewController:(id)arg2;
- (_Bool)_shouldToolBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(_Bool *)arg3;
- (_Bool)_shouldTabBarController:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(_Bool *)arg3;
- (_Bool)_shouldNavigationBarInsetViewController:(id)arg1;
- (_Bool)_shouldNavigationBarInsetViewController:(id)arg1 orOverlayContent:(_Bool *)arg2;
- (_Bool)_isNavigationBarEffectivelyVisible;
- (_Bool)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)arg1;
- (_Bool)_isNavigationBarVisible;
- (_Bool)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (void)_updateBarsForCurrentInterfaceOrientationAndForceBarLayout:(_Bool)arg1;
- (_Bool)wasLastOperationAnimated;
- (long long)lastOperation;
@property(nonatomic) _Bool needsDeferredTransition;
- (void)setNeedsDeferredTransition;
- (void)_setCustomTransition:(_Bool)arg1;
- (_Bool)isBuiltinTransition;
- (_Bool)isCustomTransition;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(long long)arg2;
- (void)_navigationTransitionView:(id)arg1 didCancelTransition:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 wrapperView:(id)arg5;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(long long)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(long long)arg2;
- (id)_transitionAnimationContext;
- (_Bool)_isTransitioning;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_privateWillShowViewController:(id)arg1;
- (void)willShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_deepestUnambiguousResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (id)_screenEdgePanGestureRecognizer;
- (void)_performBackGesture:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (void)unwindForSegue:(id)arg1 towardsViewController:(id)arg2;
- (id)allowedChildViewControllersForUnwindingFromSource:(id)arg1;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)editing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidUnload;
- (void)purgeMemoryForReason:(int)arg1;
- (_Bool)_viewControllerWasSelected;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)_viewControllerForDisappearCallback;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_setIsWrappingDuringAdaptation:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isShown;
@property(readonly, nonatomic) UIGestureRecognizer *interactivePopGestureRecognizer;
- (void)loadView;
- (void)_setUpContentFocusContainerGuide;
- (id)_recallRememberedFocusedItemForViewController:(id)arg1;
- (void)_forgetFocusedItemForViewController:(id)arg1;
- (void)_rememberFocusedItem:(id)arg1 forViewController:(id)arg2;
@property(readonly, nonatomic, getter=_rememberedFocusedItemsByViewController) NSMapTable *rememberedFocusedItemsByViewController; // @synthesize rememberedFocusedItemsByViewController=_rememberedFocusedItemsByViewController;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (id)preferredFocusedView;
- (id)_overridingPreferredFocusEnvironment;
- (_Bool)_canRestoreFocusAfterTransitionToRecalledItem:(id)arg1 inViewController:(id)arg2;
- (void)_rememberPresentingFocusedItem:(id)arg1;
- (void)_navigationBarDidEndAnimation:(id)arg1;
- (void)_navigationBarDidChangeStyle:(id)arg1;
- (id)childViewControllerForUserInterfaceStyle;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarStyle;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setToolbarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)_positionToolbarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 crossFade:(_Bool)arg3;
- (void)_positionToolbarHidden:(_Bool)arg1 edge:(unsigned long long)arg2;
- (void)_positionToolbarHidden:(_Bool)arg1;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isToolbarHidden) _Bool toolbarHidden;
@property(readonly, nonatomic) UIToolbar *toolbar;
- (void)setToolbar:(id)arg1;
- (void)_configureToolbar;
- (id)_existingToolbar;
- (id)_existingNavigationBar;
- (void)_sendNavigationBarToBack;
@property(nonatomic) _Bool avoidMovingNavBarOffscreenBeforeUnhiding;
- (void)setSearchBarHidNavBar:(_Bool)arg1;
- (_Bool)searchBarHidNavBar;
@property(nonatomic) _Bool pretendNavBarHidden;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setNavigationBarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)_unhideNavigationBarForEdge:(unsigned long long)arg1;
- (void)_positionNavigationBar:(id)arg1 hidden:(_Bool)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint)arg4 offset:(double)arg5;
@property(nonatomic, setter=_setSearchHidNavigationBar:) _Bool _searchHidNavigationBar;
- (void)_setNavigationBarHidesCompletelyOffscreen:(_Bool)arg1;
- (struct CGPoint)_computeTopBarCenter:(id)arg1 hidden:(_Bool)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint)arg4 offset:(double)arg5;
- (_Bool)_reallyWantsFullScreenLayout;
- (void)_positionNavigationBarHidden:(_Bool)arg1;
- (void)_setNavigationBarHidden:(_Bool)arg1 edgeIfNotNavigating:(unsigned long long)arg2 duration:(double)arg3;
- (_Bool)_isTransitioningOrPaletteIsTransitioning;
- (void)_repositionPaletteWithNavigationBarHidden:(_Bool)arg1 duration:(double)arg2 shouldUpdateNavigationItems:(_Bool)arg3;
- (void)_positionPaletteHidden:(_Bool)arg1 edge:(unsigned long long)arg2;
- (void)_positionTransitioningPalette:(id)arg1 outside:(_Bool)arg2 edge:(unsigned long long)arg3 preservingYPosition:(_Bool)arg4;
- (void)_positionPaletteHidden:(_Bool)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (void)_positionNavigationBarHidden:(_Bool)arg1 edge:(unsigned long long)arg2;
- (void)_positionNavigationBarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_animationParametersForHidingNavigationBar:(_Bool)arg1 lastOperation:(long long)arg2 edge:(unsigned long long *)arg3 duration:(double *)arg4;
- (_Bool)_clipUnderlapWhileTransitioning;
- (void)_setClipUnderlapWhileTransitioning:(_Bool)arg1;
- (_Bool)_navigationBarShouldUpdateProgress;
@property(nonatomic, getter=isNavigationBarHidden) _Bool navigationBarHidden;
- (void)setNavigationBar:(id)arg1;
- (id)_backdropBarGroupName;
- (id)_navigationBarHiddenByDefault:(_Bool)arg1;
@property(readonly, nonatomic) UINavigationBar *navigationBar;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (Class)navigationBarClass;
- (void)_updateSearchPaletteSettingsForTopViewController:(id)arg1;
- (_Bool)_shouldHideSearchBarWhenScrollingForNavigationItem:(id)arg1;
- (void)_createAndAttachSearchPaletteForTopViewControllerIfNecessary:(id)arg1;
- (id)_navControllerToCreateManagedSearchPaletteForNavController:(id)arg1;
- (void)_createAndAttachSearchPaletteForTransitionToTopViewControllerIfNecesssary:(id)arg1;
- (void)_loadTopSearchPaletteForDeferredTransitionIfNecessaryForTransitionToViewController:(id)arg1;
- (id)_viewControllerForSearchPalette;
- (void)_startCustomTransition:(id)arg1;
- (id)_keyboardAnimationStyle;
- (_Bool)_isViewControllerFullScene;
- (int)_keyboardDirectionForTransition:(long long)arg1;
- (void)_startToolbarTransitionIfNecessary:(id)arg1 animated:(_Bool)arg2;
- (id)_transitionCoordinator;
- (_Bool)_shouldCrossFadeBottomBars;
- (_Bool)_shouldCrossFadeNavigationBar;
- (double)durationForTransition:(int)arg1;
- (void)_cancelInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (void)_finishInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_updateInteractiveBarTransition:(id)arg1 withUUID:(id)arg2 percent:(double)arg3 isFinished:(_Bool)arg4 didComplete:(_Bool)arg5 completionSpeed:(double)arg6 completionCurve:(long long)arg7;
- (void)_startInteractiveNavbarTransition;
- (void)_startInteractiveToolbarTransition;
- (id)_startInteractiveBarTransition:(id)arg1;
- (void)_finishAnimationTracking;
- (_Bool)_navbarIsAppearingInteractively;
- (_Bool)_toolbarIsAnimatingInteractively;
- (void)_setContentInset:(struct UIEdgeInsets)arg1;
- (void)_setClipsToBounds:(_Bool)arg1;
@property(readonly, nonatomic) UINavigationTransitionView *navigationTransitionView;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(_Bool)arg3;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(_Bool)arg3 operation:(long long)arg4;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(_Bool)arg3;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(_Bool)arg3 operation:(long long)arg4;
- (id)_navigationBarForNestedNavigationController;
- (id)_outermostNavigationController;
- (void)_updateInteractivePopGestureEnabledState;
- (id)_lastNavigationItems;
- (id)_navigationItemsCallingPublicAccessor:(_Bool)arg1;
- (id)_navigationItems;
- (id)navigationItem;
@property(nonatomic, getter=_allowChildSplitViewControllers, setter=_setAllowChildSplitViewControllers:) _Bool allowChildSplitViewControllers;
- (_Bool)_hasNestedNavigationController;
@property(nonatomic, getter=_isNestedNavigationController, setter=_setIsNestedNavigationController:) _Bool isNestedNavigationController;
@property(nonatomic, getter=_allowNestedNavigationControllers, setter=_setAllowNestedNavigationControllers:) _Bool allowNestedNavigationControllers;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
@property(copy, nonatomic) NSArray *viewControllers;
- (_Bool)_isPresentationContextByDefault;
@property(readonly, nonatomic) UIViewController *previousViewController;
@property(readonly, nonatomic) UIViewController *visibleViewController;
- (long long)modalTransitionStyle;
@property(readonly, nonatomic) UIViewController *bottomViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
- (_Bool)_usesTransitionController;
- (void)setEnableBackButtonDuringTransition:(_Bool)arg1;
- (_Bool)enableBackButtonDuringTransition;
- (void)setAllowUserInteractionDuringTransition:(_Bool)arg1;
- (_Bool)allowUserInteractionDuringTransition;
- (_Bool)_useStandardStatusBarHeight;
- (_Bool)_useCurrentStatusBarHeight;
- (void)_setUseStandardStatusBarHeight:(_Bool)arg1;
- (_Bool)_isAlreadyPoppingNavItem;
- (void)_setUseCurrentStatusBarHeight:(_Bool)arg1;
@property(nonatomic, getter=_didExplicitlyHideTabBar, setter=_setDidExplicitlyHideTabBar:) _Bool didHideTabBar;
@property(nonatomic, getter=_isCrossfadingInTabBar, setter=_setCrossfadingInTabBar:) _Bool crossfadingInTabBar;
@property(nonatomic, getter=_isCrossfadingOutTabBar, setter=_setCrossfadingOutTabBar:) _Bool crossfadingOutTabBar;
- (void)dealloc;
- (void)_releaseContainerViews;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_shouldPersistViewWhenCoding;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_confirmBarAccessMethods;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property _Bool isExpanded;
@property(retain) UIViewController *detailViewController;
- (void)_startPaletteTransitionIfNecessary:(id)arg1 animated:(_Bool)arg2;
- (void)detachPalette:(id)arg1;
- (void)detachPalette:(id)arg1 isInPaletteTransition:(_Bool)arg2;
- (id)existingPaletteForEdge:(unsigned long long)arg1;
- (void)_detachPalette:(id)arg1;
- (void)attachPalette:(id)arg1 isPinned:(_Bool)arg2;
- (void)_installPaletteIntoViewHierarchy:(id)arg1;
- (id)_paletteForEdge:(unsigned long long)arg1 size:(struct CGSize)arg2 paletteClass:(Class)arg3;
- (id)_managedSearchPaletteForEdge:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (id)paletteForEdge:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (id)_pinningBarForPalette:(id)arg1;
- (struct CGRect)_boundsForPalette:(id)arg1 size:(struct CGSize)arg2;
- (struct CGRect)_frameForPalette:(id)arg1;
- (id)_topPalette;
- (void)_updateControlledViewsToFrame:(struct CGRect)arg1;
- (void)_prepareCollectionViewControllers:(id)arg1 forSharingInRange:(id)arg2;
- (void)_prepareCollectionViewControllerForSharing:(id)arg1;
- (void)_prepareCollectionViewController:(id)arg1 forSharingWithCollectionViewController:(id)arg2;
- (id)_additionalViewControllersToCheckForUserActivity;
- (void)_stopTransitionsImmediately;
- (id)_navigationBarForDragAffordance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

