//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DKCKError : NSObject
{
}

+ (id)_allPartialErrorsFromError:(id)arg1;
+ (id)errorMinusUnrecoverableDecryptionErrorsFromPartialError:(id)arg1;
+ (_Bool)isPCSError:(id)arg1;
+ (_Bool)isKeychainSyncingInProgressError:(id)arg1;
+ (_Bool)isNetworkUnavailableError:(id)arg1;
+ (_Bool)isManateeNotAvailableError:(id)arg1;
+ (void)_populateZoneIDs:(id)arg1 fromUnrecoverableDecryptionError:(id)arg2 zoneID:(id)arg3;
+ (id)zoneIDsWithUnrecoverableDecryptionError:(id)arg1;
+ (_Bool)isUnrecoverableDecryptionError:(id)arg1;
+ (_Bool)isPartialError:(id)arg1;
+ (_Bool)isChangeTokenExpiredError:(id)arg1;

@end

