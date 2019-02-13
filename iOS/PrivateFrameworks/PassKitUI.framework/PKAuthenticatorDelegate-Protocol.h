//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKAuthenticator;

@protocol PKAuthenticatorDelegate <NSObject>

@optional
- (void)dismissPassphraseViewController;
- (void)presentPassphraseViewController:(struct UIViewController *)arg1 completionHandler:(void (^)(_Bool))arg2 reply:(void (^)(NSData *))arg3;
- (struct UIViewController *)passphraseViewController;
- (void)dismissPasscodeViewController;
- (void)presentPasscodeViewController:(struct UIViewController *)arg1 completionHandler:(void (^)(_Bool))arg2 reply:(void (^)(NSData *))arg3;
- (struct UIViewController *)passcodeViewController;
- (void)authenticatorDidDeactivateTouchID:(PKAuthenticator *)arg1 status:(long long)arg2;
- (void)authenticatorDidActivateTouchID:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterBiometricLockout:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterMatchMiss:(PKAuthenticator *)arg1;
- (void)authenticator:(PKAuthenticator *)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticatorDidEncounterFingerOff:(PKAuthenticator *)arg1;
- (void)authenticatorDidEncounterFingerOn:(PKAuthenticator *)arg1;
- (void)authenticator:(PKAuthenticator *)arg1 didTransitionToCoachingState:(long long)arg2;
- (void)authenticator:(PKAuthenticator *)arg1 didTransitionToPearlState:(long long)arg2;
- (void)authenticatorWillRestartEvaluation:(PKAuthenticator *)arg1;
@end

