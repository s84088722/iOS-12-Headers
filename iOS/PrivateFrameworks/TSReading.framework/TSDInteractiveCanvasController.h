//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCoding-Protocol.h>
#import <TSReading/TSDBackgroundLayoutAndRenderStateDelegate-Protocol.h>
#import <TSReading/TSDCanvasDelegate-Protocol.h>
#import <TSReading/TSDErrorPresenter-Protocol.h>
#import <TSReading/TSDModalOperationPresenter-Protocol.h>
#import <TSReading/TSDRepTrackerDelegateCreation-Protocol.h>
#import <TSReading/TSDTilingLayerDelegate-Protocol.h>
#import <TSReading/TSKChangeSourceObserver-Protocol.h>
#import <TSReading/TSKScrollViewDelegate-Protocol.h>

@class CALayer, NSArray, NSFormatter, NSMutableArray, NSMutableSet, NSRecursiveLock, NSSet, NSString, TSDBackgroundLayoutAndRenderState, TSDCanvas, TSDCanvasAnimation, TSDCanvasLayer, TSDCanvasView, TSDContainerRep, TSDDisplayLinkDispatch, TSDDynamicOperationController, TSDEditorController, TSDGestureDispatcher, TSDGuideController, TSDGuideStorage, TSDLayoutController, TSDTextInputResponder, TSDTileStorage, TSDTrackerManipulatorCoordinator, TSDTrackingController, TSKAccessController, TSKChangeNotifier, TSKDocumentRoot, TSPObjectContext;
@protocol TSDAnnotationHosting, TSDAnnotationPopoverController, TSDCanvasEditor, TSDCanvasLayerHosting, TSDEditor, TSDImageHUDController, TSDInteractiveCanvasControllerDelegate, TSDRepDirectLayerHostProvider, TSDRulerController, TSKDocumentRootProvider;

