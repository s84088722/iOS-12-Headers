//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/NSISEngineDelegate-Protocol.h>
#import <UIKitCore/_UIContextBindable-Protocol.h>
#import <UIKitCore/_UIFocusEventRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIFocusMovementActionForwarding-Protocol.h>

@class CAContext, CALayer, NSArray, NSMutableArray, NSMutableSet, NSString, NSUndoManager, UIAccessibilityHUDView, UIResponder, UIScreen, UITraitCollection, UIViewController, _UICanvas, _UIContextBinder, _UIFocusEventRecognizer, _UISystemGestureGateGestureRecognizer, _UIViewControllerNullAnimationTransitionCoordinator, _UIWindowAnimationController;
@protocol UIFocusItem;

@interface UIWindow : UIView <NSISEngineDelegate, _UIFocusEventRecognizerDelegate, _UIFocusMovementActionForwarding, _UIContextBindable>
{
    NSString *_debugName;
    long long _sceneOrientation;
    _Bool _notedOverlayInsetChange;
    id _delegate;
    double _windowLevel;
    double _windowSublevel;
    CAContext *_layerContext;
    _UICanvas *_canvas;
    _UIContextBinder *_contextBinder;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    UIResponder *_firstResponder;
    id _fingerInfo;
    id _touchData;
    long long _viewOrientation;
    UIView *_exclusiveTouchView;
    NSUndoManager *_undoManager;
    CALayer *_transformLayer;
    CALayer *_rootLayer;
    NSMutableArray *_rotationViewControllers;
    UIViewController *_rootViewController;
    NSMutableSet *_subtreeMonitoringViews;
    NSMutableSet *_tintViews;
    id _currentTintView;
    struct {
        unsigned int delegateWillRotate:1;
        unsigned int delegateDidRotate:1;
        unsigned int delegateWillAnimateFirstHalf:1;
        unsigned int delegateDidAnimationFirstHalf:1;
        unsigned int delegateWillAnimateSecondHalf:1;
        unsigned int autorotatesToPortrait:1;
        unsigned int autorotatesToPortraitUpsideDown:1;
        unsigned int autorotatesToLandscapeLeft:1;
        unsigned int autorotatesToLandscapeRight:1;
        unsigned int dontBecomeKeyOnOrderFront:1;
        unsigned int output:1;
        unsigned int inGesture:1;
        unsigned int bitsPerComponent:4;
        unsigned int autorotates:1;
        unsigned int isRotating:1;
        unsigned int isUsingOnePartRotationAnimation:1;
        unsigned int disableAutorotationCount:4;
        unsigned int needsAutorotationWhenReenabled:1;
        unsigned int forceTwoPartRotationAnimation:1;
        unsigned int orderKeyboardInAfterRotating:1;
        unsigned int roundedCorners:4;
        unsigned int resizesToFullScreen:1;
        unsigned int keepContextInBackground:1;
        unsigned int ignoreSetHidden:1;
        unsigned int forceVisibleOnInit:1;
        unsigned int settingFirstResponder:1;
        unsigned int legacyOrientationChecks:1;
        unsigned int windowResizedToFullScreen:1;
        unsigned int statusBarFollowsOrientation:1;
        unsigned int secure:1;
        unsigned int isMainSceneSized:1;
        unsigned int didSetRestorationIdentifier:1;
        unsigned int resigningFirstResponderFromHost:1;
        unsigned int needsBoundingPathUpdate:1;
    } _windowFlags;
    id _windowController;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForTouches;
    UITraitCollection *_traitCollection;
    UITraitCollection *_destinationTraitCollection;
    struct __CFDictionary *_touchMap;
    long long _containedGestureRecognizerMaximumState;
    double _lastTouchTimestamp;
    unsigned int _systemGesturesArePossible:1;
    long long _verticalSizeClassStateRestorationOverride;
    long long _horizontalSizeClassStateRestorationOverride;
    UIAccessibilityHUDView *_accessibilityHUD;
    _Bool _shouldDisableTransformLayerScalingForSnapshotting;
    _Bool __shouldHitTestEntireScreen;
    _Bool __usesLegacySupportedOrientationChecks;
    _Bool ___hostViewUnderlapsStatusBar;
    _Bool __containedGestureRecognizersShouldRespectGestureServerInstructions;
    _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator;
    NSArray *_windowInternalConstraints;
    NSArray *_rootViewConstraints;
    CDUnknownBlockType _deferredLaunchBlock;
    long long __deferredLaunchOrientation;
    id <UIFocusItem> _rememberedFocusedItem;
    long long _toWindowOrientation;
    long long _fromWindowOrientation;
    _UIWindowAnimationController *__animationController;
    CDUnknownBlockType __shouldPreventRotationHook;
    _UIFocusEventRecognizer *_focusEventRecognizer;
}

