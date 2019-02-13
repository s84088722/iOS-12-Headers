//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIInteractionProgressObserver-Protocol.h>
#import <UIKitCore/UIViewAnimatingPrivate-Protocol.h>
#import <UIKitCore/UIViewImplicitlyAnimating-Protocol.h>
#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSUUID, UIViewAnimationState, UIViewPropertyAnimatorTrackingState, _UIAppCACommitFuture, _UICompoundObjectMap;
@protocol UITimingCurveProvider;

@interface UIViewPropertyAnimator : NSObject <_UIBasicAnimationFactory, UIInteractionProgressObserver, UIViewAnimatingPrivate, UIViewImplicitlyAnimating, NSCopying>
{
    UIViewPropertyAnimatorTrackingState *_trackingState;
    NSString *_trackingDescription;
    double _fractionComplete;
    double _fractionCompleteWhenContinued;
    double _drag;
    _Bool _running;
    _Bool _reversed;
    _Bool _pausedAsSpring;
    _Bool _optionsAreExplicit;
    _Bool _addedPacingAnimation;
    _Bool _hasFinalized;
    double _baseDuration;
    double _internalDuration;
    double _delay;
    UIViewPropertyAnimator *_outerAnimator;
    NSString *_pacingAnimationKey;
    CAMediaTimingFunction *_timingFunctionPriorToPause;
    CAMediaTimingFunction *_timingFunctionWhenPaused;
    id <UITimingCurveProvider> _timingProviderWhenContinued;
    _UICompoundObjectMap *_originalToValueMap;
    _UICompoundObjectMap *_originalFromValueMap;
    _UICompoundObjectMap *_additiveOffsetsForAnimationKeysMap;
    _UICompoundObjectMap *_continuedWithSpringForAnimationKeyMap;
    _UIAppCACommitFuture *_caContinuationCommitFuture;
    _Bool _useCoreAnimation;
    _Bool _pausesOnCompletion;
    _Bool _userInteractionEnabled;
    _Bool _manualHitTestingEnabled;
    _Bool _interruptible;
    _Bool _scrubsLinearly;
    _Bool _starting;
    _Bool _pausedOnCompletion;
    _Bool _introspectable;
    UIViewAnimationState *_viewAnimationState;
    NSUUID *_trackingIdentifier;
    id <UITimingCurveProvider> _timingParameters;
    long long _animationState;
    NSMutableArray *_animations;
    NSMutableArray *_completions;
    long long _finishingPosition;
    NSMutableDictionary *_animationDescriptionMap;
    unsigned long long _options;
}

