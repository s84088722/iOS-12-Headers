//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (HealthKit)
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 format:(id)arg3;
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)hk_invalidProfileError;
+ (id)hk_featureUnavailableForProfileError;
+ (id)hk_protectedDataInaccessibilityError;
+ (id)hk_error:(long long)arg1 format:(id)arg2;
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_error:(long long)arg1 description:(id)arg2;
- (id)hk_errorByAddingEntriesToUserInfo:(id)arg1;
- (id)hk_sanitizedError;
- (id)hk_underlyingErrorWithDomain:(id)arg1;
- (_Bool)hk_isXPCConnectionError;
- (_Bool)hk_isCocoaNoSuchFileError;
- (_Bool)hk_isUserCanceledError;
- (_Bool)hk_isTimeoutError;
- (_Bool)hk_isStreamFailureError;
- (_Bool)hk_isRequiredAuthorizationError;
- (_Bool)hk_isInternalFailureError;
- (_Bool)hk_isInvalidArgumentError;
- (_Bool)hk_isAuthorizationNotDeterminedError;
- (_Bool)hk_isAuthorizationDeniedError;
- (_Bool)hk_isServiceDeviceNotFoundError;
- (_Bool)hk_isDatabaseTransactionError;
- (_Bool)hk_isDatabaseAccessibilityError;
- (_Bool)hk_isHealthKitErrorWithCode:(long long)arg1;
- (_Bool)hk_isHealthKitError;
@end

