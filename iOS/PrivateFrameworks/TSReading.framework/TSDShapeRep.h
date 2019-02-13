//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDStyledRep.h>

#import <TSReading/CALayerDelegate-Protocol.h>
#import <TSReading/TSDMagicMoveMatching-Protocol.h>

@class NSString;

@interface TSDShapeRep : TSDStyledRep <CALayerDelegate, TSDMagicMoveMatching>
{
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    _Bool mFrameInUnscaledCanvasIsValid;
    _Bool mDirectlyManagesLayerContent;
    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
    _Bool mShadowOnChildrenDisabled;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;
@property(nonatomic) _Bool shadowOnChildrenDisabled; // @synthesize shadowOnChildrenDisabled=mShadowOnChildrenDisabled;
- (_Bool)i_editMenuOverlapsEndKnobs;
- (_Bool)shouldShowShadow;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (_Bool)p_drawsSelfInOneStep;
- (_Bool)p_canApplyFillToLayer;
- (_Bool)p_canApplyStrokeToLayer;
- (_Bool)p_pathIsAxisAlignedRect;
- (void)p_endDynamicallyResizingOrMovingLineEnd;
- (void)p_beginDynamicallyResizingOrMovingLineEnd;
- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 andStroke:(id)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(_Bool)arg5;
- (struct CGPoint)centerForGuideLayerPlacement;
- (_Bool)isEditingPath;
- (struct CGAffineTransform)naturalToEditablePathSpaceTransform;
- (id)editablePathSource;
- (_Bool)canMakePathEditable;
- (_Bool)isPathEditable;
- (_Bool)canDrawInParallel;
- (_Bool)isInvisible;
- (void)invalidateEffectLayersForChildren;
- (id)overlayLayers;
- (id)additionalLayersOverLayer;
- (void)updatePositionsOfKnobs:(id)arg1;
- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (_Bool)shouldShowSmartShapeKnobs;
- (_Bool)shouldShowAdvancedGradientKnobs;
- (_Bool)shouldShowAdditionalKnobs;
- (void)addSelectionKnobsToArray:(id)arg1;
- (unsigned long long)enabledKnobMask;
- (_Bool)canBeUsedForImageMask;
- (id)pathSourceForSelectionHighlightBehavior;
- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;
- (_Bool)shouldShowSelectionHighlight;
- (struct CGRect)targetRectForEditMenu;
- (_Bool)isDraggable;
- (void)processChangedProperty:(int)arg1;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;
- (_Bool)shouldExpandHitRegionWhenSmall;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (_Bool)isEditingChildRep;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)p_endApplyOpacity:(struct CGContext *)arg1 apply:(_Bool)arg2;
- (_Bool)p_beginApplyOpacity:(struct CGContext *)arg1 forDrawingInOneStep:(_Bool)arg2;
- (void)willBeRemoved;
- (struct CGRect)clipRect;
- (_Bool)directlyManagesLayerContent;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;
- (struct CGRect)layerFrameInScaledCanvas;
- (struct CGRect)frameInUnscaledCanvas;
- (id)shapeLayout;
- (id)shapeInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

