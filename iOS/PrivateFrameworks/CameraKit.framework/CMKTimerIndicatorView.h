//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CMKAnimationDelegate, UILabel;

@interface CMKTimerIndicatorView : UIView
{
    _Bool __performingStyleAnimation;
    long long _style;
    UIView *__dimmingView;
    UILabel *__countdownLabel;
    long long __startingTicks;
    long long __remainingTicks;
    long long __labelOrientation;
    CMKAnimationDelegate *__animationDelegate;
    long long __deferredLabelOrientation;
}

@property(nonatomic, setter=_setDeferredOrientation:) long long _deferredLabelOrientation; // @synthesize _deferredLabelOrientation=__deferredLabelOrientation;
@property(nonatomic, getter=_isPerformingStyleAnimation, setter=_setPerformingStyleAnimation:) _Bool _performingStyleAnimation; // @synthesize _performingStyleAnimation=__performingStyleAnimation;
@property(readonly, nonatomic) CMKAnimationDelegate *_animationDelegate; // @synthesize _animationDelegate=__animationDelegate;
@property(nonatomic, setter=_setLabelOrientation:) long long _labelOrientation; // @synthesize _labelOrientation=__labelOrientation;
@property(readonly, nonatomic) long long _remainingTicks; // @synthesize _remainingTicks=__remainingTicks;
@property(readonly, nonatomic) long long _startingTicks; // @synthesize _startingTicks=__startingTicks;
@property(readonly, nonatomic) UILabel *_countdownLabel; // @synthesize _countdownLabel=__countdownLabel;
@property(readonly, nonatomic) UIView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_handleOrientationChange:(long long)arg1;
- (void)cam_rotateWithDeviceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_addDimmingAnimationForTick:(long long)arg1;
- (id)_dimmingAnimationForTick:(long long)arg1;
- (void)_transitionDimmingViewFromStyle:(long long)arg1;
- (id)_finalDimmingAnimation;
- (void)_addDecrementAnimationForTick:(long long)arg1;
- (id)_decrementAnimationForTick:(long long)arg1;
- (void)_updateCountdownLabelWithTicksRemaining;
- (void)resetWithNumberOfTicks:(long long)arg1;
- (void)decrement;
- (void)stopCountdown;
- (void)startCountdownWithAnimationDelegate:(id)arg1;
- (void)_updateFromChangeToStyle:(long long)arg1 animated:(_Bool)arg2;
- (id)_fontForStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setFont:(id)arg1;
- (id)font;
- (void)_layoutCountdownLabelForStyle:(long long)arg1;
- (void)_layoutCountdownLabelForLargeStyle;
- (void)_layoutCountdownLabelForSmallStyle;
- (struct CGRect)_landscapeSwapBoundsCoordinates:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKTimerIndicatorViewInitialization;

@end