+ (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2 forAnimatorWithTrackingIdentifier:(id)arg3;
+ (id)_currentPropertyAnimator;
+ (id)observedsOfAnimatorWithTrackingId:(id)arg1;
+ (void)removeObserved:(id)arg1 forObservingAnimatorWithId:(id)arg2;
+ (void)animator:(id)arg1 isObserving:(id)arg2;
+ (id)_getPropertyAnimationForState:(id)arg1;
+ (id)_propertyAnimatorWithUUID:(id)arg1;
+ (void)_removeReferenceToPropertyAnimatorWithTrackingIdentifier:(id)arg1;
+ (void)_saveReferenceToPropertyAnimator:(id)arg1;
+ (void)_removeReferenceToActivePropertyAnimator:(id)arg1;
+ (void)_saveReferenceToActivePropertyAnimator:(id)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)_removeTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3;
+ (void)_saveTrackingAnimator:(id)arg1 forUUID:(id)arg2 andDescription:(id)arg3;
+ (id)_currentTrackedAnimationsState;
+ (id)_trackAdditiveAnimationWithAnimator:(id)arg1 nonAdditiveAnimation:(id)arg2 withAnimationKey:(id)arg3 forKeyPath:(id)arg4 forLayer:(id)arg5;
+ (id)_trackNonAdditiveAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
+ (id)_trackAnimationWithAnimator:(id)arg1 forLayer:(id)arg2 forAnimationKey:(id)arg3 trackingSetup:(CDUnknownBlockType)arg4;
+ (CDUnknownBlockType)_animationBlockForTrackingAnimation:(id)arg1 animator:(id)arg2 trackingSetup:(CDUnknownBlockType)arg3;
+ (id)_animatorWithTimingAttributesMatchingAnimation:(id)arg1 forLayer:(id)arg2 wasReused:(_Bool *)arg3;
+ (double)_delayForAnimation:(id)arg1 forLayer:(id)arg2;
+ (_Bool)_containsAnimatorForTrackedAnimationsUUID:(id)arg1;
+ (id)_animatorsForTrackedAnimationsUUID:(id)arg1;
+ (id)_performWhileTrackingAnimations:(CDUnknownBlockType)arg1;
+ (id)_animatorForTrackedAnimationsUUID:(id)arg1;
+ (void)_finishTrackingAnimations;
+ (id)_startTrackingAnimations;
+ (void)_setTrackedAnimationsOptimizationsEnabled:(_Bool)arg1;
+ (_Bool)_trackedAnimationsOptimizationsEnabled;
+ (void)_setTrackedAnimationsUserInteractionEnabled:(_Bool)arg1;
+ (_Bool)_trackedAnimationsUserInteractionEnabled;
+ (void)_setTrackedAnimationsScrubLinearly:(_Bool)arg1;
+ (_Bool)_trackedAnimationsScrubLinearly;
+ (void)_setTrackedAnimationsStartPaused:(_Bool)arg1;
+ (_Bool)_trackedAnimationsStartPaused;
+ (_Bool)_trackingAnimationsCurrentlyEnabled;
+ (_Bool)_canEnableTrackingAnimationsWithAnimators;
+ (id)_currentTrackedAnimationsUUID;
+ (id)runningPropertyAnimatorWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic, getter=isIntrospectable) _Bool introspectable; // @synthesize introspectable=_introspectable;
@property(nonatomic, getter=_isPausedOnCompletion, setter=_setPausedOnCompletion:) _Bool pausedOnCompletion; // @synthesize pausedOnCompletion=_pausedOnCompletion;
@property(nonatomic, getter=_isStarting, setter=_setStarting:) _Bool starting; // @synthesize starting=_starting;
@property(nonatomic, getter=_options, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic, getter=_animationDescriptionMap, setter=setAnimationDescriptionMap:) NSMutableDictionary *animationDescriptionMap; // @synthesize animationDescriptionMap=_animationDescriptionMap;
@property(nonatomic, getter=_finishingPosition, setter=_setFinishingPosition:) long long finishingPosition; // @synthesize finishingPosition=_finishingPosition;
@property(retain, nonatomic, getter=_completions, setter=_setCompletions:) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic, getter=_animations, setter=_setAnimations:) NSMutableArray *animations; // @synthesize animations=_animations;
@property(nonatomic, getter=_animationState, setter=_setAnimationState:) long long animationState; // @synthesize animationState=_animationState;
@property(nonatomic) _Bool scrubsLinearly; // @synthesize scrubsLinearly=_scrubsLinearly;
@property(nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
@property(nonatomic, getter=isManualHitTestingEnabled) _Bool manualHitTestingEnabled; // @synthesize manualHitTestingEnabled=_manualHitTestingEnabled;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(copy, nonatomic, setter=_setTimingParameters:) id <UITimingCurveProvider> timingParameters; // @synthesize timingParameters=_timingParameters;
@property(nonatomic) _Bool pausesOnCompletion; // @synthesize pausesOnCompletion=_pausesOnCompletion;
@property(nonatomic, getter=isReversed) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic, getter=_trackingIdentifier, setter=_setTrackingIdentifier:) NSUUID *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;
@property(readonly, nonatomic) _Bool useCoreAnimation; // @synthesize useCoreAnimation=_useCoreAnimation;
@property(nonatomic) double internalDuration; // @synthesize internalDuration=_internalDuration;
- (void).cxx_destruct;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimation;
- (void)startAnimationAsPaused:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setupAnimationTracking:(CDUnknownBlockType)arg1;
@property(nonatomic) double fractionComplete;
@property(nonatomic) double pacedFractionComplete;
- (id)_currentTimingFunction;
- (void)finalizeStoppedAnimationWithPosition:(long long)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (void)_scheduleCACommitFuture;
- (void)continueAnimation;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (void)_continueWithTimingParameters:(id)arg1 duration:(double)arg2;
- (_Bool)_computeSmallestDisplacementFractionComplete:(double *)arg1;
- (_Bool)_computeDisplacementFractionComplete:(id)arg1 withKey:(id)arg2 inLayer:(id)arg3 fromValue:(id)arg4 toValue:(id)arg5 fractionComplete:(double *)arg6 displacement:(double *)arg7;
- (void)_restoreLayerValueIfReversed:(id)arg1 animation:(id)arg2 toValue:(id)arg3;
- (void)pauseAnimation;
- (id)timingFunctionForPause;
- (void)pauseAnimationTransiently;
- (double)_pauseAnimation:(id)arg1;
- (void)_untrackPropertyAnimationsForKeys:(id *)arg1 inLayer:(id)arg2;
- (id)_previousAnimatorForKeyPath:(id)arg1 inLayer:(id)arg2 compoundKeys:(id *)arg3;
- (_Bool)_wasContinuedWithNewSpringForAnimationKey:(id)arg1 forLayer:(id)arg2;
- (_Bool)_setContinuedWithNewSpring:(_Bool)arg1 forAnimationKey:(id)arg2 forLayer:(id)arg3;
- (double)_effectiveAdditiveOffsetForKey:(id)arg1 inLayer:(id)arg2;
- (double)_additiveOffsetForKey:(id)arg1 inLayer:(id)arg2;
- (void)_setAdditiveOffset:(double)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (id)_originalToValueForKey:(id)arg1 inLayer:(id)arg2;
- (void)_setOriginalToValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
- (id)_originalFromValueForKey:(id)arg1 inLayer:(id)arg2;
- (void)_setOriginalFromValue:(id)arg1 forKey:(id)arg2 inLayer:(id)arg3;
@property(readonly, nonatomic) NSArray *animationDescriptions;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)_notePropertyAnimationUpdate:(id)arg1 forView:(id)arg2;
- (id)_newAnimationUpdateForProperty:(id)arg1 implicit:(_Bool)arg2 additive:(_Bool)arg3;
- (id)_explicitAnimationUpdateForProperty:(id)arg1 forView:(id)arg2 withValue:(id)arg3;
- (void)clearAnimationDescriptions;
- (id)_animationDescriptionForView:(id)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1 delayFactor:(double)arg2;
- (void)addAnimations:(CDUnknownBlockType)arg1 delayFactor:(double)arg2 durationFactor:(double)arg3;
@property(readonly, copy) NSString *description;
- (void)finishAnimationAtPosition:(long long)arg1;
- (void)_runCompletions:(long long)arg1 finished:(_Bool)arg2;
- (void)_executeCompletionHandlerWithFinalPosition:(long long)arg1;
- (void)_clearAnimationState;
- (void)dealloc;
- (void)_runAnimations;
@property(readonly, nonatomic) long long state;
- (id)_stateAsString;
- (void)_setKVOCompliantState:(long long)arg1;
- (void)_setKVOCompliantState:(long long)arg1 fromState:(long long)arg2;
- (void)_setKVOCompliantReversed:(_Bool)arg1;
- (void)_setKVOCompliantRunning:(_Bool)arg1;
@property(retain, nonatomic, getter=_viewAnimationState, setter=_setViewAnimationState:) UIViewAnimationState *viewAnimationState; // @synthesize viewAnimationState=_viewAnimationState;
- (void)_setupAssociatedViewAnimationState:(id)arg1;
- (id)animationsDescription;
- (void)_springAnimationForXComponent:(id *)arg1 forYComponent:(id *)arg2;
- (_Bool)_generatePointValueSpringAnimationsForKeyPath:(id)arg1;
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
@property(nonatomic) double unitDuration;
- (double)_drag;
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) double duration;
- (double)_dragAdjustedDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_optionsForNestedLegacyAnimation:(unsigned long long)arg1;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector)arg4 animations:(CDUnknownBlockType)arg5;
- (id)initWithDuration:(double)arg1 dampingRatio:(double)arg2 animations:(CDUnknownBlockType)arg3;
- (id)initWithDuration:(double)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3 animations:(CDUnknownBlockType)arg4;
- (id)initWithDuration:(double)arg1 curve:(long long)arg2 animations:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithDuration:(double)arg1 timingParameters:(id)arg2;
- (_Bool)_addedPacingAnimation;
- (void)_setAddedPacingAnimation:(_Bool)arg1 animationKey:(id)arg2;
- (_Bool)_isActive;
- (_Bool)_pausesOnCompletion;
- (void)_setPausesOnCompletion:(_Bool)arg1;
- (void)_setupWithDuration:(double)arg1 timingParameters:(id)arg2 animations:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

