//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACSystemConfigManager : NSObject
{
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences *_preferencesSession;
    int _applySkipCount;
}

+ (unsigned long long)_timeoutInterval;
+ (id)_livingInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setValue:(void *)arg1 forKey:(id)arg2;
- (void *)_getValueForKey:(id)arg1;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)arg1;
- (void)_destroySCPreferencesSession;
- (void)_createSCPreferencesSession;
- (void)setCountOfAccounts:(long long)arg1 withAccountTypeIdentifier:(id)arg2;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
- (void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(_Bool)arg2;
- (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
- (void)_tearDown;
- (void)_keepAlive;
- (void)dealloc;
- (id)init;

@end

