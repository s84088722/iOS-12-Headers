//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppPredictionUI/NSObject-Protocol.h>

@class APUIIntentHandlingViewController, INIntent, INIntentResponse, NSString;

@protocol APUIIntentHandlingViewControllerDelegate <NSObject>
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 didComplete:(_Bool)arg2;
- (void)intentHandlingViewControllerDidFailAuthorizationCheck:(APUIIntentHandlingViewController *)arg1;
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 willContinueInAppForIntent:(INIntent *)arg2 completion:(void (^)(void))arg3;
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 requiresConfirmationWithResponse:(INIntentResponse *)arg2 confirmationActionTitle:(NSString *)arg3;
- (void)intentHandlingViewController:(APUIIntentHandlingViewController *)arg1 wantsPreferredSize:(struct CGSize)arg2;
@end

