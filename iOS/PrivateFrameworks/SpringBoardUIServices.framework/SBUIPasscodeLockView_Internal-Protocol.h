//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockView-Protocol.h>

@class NSString, SBUIProudLockContainerViewController;

@protocol SBUIPasscodeLockView_Internal <SBUIPasscodeLockView>
@property(nonatomic) _Bool confirmedNotInPocket;
@property(nonatomic) CDStruct_29b32c11 proudLockConfiguration;
@property(retain, nonatomic) SBUIProudLockContainerViewController *overrideProudLockContainerViewController;
- (void)didEndTransitionToState:(long long)arg1;
- (void)willEndTransitionToState:(long long)arg1;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)beginTransitionToState:(long long)arg1;
- (void)_resumeBiometricMatchingAdvisory:(_Bool)arg1;
- (void)_overrideBiometricMatchingEnabled:(_Bool)arg1 forReason:(NSString *)arg2;

@optional
- (void)_noteAppearingForSmartCoverUnlock:(_Bool)arg1;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(_Bool)arg1;
@end

