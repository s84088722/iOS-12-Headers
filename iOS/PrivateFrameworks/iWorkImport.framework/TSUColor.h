//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>
#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>
#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface TSUColor : NSObject <TSSPropertyValueArchiving, TSSPropertyCommandSerializing, TSSPreset, TSSPresetSource, NSCopying>
{
    struct CGColor *mCGColor;
    unsigned long long mColorRGBSpace;
}

+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)clearColor;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)highContrastBackgroundColorForPreset:(id)arg1;
+ (id)instanceWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (id)p_defaultPresetColors:(int)arg1;
@property(readonly, nonatomic) unsigned long long colorRGBSpace; // @synthesize colorRGBSpace=mColorRGBSpace;
- (id)p_colorForComparingWithColor:(id)arg1;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (_Bool)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2;
@property(readonly, nonatomic) NSString *hexString;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)colorByCompositingSourceOverDestinationColor:(id)arg1;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (_Bool)wantsHighContrastBackgroundForDarkMode:(id)arg1;
- (_Bool)requiresOutlineOnBackgroundWithAppearance:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isNearlyWhite;
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) double luminance;
- (id)colorWithAlphaComponent:(double)arg1;
@property(readonly, nonatomic) TSUColor *invertedColor;
@property(readonly, nonatomic) TSUColor *grayscaleColor;
@property(readonly, nonatomic) UIColor *UIColor;
- (double)brightnessComponent;
- (double)saturationComponent;
- (double)hueComponent;
- (void)getRGBAComponents:(double *)arg1;
@property(readonly, nonatomic) double alphaComponent;
@property(readonly, nonatomic) double blueComponent;
@property(readonly, nonatomic) double greenComponent;
@property(readonly, nonatomic) double redComponent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualWithTolerance:(id)arg1;
- (_Bool)isAlmostEqualToColor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithUIColor:(id)arg1;
- (id)initWithHexString:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1 colorSpace:(unsigned long long)arg2;
@property(readonly) struct CGColor *CGColor;
- (void)saveToMessage:(struct Color *)arg1;
- (id)initWithMessage:(const struct Color *)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Color *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Color *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSString *presetKind;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

