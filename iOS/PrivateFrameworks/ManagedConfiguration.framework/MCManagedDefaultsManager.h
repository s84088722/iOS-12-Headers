//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCManagedDefaultsManager : NSObject
{
}

+ (id)sharedManager;
- (void)sendManagedDefaultsChangedNotificationForDomains:(id)arg1;
- (void)removeAllManagedDefaultsFromDomain:(id)arg1;
- (void)removeGlobalPreferenceDefaults:(id)arg1;
- (void)addGlobalPreferenceDefaults:(id)arg1;
- (void)setGlobalPreferencesDefaults:(id)arg1;
- (void)removeDefaults:(id)arg1 fromManagedDomain:(id)arg2;
- (void)addDefaults:(id)arg1 toManagedDomain:(id)arg2;
- (void)setDefaults:(id)arg1 forManagedDomain:(id)arg2;
- (id)managedDefaultsForDomain:(id)arg1;
- (_Bool)domainHasManagedDefaults:(id)arg1;
- (id)managedSystemDefaultsForDomain:(id)arg1;
- (id)managedDefaultsPathForDomain:(id)arg1;

@end