+ (id)_windowWithContextId:(unsigned int)arg1;
+ (_Bool)_isSystemWindow;
+ (_Bool)_isSecure;
+ (id)_findWithDisplayPoint:(struct CGPoint)arg1;
+ (void)_enumerateWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 allowMutation:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)allWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2 forScreen:(id)arg3;
+ (id)allWindowsIncludingInternalWindows:(_Bool)arg1 onlyVisibleWindows:(_Bool)arg2;
+ (id)_homeIndicatorAutoHiddenControllingWindow;
+ (id)_screenEdgesDeferringSystemGesturesControllingWindow;
+ (id)_whitePointAdaptivityStyleControllingWindow;
+ (id)_findWindowForControllingOverallAppearance;
+ (id)_globalHitTestForLocation:(struct CGPoint)arg1 inWindowServerHitTestWindow:(id)arg2 withEvent:(id)arg3;
+ (id)_hitTestToPoint:(struct CGPoint)arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4;
+ (id)_topVisibleWindowPassingTest:(CDUnknownBlockType)arg1;
+ (void *)createIOSurfaceFromScreen:(id)arg1;
+ (void *)createIOSurfaceFromDisplayConfiguration:(id)arg1;
+ (void *)createScreenIOSurface;
+ (void *)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int *)arg2 count:(unsigned long long)arg3 frame:(struct CGRect)arg4 baseTransform:(struct CGAffineTransform)arg5;
+ (void *)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int *)arg2 count:(unsigned long long)arg3 frame:(struct CGRect)arg4 usePurpleGfx:(_Bool)arg5 outTransform:(struct CGAffineTransform *)arg6;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)arg1 count:(unsigned long long)arg2 frame:(struct CGRect)arg3 usePurpleGfx:(_Bool)arg4 outTransform:(struct CGAffineTransform *)arg5;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)arg1 count:(unsigned long long)arg2 frame:(struct CGRect)arg3 outTransform:(struct CGAffineTransform *)arg4;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)arg1 count:(unsigned long long)arg2 frame:(struct CGRect)arg3;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 forAutolayoutRootViewsOnly:(_Bool)arg3;
+ (void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2;
+ (void)_unregisterChargedView:(id)arg1;
+ (void)_removeWindowFromStack:(id)arg1;
+ (void)_popKeyWindow:(id)arg1;
+ (void)_popKeyWindow;
+ (void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(_Bool)arg2;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_setKeyWindowStackEnabled:(_Bool)arg1;
+ (unsigned long long)_keyWindowStackSize;
+ (void)_clearKeyWindowStack;
+ (_Bool)_clearPreCommitHandlerRegistration;
+ (void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(CDUnknownBlockType)arg2;
+ (void)_synchronizeDrawingWithFence:(id)arg1;
+ (id)_synchronizedDrawingFence;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(CDUnknownBlockType)arg2;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawingWithPreCommitHandler:(CDUnknownBlockType)arg1;
+ (void)_synchronizeDrawing;
+ (void)_setTransformLayerRotationsAreEnabled:(_Bool)arg1;
+ (_Bool)_transformLayerRotationsAreEnabled;
+ (void)_executeDeferredLaunchBlocks;
+ (_Bool)_allWindowsKeepContextInBackground;
+ (void)_setAllWindowsKeepContextInBackground:(_Bool)arg1;
+ (Class)layerClass;
+ (void)adjustForAccessibilityIfNeeded:(id)arg1;
+ (void)initialize;
+ (id)_externalKeyWindow;
+ (id)keyWindow;
+ (struct CGRect)constrainFrameToScreen:(struct CGRect)arg1;
@property(nonatomic, setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:) _Bool _containedGestureRecognizersShouldRespectGestureServerInstructions; // @synthesize _containedGestureRecognizersShouldRespectGestureServerInstructions=__containedGestureRecognizersShouldRespectGestureServerInstructions;
@property(readonly, nonatomic, getter=_focusEventRecognizer) _UIFocusEventRecognizer *focusEventRecognizer; // @synthesize focusEventRecognizer=_focusEventRecognizer;
@property(nonatomic, setter=__setHostViewUnderlapsStatusBar:) _Bool __hostViewUnderlapsStatusBar; // @synthesize __hostViewUnderlapsStatusBar=___hostViewUnderlapsStatusBar;
@property(copy, nonatomic, setter=_setShouldPreventRotationHook:) CDUnknownBlockType _shouldPreventRotationHook; // @synthesize _shouldPreventRotationHook=__shouldPreventRotationHook;
@property(retain, nonatomic, getter=_animationController, setter=_setAnimationController:) _UIWindowAnimationController *_animationController; // @synthesize _animationController=__animationController;
@property(nonatomic, getter=_fromWindowOrientation, setter=_setFromWindowOrientation:) long long fromWindowOrientation; // @synthesize fromWindowOrientation=_fromWindowOrientation;
@property(nonatomic, getter=_toWindowOrientation, setter=_setToWindowOrientation:) long long toWindowOrientation; // @synthesize toWindowOrientation=_toWindowOrientation;
@property(readonly, nonatomic) _Bool _usesLegacySupportedOrientationChecks; // @synthesize _usesLegacySupportedOrientationChecks=__usesLegacySupportedOrientationChecks;
@property(nonatomic, getter=_rememberedFocusedItem, setter=_setRememberedFocusedItem:) __weak id <UIFocusItem> rememberedFocusedItem; // @synthesize rememberedFocusedItem=_rememberedFocusedItem;
@property(nonatomic, setter=_setShouldHitTestEntireScreen:) _Bool _shouldHitTestEntireScreen; // @synthesize _shouldHitTestEntireScreen=__shouldHitTestEntireScreen;
@property(nonatomic, setter=_setDeferredLaunchOrientation:) long long _deferredLaunchOrientation; // @synthesize _deferredLaunchOrientation=__deferredLaunchOrientation;
@property(copy, nonatomic, setter=_setDeferredLaunchBlock:) CDUnknownBlockType _deferredLaunchBlock; // @synthesize _deferredLaunchBlock;
@property(nonatomic, setter=_setBoundContext:) __weak CAContext *_boundContext; // @synthesize _boundContext=_layerContext;
@property(nonatomic, setter=_setContextBinder:) __weak _UIContextBinder *_contextBinder; // @synthesize _contextBinder;
@property(nonatomic, setter=_setShouldDisableTransformLayerScalingForSnapshotting:) _Bool _shouldDisableTransformLayerScalingForSnapshotting; // @synthesize _shouldDisableTransformLayerScalingForSnapshotting;
@property(copy, nonatomic, setter=_setRootViewConstraints:) NSArray *_rootViewConstraints; // @synthesize _rootViewConstraints;
@property(copy, nonatomic, setter=_setWindowInternalConstraints:) NSArray *_windowInternalConstraints; // @synthesize _windowInternalConstraints;
@property(retain, nonatomic, setter=_setTraitCollectionChangeTransitionCoordinator:) _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator; // @synthesize _traitCollectionChangeTransitionCoordinator;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)setRestorationIdentifier:(id)arg1;
- (id)restorationIdentifier;
- (id)_overridingPreferredFocusEnvironment;
- (id)preferredFocusEnvironments;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (id)preferredFocusedView;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
- (id)parentFocusEnvironment;
- (void)_forwardFocusMovementAction:(id)arg1;
- (void)_focusEventRecognizer:(id)arg1 didRecognizeFastScrollingRequest:(id)arg2;
- (_Bool)_focusEventRecognizer:(id)arg1 didRecognizeFocusMovementRequest:(id)arg2;
- (id)_focusMovementSystemForFocusEventRecognizer:(id)arg1;
- (_Bool)_shouldRecognizeEventsInFocusEventRecognizer:(id)arg1;
@property(readonly, nonatomic, getter=_focusResponder) __weak UIResponder *focusResponder;
- (void)_removeFocusEventRecognizer;
- (void)_installFocusEventRecognizer;
- (_Bool)_wantsFocusEngine;
@property(readonly, nonatomic, getter=_supportsFocus) _Bool supportsFocus;
- (id)_focusedView;
- (void)_dismissAccessibilityHUD;
- (void)_showAccessibilityHUDItem:(id)arg1;
- (_Bool)_requiresKeyboardPresentationFence;
- (_Bool)_appearsInLoupe;
- (_Bool)_shouldCreateContextAsSecure;
- (_Bool)_isSecure;
- (void)_setSecure:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_normalInheritedTintColor;
- (double)_touchSloppinessFactor;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (struct __CFDictionary *)_touchMap;
- (void)_setTouchMap:(struct __CFDictionary *)arg1;
- (_Bool)_shouldZoom;
- (void)_moveWithEvent:(id)arg1;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)_resizeWindowToFullScreenIfNecessary;
- (void)_removeTintView:(id)arg1;
- (void)_addTintView:(id)arg1;
- (void)_updateCurrentTintView;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (void)_updateAppTintView;
- (id)_currentTintView;
- (void)_writeLayerTreeToPath:(id)arg1;
- (id)_subtreeMonitorsForView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (void)removeFromSuperview;
- (void)setKeepContextInBackground:(_Bool)arg1;
- (_Bool)keepContextInBackground;
- (void)setResizesToFullScreen:(_Bool)arg1;
- (_Bool)resizesToFullScreen;
- (id)_touchData;
- (struct CGPoint)_transformDisplayToWindowCoordinates:(struct CGPoint)arg1;
- (_Bool)_canAffectDisplayAdaptation;
- (_Bool)_isMainSceneSized;
- (_Bool)_shouldControlAutorotation;
- (_Bool)_canAffectStatusBarAppearance;
- (void)_didSnapshot;
- (void)_willSnapshot;
- (_Bool)_includeInDefaultImageSnapshot;
- (_Bool)isInternalWindow;
- (id)_responderWindow;
- (id)_window;
- (_Bool)_isInAWindow;
- (id)_targetWindowForPathIndex:(long long)arg1 atPoint:(struct CGPoint)arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5;
- (id)_hitTestLocation:(struct CGPoint)arg1 inScene:(id)arg2 withWindowServerHitTestWindow:(id)arg3 event:(id)arg4;
- (void)_updateIsSceneSizedFlag;
- (void)_sceneBoundsDidChange;
- (_Bool)_resizeWindowFrameToSceneBoundsIfNecessary;
- (struct CGPoint)_clampPointToScreenJail:(struct CGPoint)arg1;
- (struct CGPoint)_convertDoublePointFromSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertDoublePointToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGRect)_convertRectToSceneReferenceSpace:(struct CGRect)arg1;
- (struct CGRect)_convertRectFromSceneReferenceSpace:(struct CGRect)arg1;
- (struct CGPoint)_convertPointToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertPointFromSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGRect)_sceneReferenceBounds;
- (long long)_sceneOrientation;
- (struct CGRect)_sceneBounds;
- (_Bool)_isHostedInAnotherProcess;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_alwaysGetsContexts;
- (_Bool)_isWindowServerHostingManaged;
- (void *)createIOSurface;
- (void *)createIOSurfaceWithFrame:(struct CGRect)arg1;
- (_Bool)_isStatusBarWindow;
- (_Bool)_clearMouseView;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent *)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (_Bool)_needsShakesWhenInactive;
- (id)_deepestUnambiguousResponder;
- (_Bool)_supportsBecomeFirstResponderWhenPossible;
- (_Bool)_becomeFirstResponderWhenPossible;
- (_Bool)becomeFirstResponder;
- (id)_firstResponder;
- (id)firstResponder;
- (_Bool)_isSettingFirstResponder;
- (void)_setIsSettingFirstResponder:(_Bool)arg1;
- (void)_setIsResigningFirstResponderFromHost:(_Bool)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (id)_registeredScrollToTopViews;
- (void)_unregisterChargedView:(id)arg1;
- (void)_registerChargedView:(id)arg1;
- (id)contentView;
- (void)makeKeyAndVisible;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)_endKeyWindowDeferral;
- (void)_beginKeyWindowDeferral;
- (_Bool)_isKeyWindowForDeferral;
- (id)_deferralPropertiesWithContextID:(unsigned int)arg1;
- (long long)_overriddenInterfaceOrientation;
- (void)_makeKeyWindowIgnoringOldKeyWindow:(_Bool)arg1;
- (void)_makeExternalKeyWindow;
- (void)makeKeyWindow;
- (void)_resignKeyWindowStatus;
@property(readonly, nonatomic, getter=isKeyWindow) _Bool keyWindow;
@property(nonatomic) double windowLevel;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_clearSizeClassesForStateRestoration;
- (void)_setStateRestorationVerticalSizeClass:(long long)arg1 horizontalSizeClass:(long long)arg2;
- (void)_propagateTraitCollectionChangedForStateRestoration;
- (void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_screenWillTransitionToTraitCollection:(id)arg1;
- (_Bool)_shouldPropagateTraitCollectionChanges;
- (id)_boundingPath;
- (void)_setNeedsBoundingPathUpdate;
- (void)_willChangeToSize:(struct CGSize)arg1 orientation:(long long)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4;
@property(readonly, nonatomic) CDStruct_d58201db __sizeClassPair;
- (void)_updateWindowTraitsAndNotify:(_Bool)arg1;
- (id)_traitCollectionForSize:(struct CGSize)arg1 screenCollection:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize)arg1 screen:(id)arg2;
- (id)_traitCollectionWhenRotated;
- (void)_updateWindowTraits;
- (id)traitCollection;
- (_Bool)_cachedTraitCollectionIsValid;
@property(retain, nonatomic) UIScreen *screen;
- (_Bool)_shouldPrepareScreenForWindow;
- (id)_screen;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)bitsPerComponent;
- (int)windowOutput;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (unsigned long long)_edgeForTouch:(id)arg1;
- (unsigned long long)_edgesForSystemGesturesTouchDelay;
- (_Bool)_shouldDelayTouchForSystemGestures:(id)arg1;
- (void)_setSystemGestureRecognitionIsPossible:(_Bool)arg1 andTouchesAreCancelled:(_Bool)arg2;
- (_Bool)_systemGestureRecognitionIsPossible;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (id)_appearanceContainer;
- (void)_setWindowInterfaceOrientation:(long long)arg1;
- (long long)_windowInterfaceOrientation;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)interfaceOrientation;
- (_Bool)isUsingOnePartRotationAnimation;
- (_Bool)isRotating;
- (_Bool)autorotates;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(_Bool)arg4;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;
- (void)_rotateWindowToOrientation:(long long)arg1 updateStatusBar:(_Bool)arg2 duration:(double)arg3 skipCallbacks:(_Bool)arg4;
- (_Bool)_shouldResizeWithScene;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 force:(_Bool)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(_Bool)arg2 duration:(double)arg3 force:(_Bool)arg4;
- (void)_notifyRotatableViewOrientation:(long long)arg1 duration:(double)arg2;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 animation:(int)arg3;
- (void)_forceTwoPartRotationAnimation:(_Bool)arg1;
- (void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(_Bool)arg2 duration:(double)arg3;
- (void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2;
- (void)setAutorotates:(_Bool)arg1 forceUpdateInterfaceOrientation:(_Bool)arg2;
- (void)setAutorotates:(_Bool)arg1;
- (void)endDisablingInterfaceAutorotation;
- (void)endDisablingInterfaceAutorotationAnimated:(_Bool)arg1;
- (_Bool)isInterfaceAutorotationDisabled;
- (void)beginDisablingInterfaceAutorotation;
- (void)_updateToNotificationProvidedInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(_Bool)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(_Bool)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 force:(_Bool)arg3;
- (void)_updateToInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_handleSBActiveInterfaceOrientationChange:(id)arg1;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect)arg1;
- (_Bool)_shouldAdjustSizeClassesAndResizeWindow;
- (void)_rotateToBounds:(struct CGRect)arg1 withAnimator:(id)arg2 transitionContext:(id)arg3;
- (_Bool)_guardSizeTransitionFromAnimations;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (void)_setWindowControlsStatusBarOrientation:(_Bool)arg1;
- (_Bool)_windowControlsStatusBarOrientation;
- (_Bool)_isAnyWindowRotating;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1 checkForDismissal:(_Bool)arg2 isRotationDisabled:(_Bool *)arg3;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (_Bool)_legacyShouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_clearPendingKeyboardChanges;
- (void)_removeRotationViewController:(id)arg1;
- (void)_addRotationViewController:(id)arg1;
- (id)__clientsForRotationCallbacks;
- (id)_clientsForRotation;
- (id)_rotationViewControllers;
- (void)_slideFooterFromOrientation:(long long)arg1 toOrientation:(long long)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(_Bool)arg3 forInterfaceOrientation:(long long)arg4;
- (_Bool)_shouldScaleByPixelDoubling;
- (_Bool)_isHostingPortalViews;
- (_Bool)_canPromoteFromKeyWindowStack;
- (_Bool)_canBecomeKeyWindow;
- (void)setBecomeKeyOnOrderFront:(_Bool)arg1;
- (double)level;
- (void)setLevel:(double)arg1;
- (struct CGPoint)convertDeviceToWindow:(struct CGPoint)arg1;
- (struct CGPoint)convertWindowToDevice:(struct CGPoint)arg1;
- (id)_rootForKeyResponderCycle;
- (_Bool)_containedInAbsoluteResponderChain;
- (id)nextResponder;
- (void)_endModalSession;
- (void)_beginModalSession;
- (id)_exclusiveTouchView;
- (void)_setExclusiveTouchView:(id)arg1;
- (double)_convertVisualAltitude:(double)arg1 toWindow:(id)arg2;
- (double)_convertVisualAltitude:(double)arg1 fromWindow:(id)arg2;
- (struct CGPoint)_convertOffsetFromSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertOffsetToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGPoint)_convertOffset:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGPoint)_convertOffset:(struct CGPoint)arg1 toWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromWindow:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toWindow:(id)arg2;
- (_Bool)_disableAutomaticKeyboardUI;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)sendEvent:(id)arg1;
- (void)_sendButtonsForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (_Bool)_canIgnoreInteractionEvents;
- (void)_fadeCalloutBarIfNeededForTouchInView:(id)arg1;
- (_Bool)_touchesInsideShouldHideCalloutBarForViewHierarchy:(id)arg1;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isScrollingEnabledForView:(id)arg1;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (struct CGPoint)warpPoint:(struct CGPoint)arg1;
- (double)_chargeMultiplicationFactor;
- (void)_sceneSettingsSafeAreaInsetsDidChange;
- (struct UIEdgeInsets)_safeAreaInsetsInSuperview:(id)arg1;
- (struct UIEdgeInsets)_sceneSafeAreaInsetsIncludingStatusBar:(_Bool)arg1;
- (long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(_Bool)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (struct UIEdgeInsets)_normalizedSafeAreaInsets;
- (struct UIEdgeInsets)_managedSafeAreaInsets;
- (_Bool)_areOverlayInsetsValid:(struct UIEdgeInsets)arg1;
- (void)_noteOverlayInsetsDidChange;
- (struct UIEdgeInsets)_overlayInsets;
- (void)_removeAllViewControllersFromWindowHierarchy;
- (void)makeKey:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)_orderFrontWithoutMakingKey;
- (void)orderFront:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
@property(nonatomic, setter=_setLegacyOrientationChecks:) _Bool _legacyOrientationChecks;
- (void)setHidden:(_Bool)arg1;
- (void)_setHidden:(_Bool)arg1 forced:(_Bool)arg2;
- (void)addRootViewControllerViewIfPossible;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (unsigned int)_contextId;
- (_Bool)_disableGroupOpacity;
- (_Bool)_ignoresHitTest;
- (void)_updateLayerOrderingAndSetLayerHidden:(_Bool)arg1;
- (_Bool)_hasContext;
- (void)_configureContextOptions:(id)arg1;
- (_Bool)_shouldUseRemoteContext;
- (_Bool)_isVisible;
- (double)_bindableLevel;
- (id)_bindingLayer;
- (id)_contextOptionsWithInitialOptions:(id)arg1;
@property(readonly, nonatomic) CDStruct_3cbf53c3 _bindingDescription;
- (id)_canvas;
- (void)_setCanvas:(id)arg1;
- (void)_updateTransformLayer;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (_Bool)_transformLayerIncludesScreenRotation;
- (_Bool)_windowOwnsInterfaceOrientation;
- (struct CGAffineTransform)_viewTransformForInterfaceOrientation:(long long)arg1;
- (long long)_orientationForClassicPresentation;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (_Bool)_isConstrainedByScreenJail;
- (void)_transformLayerShouldMaskToBounds:(_Bool)arg1;
- (void)_updateTransformLayerSizeForClassicPresentation;
- (void)_updateTransformLayerForClassicPresentation;
- (id)representation;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)_initWithOrientation:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 canvas:(id)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 displayConfiguration:(id)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 scene:(id)arg3 attached:(_Bool)arg4;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2 attached:(_Bool)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 debugName:(id)arg2;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (id)_canvasFromScene:(id)arg1;
- (void)_commonInitDebugName:(id)arg1 canvas:(id)arg2;
- (void)_commonInitAttachedWindow:(_Bool)arg1 debugName:(id)arg2 scene:(id)arg3;
- (id)_associatingSceneLayer;
- (void)_setScene:(id)arg1;
- (id)_scene;
- (_Bool)_wantsSceneAssociation;
- (id)_debugName;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_performTouchContinuationWithOverrideHitTestedView:(id)arg1;
- (id)_aboveWindowScrollView;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation:(_Bool)arg1;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientationIfRotationEnabled:(_Bool)arg1;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation;
- (id)_keyboardSceneSettings;
- (double)_classicOffset;
- (void)matchDeviceOrientation:(id)arg1;
- (void)keyboardDidHide;
- (void)setupForOrientation:(long long)arg1;
- (_Bool)inhibitTextEffectsRotation;
- (_Bool)inhibitManualTransform;
- (_Bool)inhibitSetupOrientation;
- (id)_hostingWindow;
- (void)_matchDeviceOrientation;
- (_Bool)_isTextEffectsWindowNotificationOwner;
- (_Bool)_isTextEffectsWindowHosting;
- (_Bool)_shouldTextEffectsWindowBeHostedForView:(id)arg1;
- (_Bool)_isTextEffectsWindow;
- (id)_hostingHandle;
- (_Bool)_allowsLinkPreviewInteractionInViewServices;
- (_Bool)_isLoweringAnchoringConstraints;
- (void)_setIsLoweringAnchoringConstraints:(_Bool)arg1;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(_Bool)arg2 contentInsetScale:(double)arg3 engine:(id)arg4;
- (void)exerciseAmbiguityInLayout;
- (_Bool)_hasAmbiguousLayout;
- (_Bool)hasAmbiguousLayout;
- (id)_descendantWithAmbiguousLayout;
- (void)_updateConstraintsIfNeededWithViewForVariableChangeNotifications:(id)arg1;
- (id)_redundantConstraints;
- (id)_uiib_candidateRedundantConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (id)_layoutEngineIfAvailable;
- (id)_layoutEngineCreateIfNecessary;
- (void)_initializeLayoutEngine;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint)arg1;
- (void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect)arg1;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (unsigned long long)_expectedWindowInternalConstraintsCount;
- (void)_uiib_invalidateWindowInternalConstraints;
- (void)_invalidateWindowInternalConstraints;
- (void)_updateSystemConstraints;
- (_Bool)_canBecomeLayoutEngineDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

