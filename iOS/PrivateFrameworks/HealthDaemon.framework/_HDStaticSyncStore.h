//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncStore-Protocol.h>

@class HDProfile, NSString, NSUUID;

@interface _HDStaticSyncStore : NSObject <HDSyncStore>
{
    long long _syncProvenance;
    HDProfile *_profile;
    NSUUID *_storeIdentifier;
}

@property(readonly, copy, nonatomic) NSUUID *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
@property(readonly) long long syncStoreType;
- (id)databaseIdentifier;
- (id)syncStoreIdentifier;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (long long)syncProvenance;
- (long long)syncEpoch;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (_Bool)shouldEnforceSequenceOrdering;
- (_Bool)shouldContinueAfterAnchorValidationError:(id)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (id)orderedSyncEntities;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (_Bool)enforceSyncEntityOrdering;
- (_Bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
@property(readonly) int protocolVersion;
@property(readonly, copy) NSString *description;
- (_Bool)resetReceivedSyncAnchorMapWithError:(id *)arg1;
- (_Bool)replacePersistedAnchorMap:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

