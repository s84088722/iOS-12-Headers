//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@class NSArray, NTKUtilityComplicationFactory, UIColor;

@interface NTKDigitialUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory
{
    NTKUtilityComplicationFactory *_complicationFactory;
    _Bool _usesLegibility;
    NSArray *_supportedComplicationSlots;
    CDUnknownBlockType _shadowColorProviderBlock;
    CDUnknownBlockType _timeTravelYAdjustmentProviderBlock;
    UIColor *_shadowColor;
}

@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(copy, nonatomic) CDUnknownBlockType timeTravelYAdjustmentProviderBlock; // @synthesize timeTravelYAdjustmentProviderBlock=_timeTravelYAdjustmentProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType shadowColorProviderBlock; // @synthesize shadowColorProviderBlock=_shadowColorProviderBlock;
@property(nonatomic) _Bool usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(retain, nonatomic) NSArray *supportedComplicationSlots; // @synthesize supportedComplicationSlots=_supportedComplicationSlots;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (void)setUsesLegibility:(_Bool)arg1 faceView:(id)arg2;
- (void)setShadowColor:(id)arg1 faceView:(id)arg2;
- (void)setForegroundColor:(id)arg1 faceView:(id)arg2;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 attributes:(unsigned long long)arg2 faceView:(id)arg3;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 faceView:(id)arg2;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (void)prepareForEditingForFaceView:(id)arg1;
- (long long)_photosUtilitySlotForSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 attributes:(unsigned long long)arg3 faceView:(id)arg4;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (_Bool)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (double)_timeTravelYAdjustment;
- (id)initForDevice:(id)arg1;

@end
