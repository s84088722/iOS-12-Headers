//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/NSObject-Protocol.h>

@class NSURLAuthenticationChallenge, NSURLCredential;

@protocol NSURLAuthenticationChallengeSender <NSObject>
- (void)cancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1;
- (void)useCredential:(NSURLCredential *)arg1 forAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;

@optional
- (void)rejectProtectionSpaceAndContinueWithChallenge:(NSURLAuthenticationChallenge *)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1;
@end

