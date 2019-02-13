//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface PKCloudStoreError : NSError
{
}

+ (_Bool)_isCloudKitErrorDomain:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)_allPartialErrors;
- (long long)_code;
- (_Bool)isInitializationTimeOutError;
- (_Bool)isPCSError;
- (_Bool)isKeychainSyncingInProgress;
- (_Bool)isNetworkUnavailable;
- (_Bool)isManateeNotAvailableError;
- (_Bool)isUnrecoverableDecryptionError;
- (_Bool)isPartialError;
- (_Bool)isChangeTokenExpired;
- (id)initWithError:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end

