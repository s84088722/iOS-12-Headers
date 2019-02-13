//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSURLCredential, NSURLProtectionSpace, NSURLResponse;
@protocol NSURLAuthenticationChallengeSender;

__attribute__((visibility("hidden")))
@interface NSURLAuthenticationChallengeInternal : NSObject
{
    NSURLProtectionSpace *space;
    NSURLCredential *proposedCredential;
    long long previousFailureCount;
    NSURLResponse *failureResponse;
    NSError *error;
    id <NSURLAuthenticationChallengeSender> sender;
    NSArray *protectionSpacesForChallenge;
    long long preferredProtSpaceIndex;
}

- (void)dealloc;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;

@end

