//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PXMemoriesFontsSpec : NSObject
{
    NSDictionary *_titleTextAttributes;
    NSDictionary *_fallbackTitleTextAttributes;
    NSDictionary *_subtitleTextAttributes;
    double _baselineDistance;
    struct UIEdgeInsets _padding;
}

+ (id)_textAttributesForFontName:(id)arg1 fontSize:(double)arg2 lineHeight:(double)arg3 tracking:(double)arg4 stroke:(double)arg5 shadow:(id)arg6 capitalizationStyle:(long long)arg7;
+ (double)_referenceWidthForSpecSet:(long long)arg1 variant:(long long)arg2;
+ (double)_scaleForSpecSet:(long long)arg1 variant:(long long)arg2 width:(double)arg3;
+ (double)_fontScaleForSpecSet:(long long)arg1 variant:(long long)arg2 width:(double)arg3;
+ (struct UIEdgeInsets)_paddingForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 width:(double)arg4;
+ (double)_baselineDistanceForFontSet:(long long)arg1 specSet:(long long)arg2 variant:(long long)arg3 width:(double)arg4;
+ (id)_textAttributesForFontSet:(long long)arg1 specSet:(long long)arg2 labelKind:(long long)arg3 withTitleFontName:(id)arg4 variant:(long long)arg5 width:(double)arg6;
+ (long long)_memoryLabelKindForDescriptor:(struct PXViewSpecDescriptor)arg1;
+ (void)_getSpecSet:(out long long *)arg1 variant:(out long long *)arg2 forDescriptor:(struct PXViewSpecDescriptor)arg3 extendedTraitCollection:(id)arg4;
+ (long long)_fontSetForTitleFontName:(id)arg1;
+ (id)supportedTitleFontNames;
+ (id)_titleFontNameByFontSet;
+ (id)_fontSetByTitleFontName;
+ (id)memoriesFontsSpecForDescriptor:(struct PXViewSpecDescriptor)arg1 extendedTraitCollection:(id)arg2;
+ (id)_fontSpecCache;
+ (void)preloadFontsSpecsForExtendedTraitCollection:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) double baselineDistance; // @synthesize baselineDistance=_baselineDistance;
@property(readonly, nonatomic) NSDictionary *subtitleTextAttributes; // @synthesize subtitleTextAttributes=_subtitleTextAttributes;
@property(readonly, nonatomic) NSDictionary *fallbackTitleTextAttributes; // @synthesize fallbackTitleTextAttributes=_fallbackTitleTextAttributes;
@property(readonly, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(struct PXMemoryFontsSpecIdentifier)arg1 titleFontName:(id)arg2;

@end
