//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCNOrderedDictionary;

@interface SCNMorpher : NSObject <SCNAnimatable, NSSecureCoding>
{
    struct __C3DMorph *_morpher;
    unsigned int _isPresentationInstance:1;
    long long _calculationMode;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSArray *_targets;
    NSMutableArray *_weights;
    NSArray *_topLevelAndInBetweenTargets;
    NSArray *_inBetweenCounts;
    NSArray *_inBetweenInfluenceWeights;
    NSDictionary *_targetNameToIndexes;
    NSString *_name;
    _Bool _unifyNormal;
    _Bool _useSparseTargets;
}

+ (Class)SCNUID_classForElementOfArray:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)weightIndexStringForIndex:(long long)arg1;
+ (id)morpher;
+ (id)morpherWithMorphRef:(struct __C3DMorph *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNMorpher:(id)arg1;
- (void)_customEncodingOfSCNMorpher:(id)arg1;
- (void)_customDecodingOfSCNMorpher:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)convertToSparseWithBaseGeometry:(id)arg1;
- (_Bool)_isUsingSparseTargets;
- (void)convertToAdditiveWithBaseGeometry:(id)arg1;
- (void)setWantsCPUMorphing:(_Bool)arg1;
- (_Bool)wantsCPUMorphing;
- (void)setShouldMorphNormals:(_Bool)arg1;
- (_Bool)shouldMorphNormals;
@property _Bool unifiesNormals;
@property(nonatomic) long long calculationMode;
- (void)setTargets:(id)arg1 withInBetweenTargetCounts:(id)arg2 inBetweenWeights:(id)arg3;
- (id)inBetweenWeightsForTargetAtIndex:(unsigned long long)arg1;
- (id)inBetweenTargetsForTargetAtIndex:(unsigned long long)arg1;
- (void)_updateTargetsAndInBetween:(id)arg1;
- (id)targetsAndInBetween;
- (void)setChannelTargetWeights:(id)arg1;
- (void)setChannelTargetCounts:(id)arg1;
- (id)channelTargetWeights;
- (id)channelTargetCounts;
- (double)weightForTargetAtIndex:(unsigned long long)arg1;
- (void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2;
- (double)weightForTargetNamed:(id)arg1;
- (void)setWeight:(double)arg1 forTargetNamed:(id)arg2;
- (long long)_weightIndexForTargetNamed:(id)arg1;
@property(retain, nonatomic) NSArray *weights;
@property(copy, nonatomic) NSArray *targets;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)presentationInstance;
- (id)presentationMorpher;
- (_Bool)isPausedOrPausedByInheritance;
- (void)_syncObjCModel;
- (void)removeAllBindings;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
@property(readonly, copy) NSString *description;
- (struct __C3DMorph *)morphRef;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (void)clearInBetweens;
- (id)initPresentationMorpherWithMorphRef:(struct __C3DMorph *)arg1;
- (id)initWithMorphRef:(struct __C3DMorph *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

