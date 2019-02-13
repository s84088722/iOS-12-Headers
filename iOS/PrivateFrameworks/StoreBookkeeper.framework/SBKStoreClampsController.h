//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreBookkeeper/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKStoreClampsController : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_transactionClamps;
    double _accountIdentifierCheckTimestamp;
    double _authenticationNeededTimestamp;
    double _userAcceptedSyncTimestamp;
    double _networkingBlockedUntil;
    double _backOffUntil;
    double _userCancelledSignInBackOffUntil;
    double _nextUserCancelBackOffInterval;
    NSData *_pendingUserDefaultArchivedData;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedClampsController;
@property(retain) NSData *pendingUserDefaultArchivedData; // @synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData;
@property double nextUserCancelBackOffInterval; // @synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval;
@property double userCancelledSignInBackOffUntil; // @synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil;
@property double backOffUntil; // @synthesize backOffUntil=_backOffUntil;
@property double networkingBlockedUntil; // @synthesize networkingBlockedUntil=_networkingBlockedUntil;
@property double userAcceptedSyncTimestamp; // @synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp;
@property double authenticationNeededTimestamp; // @synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp;
@property double accountIdentifierCheckTimestamp; // @synthesize accountIdentifierCheckTimestamp=_accountIdentifierCheckTimestamp;
@property(retain) NSDictionary *transactionClamps; // @synthesize transactionClamps=_transactionClamps;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;
- (id)_keyForTransaction:(id)arg1;
- (double)_rightNow;
- (_Bool)isNetworkingBlocked;
- (void)clearNetworkingBlocked;
- (void)setNetworkingBlocked;
- (void)clearBackOff;
- (void)backOffForTimeInterval:(double)arg1;
- (void)clearUserCancelledSignIn;
- (void)setUserCancelledSignIn;
- (_Bool)hasUserRecentlyAcceptedSync;
- (void)clearUserAcceptedSyncTimestamp;
- (void)setUserAcceptedSyncTimestamp;
- (_Bool)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;
- (void)clearAuthenticationRequest;
- (void)setAuthenticationRequest;
- (void)clearAccountIdentifierCheckTimestamp;
- (void)setAccountIdentifierCheckTimestamp;
- (void)clearTimestampForTransaction:(id)arg1;
- (void)setTimestampForTransaction:(id)arg1;
- (void)reset;
- (_Bool)canScheduleTransaction:(id)arg1 error:(id *)arg2;
- (void)accessTransactionClampsWithBlock:(CDUnknownBlockType)arg1;
- (void)saveToUserDefaults;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

