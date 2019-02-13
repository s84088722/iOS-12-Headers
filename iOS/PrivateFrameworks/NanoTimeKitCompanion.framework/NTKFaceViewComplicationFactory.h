//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, UIColor;

@interface NTKFaceViewComplicationFactory : NSObject
{
    UIColor *_foregroundColor;
    UIColor *_platterColor;
    double _alpha;
    CLKDevice *_device;
    CDUnknownBlockType _foregroundColorProviderBlock;
    CDUnknownBlockType _platterColorProviderBlock;
    CDUnknownBlockType _alphaProviderBlock;
    double _contentSpecificAnimationDuration;
}

+ (void)_genericComplicationAnimationWithDuration:(double)arg1 applier:(CDUnknownBlockType)arg2;
@property(nonatomic) double contentSpecificAnimationDuration; // @synthesize contentSpecificAnimationDuration=_contentSpecificAnimationDuration;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) UIColor *platterColor; // @synthesize platterColor=_platterColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(copy, nonatomic) CDUnknownBlockType alphaProviderBlock; // @synthesize alphaProviderBlock=_alphaProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType platterColorProviderBlock; // @synthesize platterColorProviderBlock=_platterColorProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType foregroundColorProviderBlock; // @synthesize foregroundColorProviderBlock=_foregroundColorProviderBlock;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 attributes:(unsigned long long)arg2 faceView:(id)arg3;
- (void)applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1 faceView:(id)arg2;
- (void)setAlpha:(double)arg1 faceView:(id)arg2;
- (void)setPlatterColor:(id)arg1 faceView:(id)arg2;
- (void)setForegroundColor:(id)arg1 faceView:(id)arg2;
- (void)cleanupAfterEditingForFaceView:(id)arg1;
- (void)prepareForEditingForFaceView:(id)arg1;
- (id)detachedComplicationDisplaysForFaceView:(id)arg1;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (double)keylineCornerRadiusForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (double)minimumBreathingScaleForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (_Bool)fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 faceView:(id)arg3;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 faceView:(id)arg3;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)initForDevice:(id)arg1;

@end

