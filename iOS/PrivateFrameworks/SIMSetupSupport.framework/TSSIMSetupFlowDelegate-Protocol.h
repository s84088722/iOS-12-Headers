//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SIMSetupSupport/NSObject-Protocol.h>

@class UIViewController;

@protocol TSSIMSetupFlowDelegate <NSObject>
- (void)viewControllerDidComplete:(UIViewController *)arg1;

@optional
- (void)popViewController:(UIViewController *)arg1;
- (void)receivedResponse;
- (void)waitForResponse:(UIViewController *)arg1;
- (void)userDidTapCancel;
- (long long)signupUserConsentResponse;
- (void)setDefaultNavigationItems:(UIViewController *)arg1;
- (_Bool)isPhoneFlow;
@end

