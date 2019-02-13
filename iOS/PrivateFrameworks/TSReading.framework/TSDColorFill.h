//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDFill.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>

@class TSUColor;

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying>
{
    TSUColor *mColor;
}

+ (id)keyPathsForValuesAffectingBrightness;
+ (id)keyPathsForValuesAffectingSaturation;
+ (id)keyPathsForValuesAffectingHue;
+ (id)keyPathsForValuesAffectingLuminance;
+ (id)keyPathsForValuesAffectingOpacity;
+ (id)keyPathsForValuesAffectingCGColor;
+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)clearColor;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithColor:(id)arg1;
@property(readonly, copy, nonatomic) TSUColor *color; // @synthesize color=mColor;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic) double hue;
@property(readonly, nonatomic) double luminance;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (double)p_hsbComponentWithIndex:(unsigned long long)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)referenceColor;
- (SEL)mapThemeAssetSelector;
- (int)fillType;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (_Bool)canApplyToCAShapeLayer;
- (void)applyToCALayer:(id)arg1 withScale:(double)arg2;
- (_Bool)canApplyToCALayer;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)drawsInOneStep;
- (_Bool)isNearlyWhite;
- (_Bool)isClear;
- (_Bool)isOpaque;
- (id)invertedColor;
- (id)grayscaleColor;
- (id)UIColor;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithUIColor:(id)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithColor:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

