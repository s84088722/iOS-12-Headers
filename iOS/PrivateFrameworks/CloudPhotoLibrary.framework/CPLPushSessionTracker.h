//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLChangeBatch, CPLEngineScopeStorage, CPLEngineStore, CPLPushChangeTasks, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface CPLPushSessionTracker : NSObject
{
    CPLEngineScopeStorage *_scopes;
    NSMutableSet *_unquarantinedRecordScopedIdentifiers;
    NSMutableDictionary *_incomingBatchRecordPerScopedIdentifiers;
    NSMutableDictionary *_storedClientRecords;
    NSMutableDictionary *_storedCloudRecords;
    NSMutableArray *_addedRecords;
    NSMutableArray *_updatedRecords;
    NSMutableArray *_deletedRecordScopedIdentifiers;
    NSMutableArray *_changesWithResourceChanges;
    NSMutableDictionary *_fullRecords;
    NSMutableDictionary *_resourcesToUpload;
    _Bool _checkScopeIdentifier;
    NSMutableSet *_validScopeIdentifiers;
    NSMutableSet *_invalidScopeIdentifiers;
    _Bool _diffedBatchCanLowerQuota;
    _Bool _expandHasBeenSuccessful;
    _Bool _diffHasBeenSuccessful;
    _Bool _applyHasBeenSuccessful;
    CPLChangeBatch *_incomingBatch;
    CPLEngineStore *_store;
    CPLChangeBatch *_expandedBatch;
    CPLPushChangeTasks *_pushChangeTasks;
    CPLChangeBatch *_diffedBatch;
    unsigned long long _ignoredRecordCount;
    NSDate *_now;
}

@property(readonly, nonatomic) _Bool applyHasBeenSuccessful; // @synthesize applyHasBeenSuccessful=_applyHasBeenSuccessful;
@property(readonly, nonatomic) _Bool diffHasBeenSuccessful; // @synthesize diffHasBeenSuccessful=_diffHasBeenSuccessful;
@property(readonly, nonatomic) _Bool expandHasBeenSuccessful; // @synthesize expandHasBeenSuccessful=_expandHasBeenSuccessful;
@property(copy, nonatomic) NSDate *now; // @synthesize now=_now;
@property(readonly, nonatomic) _Bool diffedBatchCanLowerQuota; // @synthesize diffedBatchCanLowerQuota=_diffedBatchCanLowerQuota;
@property(readonly, nonatomic) unsigned long long ignoredRecordCount; // @synthesize ignoredRecordCount=_ignoredRecordCount;
@property(readonly, nonatomic) CPLChangeBatch *diffedBatch; // @synthesize diffedBatch=_diffedBatch;
@property(readonly, nonatomic) CPLPushChangeTasks *pushChangeTasks; // @synthesize pushChangeTasks=_pushChangeTasks;
@property(readonly, nonatomic) NSSet *unquarantinedRecordScopedIdentifiers; // @synthesize unquarantinedRecordScopedIdentifiers=_unquarantinedRecordScopedIdentifiers;
@property(readonly, nonatomic) CPLChangeBatch *expandedBatch; // @synthesize expandedBatch=_expandedBatch;
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) CPLChangeBatch *incomingBatch; // @synthesize incomingBatch=_incomingBatch;
- (void).cxx_destruct;
- (_Bool)shouldCancelSyncSessionTryingToUploadChange:(id)arg1;
- (_Bool)applyChangesToClientCacheWithError:(id *)arg1;
@property(readonly, nonatomic) NSDictionary *resourcesToUpload;
- (id)deletedRecordIdentifiers;
@property(readonly, nonatomic) NSArray *deletedRecordScopedIdentifiers;
@property(readonly, nonatomic) NSArray *updatedRecords;
@property(readonly, nonatomic) NSArray *addedRecords;
- (void)enumerateDiffWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)computeDiff;
- (_Bool)computeExpandedBatchWithError:(id *)arg1;
- (_Bool)hasCloudRecordWithLocalScopedIdentifier:(id)arg1;
- (id)storedCloudRecordWithLocalScopedIdentifier:(id)arg1;
- (_Bool)hasClientRecordWithLocalScopedIdentifier:(id)arg1;
- (id)storedClientRecordWithLocalScopedIdentifier:(id)arg1;
- (_Bool)checkScopeIdentifier:(id)arg1;
- (id)resourceIdentitiesForRecordWithLocalScopedIdentifier:(id)arg1;
- (id)_resourceIdentitiesFromChange:(id)arg1;
- (_Bool)knowsClientRecordWithScopedIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool hasPushChangeTasks;
- (id)initWithIncomingBatch:(id)arg1 store:(id)arg2 error:(id *)arg3;

@end

