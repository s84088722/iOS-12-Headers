//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPageController;

@interface AKGeometryHelper : NSObject
{
    AKPageController *_pageController;
}

+ (struct CGRect)_rectForRect:(struct CGRect)arg1 alignToContent:(_Bool)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(struct CGContext *)arg4 usingAnnotation:(id)arg5 withAlignmentBlock:(CDUnknownBlockType)arg6;
+ (struct CGPoint)_alignedPointForPoint:(struct CGPoint)arg1 alignToContent:(_Bool)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(struct CGContext *)arg4 usingAnnotation:(id)arg5;
+ (struct CGRect)_strokeAlignedRectForRect:(struct CGRect)arg1 withStrokeWidth:(double)arg2 shouldAlignStrictlyToScreen:(_Bool)arg3 alignToScreenUsingPageController:(id)arg4 orAlignToBitmapContext:(struct CGContext *)arg5 usingAnnotation:(id)arg6;
+ (struct CGRect)_alignedStableRectForRect:(struct CGRect)arg1 alignToContent:(_Bool)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(struct CGContext *)arg4 usingAnnotation:(id)arg5;
+ (struct CGRect)renderingAlignedTextRectForRect:(struct CGRect)arg1 alignToScreenUsingPageController:(id)arg2 orAlignToContext:(struct CGContext *)arg3 usingAnnotation:(id)arg4;
+ (struct CGRect)renderingStrokeAlignedRectForRect:(struct CGRect)arg1 withStrokeWidth:(double)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToContext:(struct CGContext *)arg4 usingAnnotation:(id)arg5;
+ (struct CGRect)convertRect:(struct CGRect)arg1 fromScreenPointsToView:(id)arg2;
+ (struct CGRect)convertRect:(struct CGRect)arg1 fromViewToScreenPixels:(id)arg2 useNativeScale:(_Bool)arg3;
+ (struct CGRect)boundsOfRotatedRectangle:(struct CGRect)arg1 angle:(double)arg2;
+ (id)_cornersOfRotatedRectangle:(struct CGRect)arg1 angle:(double)arg2;
+ (struct CGAffineTransform)rotationTransformAroundPoint:(struct CGPoint)arg1 withAngle:(double)arg2;
+ (struct CGAffineTransform)rotationTransformForRect:(struct CGRect)arg1 withAngle:(double)arg2;
+ (struct CGAffineTransform)rotationTransformForRectangularAnnotation:(id)arg1 hasRotation:(_Bool *)arg2;
+ (_Bool)annotationHasRotation:(id)arg1 outAngle:(double *)arg2;
+ (struct CGAffineTransform)horizontalFlipTransformForRect:(struct CGRect)arg1;
+ (struct CGAffineTransform)verticalFlipTransformForRect:(struct CGRect)arg1;
+ (struct CGRect)effectiveDrawingBoundsForAnnotation:(id)arg1 forDisplay:(_Bool)arg2 pageControllerOrNil:(id)arg3 outScaleFactor:(double *)arg4;
+ (struct CGRect)expandCGRect:(struct CGRect)arg1 toContainPoint:(struct CGPoint)arg2;
+ (struct CGPoint)compareVectorDirectionsFirstVector:(struct CGPoint)arg1 secondVector:(struct CGPoint)arg2;
+ (struct CGPoint)pointAtAngle:(double)arg1 inCircleWithCenter:(struct CGPoint)arg2 andRadius:(double)arg3;
+ (double)distanceBetweenPoints:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
+ (double)angleBetweenPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
+ (double)angleOfVector:(struct CGVector)arg1;
+ (double)lengthOfVector:(struct CGVector)arg1;
+ (struct CGVector)normalizeVector:(struct CGVector)arg1;
+ (struct CGPoint)normalizeVectorPoint:(struct CGPoint)arg1;
+ (unsigned long long)draggableArea:(unsigned long long)arg1 convertedForExif:(long long)arg2;
+ (_Bool)exifOrientationHasReversedAxes:(long long)arg1;
+ (_Bool)exifOrientationHasFlip:(long long)arg1;
+ (struct CGRect)convertScreenToModelOrientationForRect:(struct CGRect)arg1 withPageController:(id)arg2;
+ (struct CGPoint)convertScreenToModelOrientationForPoint:(struct CGPoint)arg1 relativeToRect:(struct CGRect)arg2 withPageController:(id)arg3;
+ (struct CGRect)convertModelToScreenOrientationForRect:(struct CGRect)arg1 withPageController:(id)arg2;
+ (struct CGPoint)convertModelToScreenOrientationForPoint:(struct CGPoint)arg1 relativeToRect:(struct CGRect)arg2 withPageController:(id)arg3;
+ (struct CGPath *)newPathWithPath:(struct CGPath *)arg1 applyingExifOrientation:(long long)arg2 aboutCenter:(struct CGPoint)arg3;
+ (struct CGRect)adjustRect:(struct CGRect)arg1 forExifOrientation:(long long)arg2 aboutCenter:(struct CGPoint)arg3;
+ (struct CGPoint)adjustPoint:(struct CGPoint)arg1 forExifOrientation:(long long)arg2 aboutCenter:(struct CGPoint)arg3;
+ (void)adjustOriginalExifOrientationOnAnnotation:(id)arg1 flatteningOriginalModelExif:(long long)arg2;
+ (struct CGAffineTransform)affineTransformForExifOrientation:(long long)arg1 aboutCenter:(struct CGPoint)arg2;
+ (struct CGAffineTransform)affineTransformFlatteningOriginalModelExif:(long long)arg1 withOriginalModelSize:(struct CGSize)arg2;
+ (struct CGAffineTransform)affineTransformRecenteringAboutOriginForExifOrientation:(long long)arg1 withOriginalSize:(struct CGSize)arg2;
+ (struct CGAffineTransform)_rawAffineTransformForExifOrientation:(long long)arg1;
+ (long long)concatExifOrientation:(long long)arg1 withExifOrientation:(long long)arg2;
+ (long long)inverseExifOrientation:(long long)arg1;
+ (long long)exifOrientationWithConversionBlock:(CDUnknownBlockType)arg1;
+ (struct CGPoint)flipPointVertically:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
+ (id)verticesOfPolygonWithPointCount:(unsigned long long)arg1 inRect:(struct CGRect)arg2 rotation:(double)arg3 flippedVertically:(_Bool)arg4;
+ (struct CGPoint)tangentOfEllipse:(struct CGRect)arg1 throughRayWithFirstPoint:(struct CGPoint)arg2 goingThrough:(struct CGPoint)arg3;
+ (void)tangentPointsToEllipse:(struct CGRect)arg1 fromPoint:(struct CGPoint)arg2 firstOutPoint:(struct CGPoint *)arg3 secondOutPoint:(struct CGPoint *)arg4;
+ (void)intersectCircleAtPoint:(struct CGPoint)arg1 withRadius:(double)arg2 withCircleAtPoint:(struct CGPoint)arg3 withRadius:(double)arg4 firstOutPoint:(struct CGPoint *)arg5 secondOutPoint:(struct CGPoint *)arg6;
+ (_Bool)isPoint:(struct CGPoint)arg1 onEllipse:(struct CGRect)arg2;
+ (struct CGAffineTransform)centeredCircleToEllipseTransform:(struct CGRect)arg1;
+ (double)radiusOfCenteredCircleFor:(struct CGRect)arg1;
+ (struct CGAffineTransform)ellipseToCenteredCircleTransform:(struct CGRect)arg1;
+ (_Bool)isPointOnLeft:(struct CGPoint)arg1 ofRayWithFirstPoint:(struct CGPoint)arg2 andSecondPoint:(struct CGPoint)arg3;
+ (struct CGPoint)projectPoint:(struct CGPoint)arg1 ontoRayWithFirstPoint:(struct CGPoint)arg2 andSecondPoint:(struct CGPoint)arg3;
+ (struct CGPoint)intersectLineSegmentStartingAt:(struct CGPoint)arg1 ending:(struct CGPoint)arg2 withRect:(struct CGRect)arg3 andRoundedCornerRadius:(double)arg4;
+ (struct CGPoint)_farthestPointFrom:(struct CGPoint)arg1 inArray:(id)arg2;
+ (void)_collectIntersectionsOfLineSegmentStartingAt:(struct CGPoint)arg1 endingAt:(struct CGPoint)arg2 withCornerCirclesOfRoundedRect:(struct CGRect)arg3 withRadius:(double)arg4 results:(id)arg5;
+ (void)_checkIntersectionOfLineSegmentStartingAt:(struct CGPoint)arg1 endingAt:(struct CGPoint)arg2 withCircleAt:(struct CGPoint)arg3 andRadius:(double)arg4 results:(id)arg5;
+ (struct CGPoint)intersectLineSegmentStartingAt:(struct CGPoint)arg1 ending:(struct CGPoint)arg2 withAnotherSegmentStartingAt:(struct CGPoint)arg3 ending:(struct CGPoint)arg4;
+ (struct CGPoint)intersectLineSegmentStartingAt:(struct CGPoint)arg1 ending:(struct CGPoint)arg2 withEllipseOfRect:(struct CGRect)arg3 farthestResult:(_Bool)arg4;
+ (struct CGPoint)intersectRayStartingAt:(struct CGPoint)arg1 ending:(struct CGPoint)arg2 withEllipseOfRect:(struct CGRect)arg3 farthestResult:(_Bool)arg4;
+ (struct CGPoint)intersectLineSegmentStartingAt:(struct CGPoint)arg1 ending:(struct CGPoint)arg2 withCircleWithCenter:(struct CGPoint)arg3 andRadius:(double)arg4 farthestResult:(_Bool)arg5;
+ (struct CGPoint)intersectRayStartingAt:(struct CGPoint)arg1 ending:(struct CGPoint)arg2 withCircleWithCenter:(struct CGPoint)arg3 andRadius:(double)arg4 farthestResult:(_Bool)arg5;
+ (double)scaleOfTransform:(struct CGAffineTransform)arg1;
+ (struct CGPoint)projectVector:(struct CGPoint)arg1 ontoAspectVector:(struct CGPoint)arg2;
+ (struct CGPoint)snapVector:(struct CGPoint)arg1 toDiagonalForAspectRatio:(double)arg2 ignoreWidth:(_Bool)arg3 ignoreHeight:(_Bool)arg4;
+ (struct CGPoint)snapVectorTo45Degrees:(struct CGPoint)arg1;
+ (struct CGRect)constrainRect:(struct CGRect)arg1 withinRect:(struct CGRect)arg2;
+ (struct CGPoint)centerOfRect:(struct CGRect)arg1;
+ (struct CGRect)rectForSize:(struct CGSize)arg1 inRect:(struct CGRect)arg2;
+ (struct CGRect)rectWithSize:(struct CGSize)arg1 centeredAtPoint:(struct CGPoint)arg2;
+ (struct CGRect)stableIntegralRectForRect:(struct CGRect)arg1;
+ (struct CGRect)integralRect:(struct CGRect)arg1 withOptions:(unsigned long long)arg2;
+ (_Bool)isUnpresentablePoint:(struct CGPoint)arg1;
+ (_Bool)isUnpresentableSize:(struct CGSize)arg1;
+ (_Bool)isUnpresentableRect:(struct CGRect)arg1;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void).cxx_destruct;
- (_Bool)_shouldAlignToScreen;
- (_Bool)_shouldAlignToContent;
- (id)_rootLayer;
- (struct CGRect)screenStrokeAlignedRectForRect:(struct CGRect)arg1 withStrokeWidth:(double)arg2;
- (struct CGRect)_smartAlignedRectForRect:(struct CGRect)arg1;
- (struct CGRect)screenPixelAlignedRectForRect:(struct CGRect)arg1;
- (struct CGPoint)screenPixelAlignedPointForPoint:(struct CGPoint)arg1;
- (struct CGRect)contentAlignedRectForRect:(struct CGRect)arg1;
- (struct CGPoint)contentAlignedPointForPoint:(struct CGPoint)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromModelToLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToLayer:(id)arg2;
- (struct CGRect)adornmentLayerFrameForAnnotation:(id)arg1;
- (struct CGRect)_clippingFrameForView:(id)arg1;
- (struct CGRect)annotationLayerFrameForAnnotation:(id)arg1 layerIsClipped:(_Bool *)arg2;
- (id)initWithPageController:(id)arg1;

@end

