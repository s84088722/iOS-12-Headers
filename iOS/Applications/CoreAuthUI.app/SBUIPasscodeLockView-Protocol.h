//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSAnimationSettings, NSString, UIColor;
@protocol SBFLegibilitySettingsProvider, SBUIPasscodeLockViewDelegate;

@protocol SBUIPasscodeLockView <NSObject>
@property(nonatomic) _Bool proudLockShowsBiometricStates;
@property(nonatomic) double backgroundAlpha;
@property(copy, nonatomic) NSString *unlockDestination;
@property(nonatomic, getter=isScreenOn) _Bool screenOn;
@property(retain, nonatomic) id <SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider;
@property(retain, nonatomic) UIColor *customBackgroundColor;
@property(nonatomic) long long passcodeLockViewState;
@property(nonatomic) _Bool showsProudLock;
@property(nonatomic) _Bool biometricPresentationAncillaryButtonsVisible;
@property(nonatomic) _Bool allowsAutomaticBiometricPresentationTransition;
@property(nonatomic) _Bool usesBiometricPresentation;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) _Bool showsEmergencyCallButton;
@property(nonatomic) _Bool showsStatusField;
@property(nonatomic) _Bool playsKeypadSounds;
@property(nonatomic, getter=isBiometricAuthenticationAllowed) _Bool biometricAuthenticationAllowed;
@property(readonly, nonatomic) NSString *passcode;
@property(readonly, nonatomic) int style;
@property(nonatomic) __weak id <SBUIPasscodeLockViewDelegate> delegate;
- (void)becomeActiveWithAnimationSettings:(BSAnimationSettings *)arg1;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(_Bool)arg1;
- (void)updateStatusText:(NSString *)arg1 subtitle:(NSString *)arg2 animated:(_Bool)arg3;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(void (^)(void))arg1;
- (void)resetForFailedMesaAttemptWithStatusText:(NSString *)arg1 andSubtitle:(NSString *)arg2;
- (void)setPasscodeLockViewState:(long long)arg1 animated:(_Bool)arg2;
- (void)setKeypadVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reset;
- (void)resetForScreenOff;
- (void)resetForSuccessViaPasscode:(_Bool)arg1;
- (void)resetForFailedPasscode;
@end

