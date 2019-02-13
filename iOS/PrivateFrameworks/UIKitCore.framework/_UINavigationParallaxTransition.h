//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioningEx-Protocol.h>
#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class NSString, NSUUID, UIColor, UIView, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView;
@protocol UIViewControllerContextTransitioning;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx>
{
    NSUUID *_currentRunningAnimationsUUID;
    NSUUID *_currentTrackingAnimatorsAnimationsUUID;
    _Bool _interactionAborted;
    _Bool _clipUnderlapWhileTransitioning;
    _Bool __shouldReverseLayoutDirection;
    long long _operation;
    id <UIViewControllerContextTransitioning> _transitionContext;
    _UINavigationInteractiveTransitionBase *_interactionController;
    _UIParallaxDimmingView *_borderDimmingView;
    _UIParallaxDimmingView *_contentDimmingView;
    UIView *_containerFromView;
    UIView *_containerToView;
    UIView *_clipUnderView;
    long long _transitionStyle;
    double _transitionGap;
    UIColor *_overrideDimmingColor;
}

+ (double)defaultSlidingTransitionDuration;
+ (void)setDefaultSlidingTransitionDuration:(double)arg1;
@property(retain, nonatomic) UIColor *overrideDimmingColor; // @synthesize overrideDimmingColor=_overrideDimmingColor;
@property(nonatomic, setter=_setShouldReverseLayoutDirection:) _Bool _shouldReverseLayoutDirection; // @synthesize _shouldReverseLayoutDirection=__shouldReverseLayoutDirection;
@property(nonatomic) double transitionGap; // @synthesize transitionGap=_transitionGap;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(nonatomic) _Bool clipUnderlapWhileTransitioning; // @synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning;
@property(retain, nonatomic) UIView *clipUnderView; // @synthesize clipUnderView=_clipUnderView;
@property(retain, nonatomic) UIView *containerToView; // @synthesize containerToView=_containerToView;
@property(retain, nonatomic) UIView *containerFromView; // @synthesize containerFromView=_containerFromView;
@property(retain, nonatomic) _UIParallaxDimmingView *contentDimmingView; // @synthesize contentDimmingView=_contentDimmingView;
@property(retain, nonatomic) _UIParallaxDimmingView *borderDimmingView; // @synthesize borderDimmingView=_borderDimmingView;
@property(nonatomic) _UINavigationInteractiveTransitionBase *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) _Bool interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)_stopTransitionImmediately;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)completeKeyboard:(id)arg1;
- (void)animateKeyboard:(id)arg1;
- (void)prepareToAnimateKeyboard:(id)arg1;
- (void)resizeShadow:(id)arg1;
- (id)shadowContainerForKeyboardTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)parallaxOffset;
- (double)gapBetweenViews;
- (void)animationEnded:(_Bool)arg1;
- (double)transitionDuration:(id)arg1;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (id)initWithCurrentOperation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