@interface TSDInteractiveCanvasController : NSObject <TSDCanvasDelegate, TSDErrorPresenter, TSDModalOperationPresenter, TSKChangeSourceObserver, NSCoding, TSKScrollViewDelegate, TSDBackgroundLayoutAndRenderStateDelegate, TSDRepTrackerDelegateCreation, TSDTilingLayerDelegate>
{
    id <TSDInteractiveCanvasControllerDelegate> mDelegate;
    TSDCanvas *mCanvas;
    id <TSDCanvasLayerHosting> mLayerHost;
    struct __CFDictionary *mContainerLayersByRep;
    struct __CFDictionary *mRepLayersByRep;
    struct __CFDictionary *mRepsByRepLayer;
    struct __CFDictionary *mRepsByContainerLayer;
    struct __CFDictionary *mDirectLayerHostsByRep;
    CALayer *mRepContainerLayer;
    TSDEditorController *mEditorController;
    TSDGuideController *mGuideController;
    NSObject<TSDCanvasEditor> *mCanvasEditor;
    _Bool mHasBeenTornDown;
    _Bool mHadLayerHost;
    _Bool mLayerHostHasBeenTornDown;
    TSDTextInputResponder *mTextInputResponder;
    TSDInteractiveCanvasController *mTextInputResponderSource;
    unsigned long long mTextInputResponderShareCount;
    NSFormatter *mUnitFormatter;
    _Bool mResizeCanvasOnLayout;
    _Bool mCreateRepsForOffscreenLayouts;
    _Bool mShouldAutoscrollToSelectionAfterLayout;
    _Bool mSuppressAutozoomToSelectionAfterLayout;
    _Bool mShouldAnimateAutoscroll;
    _Bool mShouldCenterSelectionWhenAutoscrolling;
    CALayer *mOverlayLayer;
    _Bool mOverlayLayerSuppressed;
    CALayer *mPopoutLayer;
    NSMutableArray *mDecorators;
    _Bool mShowGrayOverlay;
    _Bool mInDynamicOperation;
    int mDynamicOperationCounter;
    _Bool mInReadMode;
    _Bool mInVersionBrowsingMode;
    struct CGColor *mSelectionHighlightColor;
    _Bool mShowInvisibleObjects;
    TSDCanvasAnimation *mCurrentAnimation;
    TSDTrackerManipulatorCoordinator *mTMCoordinator;
    TSDDynamicOperationController *mDynOpController;
    NSObject<TSDRulerController> *mRulerController;
    TSDGestureDispatcher *mGestureDispatcher;
    _Bool mInspectorModeEnabled;
    NSMutableArray *mInspectorGestureRecognizersToReenable;
    CDUnknownBlockType mInspectorSingleTapBlock;
    struct CGPoint mLastTapPoint;
    struct CGRect mVisibleBoundsRectForTiling;
    struct CGRect mVisibleUnscaledRect;
    struct CGRect mUnobscuredScrollViewFrame;
    TSDBackgroundLayoutAndRenderState *mBackgroundLayoutAndRenderState;
    _Bool mStaticLayoutAndRenderOnThread;
    _Bool mLayoutAndRenderOnThreadDuringScroll;
    _Bool mNestedCanvasAllowLayoutAndRenderOnThread;
    _Bool mTemporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
    _Bool mCurrentlyScrolling;
    _Bool mAnimatingScroll;
    _Bool mSuppressedAutozoom;
    _Bool mTextGesturesInFlight;
    _Bool _orbTextGesturesInFlight;
    id <TSDEditor> mSelectionChangeNotificationDeferredEditor;
    _Bool mShouldAutoscrollToSelectionAfterGestures;
    _Bool mSuspendedLowPriorityThreadDispatcher;
    _Bool mCurrentlyWaitingOnThreadedLayoutAndRender;
    int mDisableThreadedLayoutAndRender;
    unsigned int mEmbeddedCanvasScrolling;
    NSMutableArray *mHiddenTopLevelLayers;
    _Bool mShouldSuppressRendering;
    _Bool mSupportsBackgroundTileRendering;
    NSMutableSet *mNotificationsToPostWithValidLayouts;
    NSArray *mLayersWithZoomFadeAnimation;
    _Bool mDynamicallyZooming;
    double mDynamicViewScale;
    _Bool mUsesAlternateDrawableSelectionHighlight;
    double mTargetPointSize;
    _Bool mAnimatingViewScale;
    _Bool mSuppressingKeyboard;
    NSObject<TSDImageHUDController> *mImageHUDController;
    long long mImageHUDLock;
    NSObject<TSDImageHUDController> *mIAHUDController;
    long long mIAHUDLock;
    _Bool mIgnoreContentOffsetChanges;
    TSDTileStorage *mTileStorage;
    struct CGPoint mZoomCenterInBounds;
    NSMutableArray *mBackgroundRenderingObjects;
    id <TSDAnnotationHosting> mDisplayedAnnotation;
    id <TSDAnnotationPopoverController> mAnnotationPopoverController;
    _Bool mShouldClipThemeContentToCanvas;
    NSMutableArray *mNextLayoutBlocks;
    _Bool mShowUserDefinedGuides;
    _Bool mTeardownOnBackgroundThread;
    TSDDisplayLinkDispatch *mDisplayLinkDispatch;
    _Bool mRepViewsNeedUpdating;
    NSRecursiveLock *mSelfSync;
    _Bool mPreventSettingNilEditorOnTextResponder;
    _Bool mForceTilingLayoutOnThreadWhenScrolling;
    id <TSDRepDirectLayerHostProvider> _directLayerHostProvider;
    TSDTrackingController *mTrackingController;
    NSSet *mCachedTopLevelTilingLayers;
}

