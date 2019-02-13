//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMSQLiteDB;
@protocol OS_dispatch_queue;

@interface MCMCodeSigningMapping : NSObject
{
    NSObject<OS_dispatch_queue> *_codeSignQueue;
    MCMSQLiteDB *_codeSigningMappingDB;
}

+ (id)sharedInstance;
@property(retain, nonatomic) MCMSQLiteDB *codeSigningMappingDB; // @synthesize codeSigningMappingDB=_codeSigningMappingDB;
- (void).cxx_destruct;
- (_Bool)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 withError:(id *)arg2;
- (unsigned long long)invalidateCodeSigningInfoForAppsWithoutBundleContainer;
- (id)entitlementsForIdentifier:(id)arg1;
- (id)getCodeSigningInfoForIdentifier:(id)arg1;
- (unsigned long long)processCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 withOptions:(id)arg3;
- (unsigned long long)processCallerRegisteredEntitlements:(id)arg1 forIdentifier:(id)arg2;
- (id)systemGroupIdentifiersForIdentifier:(id)arg1;
- (id)appGroupIdentifiersForIdentifier:(id)arg1;
- (unsigned long long)dataContainerTypeForIdentifier:(id)arg1;
- (_Bool)identifierHasSystemContainer:(id)arg1;
- (_Bool)identifierHasCallerRegisteredEntitlements:(id)arg1;
- (_Bool)codeSigningInfoExistForIdentifier:(id)arg1;
- (id)codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;
- (id)parentIdentifierForChildIdentifier:(id)arg1;
- (id)childBundleIdentifiersForParentIdentifier:(id)arg1;
- (void)removeCodeSigningDictionariesForIdentifierAndItsChildren:(id)arg1;
- (void)iterateGroupIdsWithKey:(id)arg1 fallBackKey:(id)arg2 forAllIdentifiersUsingBlock:(CDUnknownBlockType)arg3;
- (id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1;
- (id)_onQueue_invalidateCodeSigningInfoForAppsWithoutBundleContainer;
- (unsigned long long)_onQueue_processCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 withOptions:(id)arg3;
- (id)_onQueue_systemGroupIdentifiersForIdentifier:(id)arg1;
- (id)_onQueue_appGroupIdentifiersForIdentifier:(id)arg1;
- (unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)arg1;
- (_Bool)_onQueue_identifierHasSystemContainer:(id)arg1;
- (_Bool)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg1;
- (id)_onQueue_codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;
- (_Bool)_onQueue_codeSigningInfoExistForIdentifier:(id)arg1;
- (id)_onQueue_entitlementsCodeSigningEntry:(id)arg1 identifier:(id)arg2;
- (id)_onQueue_entitlementsForIdentifier:(id)arg1;
- (id)_onQueue_codeSigningInfoForCodeSigningEntry:(id)arg1 identifier:(id)arg2 externalRequest:(_Bool)arg3;
- (id)_onQueue_codeSigningInfoForIdentifier:(id)arg1 externalRequest:(_Bool)arg2;
- (id)_onQueue_parentIdentifierForChildIdentifier:(id)arg1;
- (id)_onQueue_childBundleIdentifiersForParentIdentifier:(id)arg1;
- (void)_onQueue_removeCodeSigningDictionariesForIdentifierAndItsChildren:(id)arg1;
- (id)_copyApplicationGroupEntitlementForIdentifier:(id)arg1 entitlements:(id)arg2 groupKey:(id)arg3;
- (id)_setCodeSigningDictionaryValues:(id)arg1 forIdentifiers:(id)arg2;
- (id)_readCodeSigningMappingFromDiskAtURL:(id)arg1;
- (void)performAllCodeSigningMigrationAndReconciliation;
- (void)_onQueue_reconcileSystemContainers;
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMapping;
- (void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;
- (void)_onQueue_migrateAppGroupIdsFromDataContainersToFile;
- (void)_migrateFromMappingFileToDBIfNecessary;
- (id)init;

@end

