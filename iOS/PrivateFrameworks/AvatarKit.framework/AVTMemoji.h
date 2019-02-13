//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarKit/AVTAvatar.h>

@class AVTColorPreset, AVTComponent, AVTComponentInstance, AVTMemojiSkeleton, AVTPreset, AVTRig, NSDictionary, NSString, SCNMaterial, SCNNode;

@interface AVTMemoji : AVTAvatar
{
    struct UIColor *_lipsColor;
    struct UIColor *_backgroundColor;
    _Bool _ignoreRigsDidChange;
    _Bool _needsUpdate;
    SCNNode *_componentContainer;
    unsigned int _componentDirtyMask;
    SCNNode *_eyelashes;
    SCNNode *_eyesAndMouth;
    SCNMaterial *_eyeMaterial;
    NSDictionary *_eyesAndMouthSpecializationSettings;
    AVTComponent *_components[13];
    AVTRig *_rigs[15];
    NSString *_faceMorphVariants[7];
    AVTPreset *_presets[17];
    AVTPreset *_resolvedPresets[17];
    _Bool _overrideFlags[17];
    AVTColorPreset *_colorPresets[17];
    AVTColorPreset *_secondaryColorPresets[17];
    double _browsThickness;
    double _upperLipThickness;
    double _lowerLipThickness;
    double _eyeRoundness;
    double _noseSharpness;
    double _noseDirection;
    double _hairOrientation;
    double _hairSideLength;
    double _hairTopLength;
    struct CGImage *_combinedSkinImage;
    struct CGImage *_combinedHairImage;
    struct CGImage *_combinedAOImage;
    _Bool _aoValid;
    _Bool _hairPhysicsDisabled;
    NSString *_currentHatVariant;
    struct CGImage *_lipsMaskImage;
    struct CGImage *_mouthInsideImage;
    AVTMemojiSkeleton *_skeleton;
    AVTComponentInstance *_componentInstances[13];
    NSDictionary *_specializationSettings;
}

+ (struct UIColor *)rndColor;
+ (float)rndRange:(float)arg1:(float)arg2;
+ (unsigned long long)rndIndex:(unsigned long long)arg1;
+ (float)rnd;
+ (unsigned char)classIdentifier;
+ (_Bool)supportsSecureCoding;
+ (id)memojiWithData:(id)arg1 error:(id *)arg2;
+ (id)memojiWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)memoji;
+ (id)neutralMemoji;
+ (id)neutralMemojiDataRepresentation;
- (void).cxx_destruct;
- (id)specializationSettings;
- (void)rebuildSpecializationSettings;
- (void)updateRig:(id)arg1 fromBone:(id)arg2 symmetry:(_Bool)arg3 applyRange:(_Bool)arg4;
- (id)bonesForRig:(id)arg1;
- (void)getRigValues:(id)arg1 symmetry:(_Bool)arg2 withBone:(id)arg3 spacingOut:(double *)arg4 elevationOut:(double *)arg5 scaleOut:(double *)arg6 rotationOut:(double *)arg7;
- (struct SCNVector3)absolutePositionForRigElevation:(double)arg1 spacing:(double)arg2 symmetry:(_Bool)arg3;
- (void)updateBonesFromRigs;
- (void)updateBoneForRig:(id)arg1;
- (void)updateHeadMorphVariant;
- (_Bool)_headMayContainsMorphTargetNamed:(id)arg1;
- (void)_update;
- (void)applyVariantDependencies;
- (void)setInstance:(id)arg1 forComponentType:(long long)arg2;
- (void)update;
- (void)_updateAO;
- (void)udpateHighlights;
- (void)updateHighlightsForCategory:(long long)arg1;
- (void)updateEyeLashes;
- (void)updateSkinMaterial:(id)arg1;
- (struct CGImage *)createSkinAO;
- (struct CGImage *)createSkinImage;
- (struct CGImage *)createCombinedHairImage;
- (double)skinTextureSize;
- (void)removeComponentAssetNodeFromParentNode:(id)arg1;
- (void)addComponentAssetNode:(id)arg1 toNode:(id)arg2;
- (void)avatarRigsDidChange:(id)arg1;
- (void)morphTo:(id)arg1;
- (id)presetForCategory:(long long)arg1;
- (void)setPreset:(id)arg1 forCategory:(long long)arg2;
- (void)randomize;
- (void)applyRigConstraints;
- (void)setHairTopLength:(double)arg1;
- (double)hairTopLength;
- (void)setHairSideLength:(double)arg1;
- (double)hairSideLength;
- (void)setHairOrientation:(double)arg1;
- (double)hairOrientation;
- (void)setNoseDirection:(double)arg1;
- (double)noseDirection;
- (void)setNoseSharpness:(double)arg1;
- (double)noseSharpness;
- (void)setEyeRoundness:(double)arg1;
- (double)eyeRoundness;
- (void)setLowerLipThickness:(double)arg1;
- (double)lowerLipThickness;
- (void)setUpperLipThickness:(double)arg1;
- (double)upperLipThickness;
- (void)setBrowsThickness:(double)arg1;
- (double)browsThickness;
- (void)setMorphVariant:(id)arg1 forFacialFeature:(long long)arg2;
- (id)morphVariantForFacialFeature:(long long)arg1;
- (id)morphVariantsForFacialFeature:(long long)arg1;
- (id)_morphVariantsWithComponentType:(long long)arg1 containingName:(id)arg2;
- (id)rigWithType:(long long)arg1;
- (id)rigs;
- (_Bool)usesSkinningForEyeOrientation;
- (void)componentMaterialDidUpdate:(id)arg1;
- (void)componentDidChange:(id)arg1;
- (void)invalidate;
- (void)removeComponentWithType:(long long)arg1;
- (void)_removeComponent:(id)arg1;
- (void)removeComponent:(id)arg1;
- (void)addComponent:(id)arg1;
- (id)componentWithType:(long long)arg1;
- (id)components;
- (id)secondaryColorPresetForCategory:(long long)arg1;
- (void)setSecondaryColorPreset:(id)arg1 forCategory:(long long)arg2;
- (void)_applySecondaryColorPreset:(long long)arg1;
- (id)colorPresetForCategory:(long long)arg1;
- (void)setColorPreset:(id)arg1 forCategory:(long long)arg2;
- (void)_applyColorPreset:(long long)arg1;
- (void)setBackgroundColor:(struct UIColor *)arg1;
- (struct UIColor *)backgroundColor;
- (void)setLipsColor:(struct UIColor *)arg1;
- (struct UIColor *)lipsColor;
- (void)_invalidateAOImage;
- (void)_invalidateHairImage;
- (void)_invalidateSkin;
- (struct UIColor *)facialhairColor;
- (struct UIColor *)eyebrowsColor;
- (struct UIColor *)hairColor;
- (struct UIColor *)skinColor;
- (void)morphVariantForComponentType:(long long)arg1 facialFeature:(long long)arg2 didChangeWithVariantName:(id)arg3;
- (void)updateHeadMorphVariantWithType:(long long)arg1 variant:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_encode:(id)arg1;
- (_Bool)_decode:(id)arg1 error:(id *)arg2;
- (float)arScale;
-     // Error parsing type: 16@0:8, name: arOffset
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)commonInit;
- (void)resetToDefault;
- (void)removeAllComponents;
- (void)dealloc;
- (void)releaseCaches;

@end