+ (double)smallRepOutsetForHitTesting;
+ (id)keyPathsForValuesAffectingCurrentViewScale;
+ (id)keyPathsForValuesAffectingViewScale;
+ (id)keyPathsForValuesAffectingEditorController;
+ (id)keyPathsForValuesAffectingDocumentRoot;
+ (_Bool)selectorIsActionMethod:(SEL)arg1;
@property(copy) NSSet *p_cachedTopLevelTilingLayers; // @synthesize p_cachedTopLevelTilingLayers=mCachedTopLevelTilingLayers;
@property(nonatomic) _Bool supportsBackgroundTileRendering; // @synthesize supportsBackgroundTileRendering=mSupportsBackgroundTileRendering;
@property(retain, nonatomic) TSDTrackingController *trackingController; // @synthesize trackingController=mTrackingController;
@property(nonatomic) _Bool showInvisibleObjects; // @synthesize showInvisibleObjects=mShowInvisibleObjects;
@property(nonatomic) _Bool inReadMode; // @synthesize inReadMode=mInReadMode;
@property(nonatomic) _Bool inVersionBrowsingMode; // @synthesize inVersionBrowsingMode=mInVersionBrowsingMode;
@property(nonatomic) _Bool showGrayOverlay; // @synthesize showGrayOverlay=mShowGrayOverlay;
@property(nonatomic) _Bool overlayLayerSuppressed; // @synthesize overlayLayerSuppressed=mOverlayLayerSuppressed;
@property(readonly, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=mOverlayLayer;
@property(readonly, nonatomic) CALayer *repContainerLayer; // @synthesize repContainerLayer=mRepContainerLayer;
@property struct CGRect p_visibleUnscaledRect; // @synthesize p_visibleUnscaledRect=mVisibleUnscaledRect;
@property struct CGRect p_visibleBoundsRectForTiling; // @synthesize p_visibleBoundsRectForTiling=mVisibleBoundsRectForTiling;
@property(nonatomic) _Bool shouldClipThemeContentToCanvas; // @synthesize shouldClipThemeContentToCanvas=mShouldClipThemeContentToCanvas;
@property(nonatomic) struct CGRect unobscuredScrollViewFrame; // @synthesize unobscuredScrollViewFrame=mUnobscuredScrollViewFrame;
@property(nonatomic) _Bool suppressAutozoomToSelectionAfterLayout; // @synthesize suppressAutozoomToSelectionAfterLayout=mSuppressAutozoomToSelectionAfterLayout;
@property(nonatomic) _Bool shouldAutoscrollToSelectionAfterLayout; // @synthesize shouldAutoscrollToSelectionAfterLayout=mShouldAutoscrollToSelectionAfterLayout;
@property(readonly, nonatomic) _Bool currentlyWaitingOnThreadedLayoutAndRender; // @synthesize currentlyWaitingOnThreadedLayoutAndRender=mCurrentlyWaitingOnThreadedLayoutAndRender;
@property(nonatomic) _Bool forceTilingLayoutOnThreadWhenScrolling; // @synthesize forceTilingLayoutOnThreadWhenScrolling=mForceTilingLayoutOnThreadWhenScrolling;
@property(nonatomic) _Bool nestedCanvasAllowLayoutAndRenderOnThread; // @synthesize nestedCanvasAllowLayoutAndRenderOnThread=mNestedCanvasAllowLayoutAndRenderOnThread;
@property(nonatomic) _Bool staticLayoutAndRenderOnThread; // @synthesize staticLayoutAndRenderOnThread=mStaticLayoutAndRenderOnThread;
@property(nonatomic) _Bool allowLayoutAndRenderOnThread; // @synthesize allowLayoutAndRenderOnThread=mLayoutAndRenderOnThreadDuringScroll;
@property(nonatomic) _Bool createRepsForOffscreenLayouts; // @synthesize createRepsForOffscreenLayouts=mCreateRepsForOffscreenLayouts;
@property(nonatomic) _Bool preventSettingNilEditorOnTextResponder; // @synthesize preventSettingNilEditorOnTextResponder=mPreventSettingNilEditorOnTextResponder;
@property(readonly, nonatomic) TSDTextInputResponder *textInputResponder; // @synthesize textInputResponder=mTextInputResponder;
@property(retain, nonatomic) NSObject<TSDCanvasEditor> *canvasEditor; // @synthesize canvasEditor=mCanvasEditor;
@property(nonatomic) _Bool resizeCanvasOnLayout; // @synthesize resizeCanvasOnLayout=mResizeCanvasOnLayout;
@property(retain, nonatomic) id <TSDRepDirectLayerHostProvider> directLayerHostProvider; // @synthesize directLayerHostProvider=_directLayerHostProvider;
@property(nonatomic) NSObject<TSDRulerController> *rulerController; // @synthesize rulerController=mRulerController;
@property(nonatomic) _Bool orbTextGesturesInFlight; // @synthesize orbTextGesturesInFlight=_orbTextGesturesInFlight;
@property(nonatomic) _Bool textGesturesInFlight; // @synthesize textGesturesInFlight=mTextGesturesInFlight;
@property(readonly, nonatomic) _Bool animatingViewScale; // @synthesize animatingViewScale=mAnimatingViewScale;
@property(nonatomic) _Bool shouldSuppressRendering; // @synthesize shouldSuppressRendering=mShouldSuppressRendering;
@property(readonly, nonatomic) _Bool inspectorModeEnabled; // @synthesize inspectorModeEnabled=mInspectorModeEnabled;
@property(nonatomic) id <TSDInteractiveCanvasControllerDelegate> delegate; // @synthesize delegate=mDelegate;
@property(readonly, nonatomic) TSDCanvas *canvas; // @synthesize canvas=mCanvas;
@property(nonatomic) struct CGPoint lastTapPoint; // @synthesize lastTapPoint=mLastTapPoint;
@property(nonatomic) id <TSDCanvasLayerHosting> layerHost; // @synthesize layerHost=mLayerHost;
@property(readonly, nonatomic) id canvasReferenceController;
- (id)viewWithTransferredLayers;
- (void)doubleTappedCanvasBackgroundAtPoint:(struct CGPoint)arg1;
- (void)p_applyViewScale:(double)arg1 andContentOffset:(struct CGPoint)arg2;
- (void)animateToViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 duration:(double)arg3 forceAnimation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)animateToViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 duration:(double)arg3;
- (void)i_syncWithLayoutThread;
- (void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(_Bool)arg3 focusRect:(struct CGRect)arg4 scrollImmediately:(_Bool)arg5 skipZoom:(_Bool)arg6;
- (void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(_Bool)arg3 focusRect:(struct CGRect)arg4;
- (struct CGRect)p_outsetSelectionRect:(struct CGRect)arg1;
- (_Bool)p_centerOnInitialSelection;
- (void)p_setTargetPointSize:(double)arg1;
- (double)p_targetPointSize;
- (void)p_editorDoneChangingSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)p_editorDoneChangingSelection:(id)arg1;
- (void)p_editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned long long)arg2;
- (void)p_textGesturesDidEndNotification:(id)arg1;
- (void)p_textGesturesWillBeginNotification:(id)arg1;
- (void)p_guideColorChanged:(id)arg1;
- (void)p_rulerUnitsDidChangeNotification:(id)arg1;
- (void)p_invalidateTilingLayers;
- (void)p_invalidateForBackgroundLayout;
- (void)p_viewScrollingEnded;
- (_Bool)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(_Bool)arg1;
- (_Bool)p_shouldLayoutAndRenderOnThread;
- (_Bool)i_temporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
- (void)enableThreadedLayoutAndRender;
- (void)disableThreadedLayoutAndRender;
- (id)p_backgroundLayoutAndRenderState;
- (_Bool)p_endEditingToBeginEditingRep:(id)arg1;
- (void)i_drawRepWithReadLock:(id)arg1 inContext:(struct CGContext *)arg2 forLayer:(id)arg3;
- (void)p_drawLayerWithReadLock:(id)arg1;
- (id)p_overlayLayerForReps:(id)arg1;
- (void)p_setupPopoutLayerForReps:(id)arg1;
- (void)p_discardLayer:(id)arg1 forRep:(id)arg2;
- (void)p_recursivelyUpdateLayerEdgeAntialiasingForLayer:(id)arg1;
- (void)p_discardContainerLayer:(id)arg1 forRep:(id)arg2;
- (void)p_recursivelyUpdateLayerForRep:(id)arg1 accumulatingLayers:(id)arg2 andReps:(id)arg3;
- (void)p_updateLayersFromReps;
- (void)p_updateViewsFromRepsForceUpdate:(_Bool)arg1;
- (_Bool)p_allowUpdateViewsFromReps;
- (void)p_updateViewsFromReps;
- (void)p_updateCanvasSizeFromLayouts;
- (void)p_postNotificationOnMainThreadWithValidLayouts:(id)arg1;
- (id)i_topLevelLayersForTiling;
- (struct CGRect)i_clippingBoundsForScrollViewEnclosingCanvas;
- (id)i_descriptionForViewScale:(double)arg1;
- (id)i_currentAnimation;
- (_Bool)i_inPrintPreviewMode;
- (id)i_tileStorage;
- (void)i_repNeedsDisplay:(id)arg1 inRect:(struct CGRect)arg2;
- (void)i_repNeedsDisplay:(id)arg1;
- (void)i_recordUserViewScale;
- (void)i_viewScrollingEnded;
- (void)i_viewScrollWillChange;
- (void)i_viewScrollDidChange;
- (double)i_nextCanvasViewScaleDetentForProposedViewScale:(double)arg1 greater:(_Bool)arg2;
- (double)i_adjustViewScale:(double)arg1;
- (struct CGSize)i_canvasCenterOffsetForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (double)i_viewScaleForProposedViewScale:(double)arg1 originalViewScale:(double)arg2;
- (void)i_viewScaleDidChange;
- (void)i_canvasWideGamutValueDidChange;
- (void)i_canvasContentsScaleDidChange;
- (void)viewDidEndZooming;
- (void)i_viewDidZoomToViewScale:(double)arg1;
- (void)i_viewIsZoomingAtPoint:(struct CGPoint)arg1;
- (void)i_viewWillBeginZooming;
- (void)p_layoutWithReadLock;
- (void)i_layout;
- (_Bool)i_needsLayout;
- (void)i_layoutUnregistered:(id)arg1;
- (void)i_layoutRegistered:(id)arg1;
- (void)setAnimationUseRepFiltering:(_Bool)arg1;
- (void)setAnimationFilterBlock:(CDUnknownBlockType)arg1;
- (void)setAnimationCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (void)setAnimationRepeatAutoreverses:(_Bool)arg1;
- (void)setAnimationRepeatCount:(float)arg1;
- (void)setAnimationTimingFunction:(id)arg1;
- (void)setAnimationStartDate:(id)arg1;
- (void)setAnimationDelay:(double)arg1;
- (double)animationBeginTime;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationDidStopSelector:(SEL)arg1;
- (void)setAnimationWillStartSelector:(SEL)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)commitAnimations;
- (void)beginAnimations:(id)arg1 context:(void *)arg2;
- (void)p_maybeSetTextResponderEditorTo:(id)arg1;
- (void)changeFirstResponderIfNecessary;
- (_Bool)canPerformInteractiveAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)shouldResampleImages;
- (void)makeEditorPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)deselectAll:(id)arg1;
- (void)p_acquireLockAndPerformAction:(CDUnknownBlockType)arg1;
- (void)p_willEnterForeground:(id)arg1;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (struct CGPoint)scrollView:(id)arg1 restrictContentOffset:(struct CGPoint)arg2;
- (_Bool)selectionContainsOnlyInfosOnCanvas:(id)arg1 model:(id)arg2;
- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)p_scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollView:(id)arg1 willAnimateToContentOffset:(struct CGPoint)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(id)arg1;
- (_Bool)backgroundLayoutAndRenderState:(id)arg1 shouldDispatchBackgroundWork:(CDUnknownBlockType)arg2;
- (void)backgroundLayoutAndRenderState:(id)arg1 performWorkInBackgroundTilingOnly:(_Bool)arg2;
- (void)didLayoutAndRenderOnThread;
- (id)queueForDrawingTilingLayerInBackground:(id)arg1;
- (_Bool)mustDrawTilingLayerOnMainThread:(id)arg1;
- (void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
- (_Bool)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id *)arg2 andQueue:(id *)arg3;
- (_Bool)canDrawTilingLayerInBackground:(id)arg1;
- (struct CGRect)visibleBoundsForTilingLayer:(id)arg1;
- (_Bool)shouldLayoutTilingLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)gestureTargetStack:(id)arg1;
- (void)tappedCanvasBackgroundAtPoint:(struct CGPoint)arg1;
- (_Bool)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)updateSelectionForTapOnSelectedRep:(id)arg1;
- (void)updateSelectionForTapAtPoint:(struct CGPoint)arg1 extendingSelection:(_Bool)arg2;
- (id)hitRepChromeAtUnscaledPoint:(struct CGPoint)arg1;
@property(readonly, retain, nonatomic) TSDGestureDispatcher *gestureDispatcher;
@property(readonly, retain, nonatomic) TSDTrackerManipulatorCoordinator *tmCoordinator;
@property(readonly, retain, nonatomic) TSDDynamicOperationController *dynamicOperationController;
- (void)p_endZoomingOperation;
- (void)p_beginZoomingOperation;
- (void)endScrollingOperation;
- (void)beginScrollingOperation;
- (void)i_invalidateSelectionHighlightLayers;
@property(nonatomic) _Bool usesAlternateDrawableSelectionHighlight;
- (_Bool)isInInspectorDynamicOperation;
- (void)endPossiblyParallelInspectorDynamicOperation;
- (void)beginPossiblyParallelInspectorDynamicOperation;
- (_Bool)isInDynamicOperation;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (void)actionGhostKnobHitForRep:(id)arg1;
- (void)toggleHyperlinkUIForRep:(id)arg1;
- (_Bool)hasAnnotations;
- (id)annotationController;
- (_Bool)attachedCommentsAllowedForDrawable:(id)arg1;
- (void)invalidateComments;
- (_Bool)shouldDisplayCommentUIForInfo:(id)arg1;
@property(nonatomic) _Bool showsComments;
- (void)showOrHideComments:(id)arg1;
- (id)p_decorators;
- (void)removeDecorator:(id)arg1;
- (void)addDecorator:(id)arg1;
- (void)closeOverlays;
- (_Bool)shouldPopKnobsOutsideEnclosingScrollView;
- (id)actionGhostKnobForRep:(id)arg1;
- (_Bool)shouldShowOnRepHyperlinkUI;
- (int)defaultKnobTypeForRep:(id)arg1;
- (_Bool)shouldShowPathHighlightOnUnselectedInvisibleShapes;
- (_Bool)shouldEverShowPathHighlightOnInvisibleShapes;
@property(readonly, nonatomic) NSArray *additionalLayersOverRepLayers;
@property(readonly, nonatomic) NSArray *additionalLayersUnderRepLayers;
- (void)performBlockAfterNextLayout:(CDUnknownBlockType)arg1;
- (void)layoutIfNeeded;
- (id)layoutForInfoNearestVisibleRect:(id)arg1 intersectingSelection:(id)arg2;
- (id)layoutForInfoNearestVisibleRect:(id)arg1;
- (id)layoutsForInfo:(id)arg1 intersectingSelection:(id)arg2;
- (id)layoutForModel:(id)arg1 withSelection:(id)arg2;
- (id)layoutForInfo:(id)arg1;
- (id)layoutsForModel:(id)arg1 withSelection:(id)arg2;
- (id)layoutsForInfo:(id)arg1;
- (id)validatedLayoutForInfo:(id)arg1;
@property(readonly, nonatomic) TSDLayoutController *layoutController;
- (id)hitKnobAtPoint:(struct CGPoint)arg1 returningRep:(id *)arg2;
- (void)p_recursiveHitKnobAtPoint:(struct CGPoint)arg1 inRep:(id)arg2 minDistance:(double *)arg3 hitKnob:(id *)arg4 hitRep:(id *)arg5;
- (id)hitRepsAtPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)topLevelRepsForHitTesting;
- (id)topLevelRepsForDragSelecting;
@property(readonly, nonatomic) TSDContainerRep *topLevelContainerRepForEditing;
- (void)performBlockNextFrame:(CDUnknownBlockType)arg1;
- (id)ancestorRepOfRep:(id)arg1 orDelegateConformingToProtocol:(id)arg2;
- (id)unitStringForAngle:(double)arg1 andLength:(double)arg2;
- (id)unitStringForAngle:(double)arg1;
- (id)unitStringForNumber:(double)arg1;
- (id)unitStringForSize:(struct CGSize)arg1;
- (id)unitStringForPoint:(struct CGPoint)arg1;
- (id)unitFormatter;
- (struct CGSize)growUnscaledCanvasLayerSize:(struct CGSize)arg1;
- (struct CGSize)convertBoundsToUnscaledSize:(struct CGSize)arg1;
- (struct CGSize)convertUnscaledToBoundsSize:(struct CGSize)arg1;
- (struct CGPoint)convertBoundsToUnscaledPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertUnscaledToBoundsPoint:(struct CGPoint)arg1;
- (struct CGRect)convertBoundsToUnscaledRect:(struct CGRect)arg1;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
- (_Bool)allowNegativeAutoscroll;
- (_Bool)allowAutoscroll;
@property(readonly, nonatomic) struct CGRect visibleUnscaledRectForScrollingAutomatically;
@property(readonly, nonatomic) struct CGRect visibleUnscaledRectForAutoscroll;
@property(readonly, nonatomic) struct CGRect visibleUnscaledRectValidWhileZooming;
- (struct CGRect)p_calculateVisibleUnscaledRect;
@property(readonly, nonatomic) struct CGRect visibleUnscaledRect;
- (struct CGRect)p_calculateVisibleBoundsRectForTiling;
@property(readonly, nonatomic) struct CGRect visibleBoundsRectForTiling;
@property(readonly, nonatomic) struct CGRect visibleBoundsRectClippedToWindow;
- (struct CGRect)p_visibleBoundsRectUsingSizeOfEnclosingScrollView:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect visibleBoundsRectUsingSizeOfEnclosingScrollView;
@property(readonly, nonatomic) struct CGRect visibleBoundsRect;
- (void)discardRepForClassChange:(id)arg1;
- (void)recreateAllLayoutsAndReps;
- (id)repForContainerLayer:(id)arg1;
- (id)repForLayer:(id)arg1;
- (id)containerLayerForRep:(id)arg1;
- (id)layerForRep:(id)arg1;
- (id)repForLayout:(id)arg1;
- (id)p_repForLayout:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)repForInfo:(id)arg1;
- (id)repForInfo:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)repsForInfo:(id)arg1;
- (id)topLevelZOrderedSiblingsOfInfos:(id)arg1;
@property(copy, nonatomic) NSArray *infosToDisplay;
- (id)localizedPercentStringForAlignmentGuide:(id)arg1;
- (id)provideUserDefinedGuides;
- (id)provideDynamicGuides;
- (struct CGRect)boundingRectForActiveGuidesForRect:(struct CGRect)arg1;
- (id)infosForGuides;
@property(readonly, nonatomic) TSDGuideStorage *guideStorage;
- (void)makeUserDefinedGuidesVisible;
- (void)toggleShouldShowUserDefinedGuides;
- (void)forceBackgroundLayout;
- (void)forceStopScrolling;
- (void)embeddedCanvasDidEndScrolling;
- (void)embeddedCanvasWillBeginScrolling;
- (void)popThreadedLayoutAndRenderDisabled;
- (void)pushThreadedLayoutAndRenderDisabled;
@property(nonatomic) _Bool shouldShowUserDefinedGuides;
- (_Bool)shouldShowInstructionalText;
- (_Bool)shouldShowTextOverflowGlyphs;
- (_Bool)isPrinting;
- (_Bool)isCanvasInteractive;
- (_Bool)spellCheckingSuppressed;
- (_Bool)spellCheckingSupported;
@property(readonly, nonatomic) struct CGRect visibleUnscaledRectForCanvasUI;
- (id)replaceImageController;
- (void)hideRuler;
- (void)displayRulerForRect:(struct CGRect)arg1;
- (void)displayRulerWithSlowFade:(_Bool)arg1;
@property(nonatomic) struct CGColor *selectionHighlightColor;
- (struct CGColor *)newDefaultSelectionHighlightColor;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 onLayer:(id)arg2;
- (void)setNeedsDisplayOnLayer:(id)arg1;
@property(readonly, nonatomic) struct CGSize sizeOfScrollViewEnclosingCanvas;
- (_Bool)zoomToFitRect:(struct CGRect)arg1 outset:(_Bool)arg2 fitWidthOnly:(_Bool)arg3 centerHorizontally:(_Bool)arg4 centerVertically:(_Bool)arg5 animated:(_Bool)arg6;
- (double)viewScaleForZoomToFitRect:(struct CGRect)arg1 outset:(_Bool)arg2 fitWidthOnly:(_Bool)arg3;
- (struct CGPoint)contentOffset;
- (void)setContentOffset:(struct CGPoint)arg1 clamp:(_Bool)arg2 animated:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setContentOffset:(struct CGPoint)arg1 clamp:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)scrollRectToVisibleWithSelectionOutset:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)scrollRectToVisibleCenter:(struct CGRect)arg1 animated:(_Bool)arg2 onlyScrollNecessaryAxes:(_Bool)arg3;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)unobscuredFrameDidChange;
- (_Bool)wantsUpdatedScrollIndicatorInsets;
- (struct CGRect)unobscuredFrameOfView:(id)arg1;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 animated:(_Bool)arg3;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect)arg2 maintainPosition:(_Bool)arg3 animated:(_Bool)arg4;
- (struct CGPoint)clampedUnscaledContentOffset:(struct CGPoint)arg1 forViewScale:(double)arg2 scrollViewBoundsSize:(struct CGSize)arg3;
- (struct CGPoint)clampedUnscaledContentOffset:(struct CGPoint)arg1 forViewScale:(double)arg2;
- (void)setViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 clampOffset:(_Bool)arg3 animationDuration:(double)arg4 forceAnimation:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 clampOffset:(_Bool)arg3 animationDuration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setViewScale:(double)arg1 contentOffset:(struct CGPoint)arg2 clampOffset:(_Bool)arg3 animated:(_Bool)arg4;
- (struct CGRect)canvasViewBoundsWithBounds:(struct CGRect)arg1;
- (_Bool)shouldResizeCanvasToScrollView;
@property(readonly, nonatomic) struct CGSize canvasScrollingOutset;
@property(readonly, nonatomic) double fitWidthViewScale;
@property(readonly, nonatomic) double currentViewScale;
@property(nonatomic) double viewScale;
@property(readonly, nonatomic) double defaultViewScale;
@property(readonly, nonatomic) TSDCanvasLayer *canvasLayer;
- (_Bool)canvasViewShouldBecomeFirstResponder:(id)arg1;
@property(readonly, nonatomic) TSDCanvasView *canvasView;
- (void)p_editorControllerSelectionDidChangeAndWantsKeyboard:(id)arg1;
- (void)p_editorControllerSelectionDidChange:(id)arg1;
- (_Bool)p_shouldSuppressAutozoomForEditor:(id)arg1;
- (void)p_editorControllerDidChangeCurrentEditors:(id)arg1;
- (void)p_editorControllerDidChangeTextInputEditor:(id)arg1;
- (void)resumeEditing;
- (void)reuseTextInputResponderFrom:(id)arg1;
- (void)setKeyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges:(_Bool)arg1;
- (_Bool)keyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges;
- (_Bool)p_currentlyScrollingIncludeEmbeddedCanvasScrolling:(_Bool)arg1;
- (_Bool)p_currentlyScrolling;
@property(readonly, nonatomic) _Bool currentlyScrolling;
- (void)setShouldSuppressRendering:(_Bool)arg1 animated:(_Bool)arg2;
- (void)invalidateLayers;
- (void)invalidateVisibleBounds;
- (void)invalidateVisibleBoundsInBackground;
- (void)invalidateLayoutInBackground:(id)arg1;
- (void)invalidateRepsInBackground;
- (void)invalidateRepsIfSynced;
- (void)invalidateReps;
- (void)layoutInvalidated;
- (void)scrollToPrimarySelection;
- (void)scrollToPrimarySelectionForEditor:(id)arg1;
- (void)p_scrollToPrimarySelectionForEditor:(id)arg1 skipZoom:(_Bool)arg2;
- (void)scrollToSelection:(id)arg1 onModel:(id)arg2 scrollImmediately:(_Bool)arg3;
- (void)scrollToSelection:(id)arg1 onModel:(id)arg2;
- (struct CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2;
- (void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)p_scrollModelToVisible:(id)arg1 withSelection:(id)arg2;
- (void)scrollSearchReferenceToVisible:(id)arg1;
- (void)scrollCurrentSelectionToVisible;
- (id)infoToScrollToForModel:(id)arg1 withSelection:(id)arg2;
- (id)infoForModel:(id)arg1 withSelection:(id)arg2;
- (id)p_setSelection:(id)arg1 onInfo:(id)arg2 withFlags:(unsigned long long)arg3;
- (_Bool)shouldZoomOnSelectionChange;
- (void)zoomWithAnimationToUnscaledRect:(struct CGRect)arg1;
- (void)zoomToCurrentSelection;
- (struct CGPoint)smartZoomCenterForNoSelection;
- (_Bool)canZoomToCurrentSelection;
- (void)endEditing;
- (id)beginEditingRep:(id)arg1;
- (id)beginEditingRep:(id)arg1 clearingSelection:(_Bool)arg2 withEditorProvider:(CDUnknownBlockType)arg3;
- (id)beginEditingRepForInfo:(id)arg1;
- (id)newCanvasEditor;
@property(readonly, nonatomic) TSDEditorController *editorController;
- (void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)canvas:(id)arg1 layoutGeometryProviderForLayout:(id)arg2;
- (void)canvas:(id)arg1 createdRep:(id)arg2;
- (void)canvas:(id)arg1 willLayoutRep:(id)arg2;
- (id)additionalVisibleInfosForCanvas:(id)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(id)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(id)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(id)arg1;
- (void)canvasDidLayout:(id)arg1;
- (void)canvasDidValidateLayouts:(id)arg1;
- (void)canvasWillLayout:(id)arg1;
- (void)canvasDidUpdateVisibleBounds:(id)arg1;
- (void)canvasLayoutInvalidated:(id)arg1;
- (_Bool)isPrintingCanvas;
@property(readonly, nonatomic) struct CGSize defaultMinimumUnscaledCanvasSize;
@property(readonly, nonatomic) TSKAccessController *accessController;
@property(readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property(readonly, nonatomic) TSPObjectContext *objectContext;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property(readonly, nonatomic) id <TSKDocumentRootProvider> documentRootProvider;
- (void)removeBackgroundRenderingObject:(id)arg1;
- (void)addBackgroundRenderingObject:(id)arg1;
- (void)teardownBackgroundRendering;
- (void)p_iccWillResignFirstResponderNotification:(id)arg1;
- (void)p_iccWillBecomeFirstResponderNotification:(id)arg1;
- (void)i_cvcWillResignFirstResponder;
- (void)i_cvcWillBecomeFirstResponder;
- (void)i_layerHostHasBeenTornDown;
- (void)p_recursivelyClearLayerDelegate:(id)arg1;
- (void)teardown;
- (void)teardownCanvasEditor;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (void)p_commonInit;
- (void)removeCommonObservers;
- (void)addCommonObservers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (CDStruct_499be82c)contentPlacementForPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGPoint)clampedCenterPointForPoint:(struct CGPoint)arg1 withPlacement:(CDStruct_499be82c)arg2 viewScale:(double)arg3;
- (id)clampedCenterContentLocationForPoint:(struct CGPoint)arg1 withPlacement:(CDStruct_499be82c)arg2 viewScale:(double)arg3;
- (id)convertContentLocation:(id)arg1 fromPlacement:(CDStruct_499be82c)arg2 toPlacement:(CDStruct_499be82c)arg3;
- (id)clampContentLocation:(id)arg1 forPlacement:(CDStruct_499be82c)arg2;
@property(readonly, nonatomic) CDStruct_499be82c centerPlusMovementContentPlacement;
@property(readonly, nonatomic) CDStruct_499be82c touchContentPlacement;
@property(readonly, nonatomic) CDStruct_499be82c screenBottomContentPlacement;
@property(readonly, nonatomic) CDStruct_499be82c screenTopContentPlacement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

