//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSNumber, NSString;

@interface ACAccount (ICAccountAdditions)
@property(nonatomic, getter=ic_isManagedAppleID, setter=ic_setManagedAppleID:) _Bool ic_managedAppleID;
@property(readonly, nonatomic, getter=ic_isCloudBackupEnabled) _Bool ic_cloudBackupEnabled;
@property(nonatomic, getter=ic_isActiveLockerAccount, setter=ic_setActiveLockerAccount:) _Bool ic_activeLockerAccount;
@property(nonatomic, getter=ic_isSandboxed, setter=ic_setSandboxed:) _Bool ic_sandboxed;
@property(copy, nonatomic, setter=ic_setUniqueIdentifier:) NSNumber *ic_uniqueIdentifier;
@property(copy, nonatomic, setter=ic_setStorefront:) NSString *ic_storefront;
@property(copy, nonatomic, setter=ic_setLastName:) NSString *ic_lastName;
@property(copy, nonatomic, setter=ic_setFirstName:) NSString *ic_firstName;
@property(copy, nonatomic, setter=ic_setAltDSID:) NSString *ic_altDSID;
@property(copy, nonatomic, setter=ic_setDSID:) NSNumber *ic_DSID;
@end

