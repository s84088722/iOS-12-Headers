//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface GKNoise : NSObject
{
    NSMutableArray *_modules;
    NSDictionary *_gradientColors;
}

+ (id)noiseWithComponentNoises:(id)arg1 selectionNoise:(id)arg2 componentBoundaries:(id)arg3 boundaryBlendDistances:(id)arg4;
+ (id)noiseWithComponentNoises:(id)arg1 selectionNoise:(id)arg2;
+ (id)noiseWithNoiseSource:(id)arg1 gradientColors:(id)arg2;
+ (id)noiseWithNoiseSource:(id)arg1;
@property(copy, nonatomic) NSDictionary *gradientColors; // @synthesize gradientColors=_gradientColors;
- (void).cxx_destruct;
- (void)__blendWithNoise:(id)arg1 selectionNoise:(id)arg2 selectionRangeLowerBound:(double)arg3 selectionRangeUpperBound:(double)arg4 selectionBoundaryBlendDistance:(double)arg5;
- (void)displaceXWithNoise:(id)arg1 yWithNoise:(id)arg2 zWithNoise:(id)arg3;
- (void)raiseToPowerWithNoise:(id)arg1;
- (void)maximumWithNoise:(id)arg1;
- (void)minimumWithNoise:(id)arg1;
- (void)multiplyWithNoise:(id)arg1;
- (void)addWithNoise:(id)arg1;
- (void)rotateBy: /* Error: Ran out of types for this method. */;
- (void)scaleBy: /* Error: Ran out of types for this method. */;
- (void)moveBy: /* Error: Ran out of types for this method. */;
- (void)remapValuesToTerracesWithPeaks:(id)arg1 terracesInverted:(_Bool)arg2;
- (void)remapValuesToCurveWithControlPoints:(id)arg1;
- (void)applyTurbulenceWithFrequency:(double)arg1 power:(double)arg2 roughness:(int)arg3 seed:(int)arg4;
- (void)invert;
- (void)raiseToPower:(double)arg1;
- (void)clampWithLowerBound:(double)arg1 upperBound:(double)arg2;
- (void)applyAbsoluteValue;
- (id)cloneRecursive:(id)arg1;
- (void)cacheQuaternaryModule:(id)arg1 xDisplacementNoise:(id)arg2 yDisplacementNoise:(id)arg3 zDisplacementNoise:(id)arg4;
- (void)cacheTernaryModule:(id)arg1 rhsNoise:(id)arg2 selectionNoise:(id)arg3;
- (void)cacheBinaryModule:(id)arg1 rhsNoise:(id)arg2;
- (void)cacheUnaryModule:(id)arg1;
- (id)__modules;
- (void)dealloc;
- (float)valueAtPosition: /* Error: Ran out of types for this method. */;
- (id)initWithNoiseSource:(id)arg1 gradientColors:(id)arg2;
- (id)initWithNoiseSource:(id)arg1;
- (id)init;

@end

