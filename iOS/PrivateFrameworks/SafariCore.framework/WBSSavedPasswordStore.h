//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, WBSAutoFillQuirksManager, WBSKeychainCredentialNotificationMonitor;
@protocol OS_dispatch_queue;

@interface WBSSavedPasswordStore : NSObject
{
    NSMutableDictionary *_domainToUsers;
    NSArray *_savedPasswords;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id _keychainNotificationRegistrationToken;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _hasPasswordsEligibleForAutoFill;
}

+ (void)removePassword:(id)arg1;
+ (id)sharedStore;
@property(readonly, nonatomic) _Bool hasPasswordsEligibleForAutoFill; // @synthesize hasPasswordsEligibleForAutoFill=_hasPasswordsEligibleForAutoFill;
- (void).cxx_destruct;
- (void)_ensureDomainsToUsersExists;
- (void)_cleanUpRedundantCredentialsWithoutUsernames;
- (void)reset;
- (void)_postSavedPasswordStoreDidChangeNotification;
- (id)saveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (_Bool)canSaveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (_Bool)changeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (_Bool)canChangeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (void)removeSite:(id)arg1 fromPassword:(id)arg2;
- (void)removePassword:(id)arg1;
- (void)_removePassword:(id)arg1;
- (id)_savedPasswords;
@property(readonly, nonatomic) NSArray *savedPasswords;
@property(readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;
@property(readonly, nonatomic) NSArray *savedPasswordsExcludingNeverSaveMarkerPasswords;
- (id)_allInternetPasswordEntriesFromKeychain;
- (id)savedPasswordForURL:(id)arg1 user:(id)arg2 password:(id)arg3;
- (void)dealloc;
- (id)initUsingAutoFillQuirksManager:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasDuplicatedPasswords;
- (_Bool)savedPasswordHasReusedPassword:(id)arg1;
- (id)savedPasswordsWithDuplicatedPassword:(id)arg1;

@end

