//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDFill.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSSPreset-Protocol.h>
#import <TSReading/TSSPresetSource-Protocol.h>

@class NSArray, NSMutableArray, NSString, TSUColor;

@interface TSDGradient : TSDFill <TSSPreset, TSSPresetSource, TSDMixing, NSCopying, NSMutableCopying>
{
    NSMutableArray *mStops;
    unsigned long long mType;
    double mOpacity;
    struct CGShading *mShadingRef;
    _Bool mIsAdvancedGradient;
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (id)radialGradientWithGradientStops:(id)arg1;
+ (id)radialGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (id)linearGradientWithGradientStops:(id)arg1;
+ (id)linearGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (void)sortStopsArray:(id)arg1;
+ (_Bool)useQuartzShadings;
+ (_Bool)useInflections;
+ (void)disableInflections;
+ (void)enableInflections;
@property(nonatomic) _Bool isAdvancedGradient; // @synthesize isAdvancedGradient=mIsAdvancedGradient;
@property(nonatomic) double opacity; // @synthesize opacity=mOpacity;
@property(readonly, nonatomic) unsigned long long gradientType; // @synthesize gradientType=mType;
- (void)p_setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)p_setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)p_swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (void)p_moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)p_setGradientType:(unsigned long long)arg1;
- (void)p_evenlyDistributeStops;
- (void)p_reverseStopOrder;
- (id)p_insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (id)p_insertStopAtFraction:(double)arg1;
- (id)p_removeStopAtIndex:(unsigned long long)arg1;
- (void)p_removeStop:(id)arg1;
- (void)p_insertGradientStop:(id)arg1;
- (void)p_setGradientStops:(id)arg1;
- (SEL)mapThemeAssetSelector;
@property(readonly, nonatomic) NSString *presetKind;
- (void)p_endBitmapWrapperContext:(struct CGContext *)arg1 inContext:(struct CGContext *)arg2 withIntegralBounds:(struct CGRect)arg3;
- (struct CGContext *)p_beginBitmapWrapperContextInContext:(struct CGContext *)arg1 returningIntegralBounds:(struct CGRect *)arg2;
- (void)p_setAlpha:(struct CGContext *)arg1;
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (int)fillType;
@property(readonly, nonatomic) _Bool hasAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isOpaque;
- (struct CGAffineTransform)centeredRadialTransformInRect:(struct CGRect)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)colorComponents:(double *)arg1 atFraction:(double)arg2;
- (id)newColorAtFraction:(double)arg1;
- (id)stopAtIndex:(unsigned long long)arg1;
- (id)stopAfterFraction:(double)arg1;
- (id)stopBeforeFraction:(double)arg1;
- (_Bool)isAdvancedGradientIgnoringFlag;
- (void)releaseShadingRef;
@property(readonly, nonatomic) struct CGShading *shadingRef;
- (id)referenceColor;
@property(readonly, nonatomic) TSUColor *lastColor;
@property(readonly, nonatomic) TSUColor *firstColor;
@property(readonly, retain, nonatomic) NSArray *gradientStops;
- (_Bool)isEqualIgnoringTransform:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3;
- (id)init;

@end

