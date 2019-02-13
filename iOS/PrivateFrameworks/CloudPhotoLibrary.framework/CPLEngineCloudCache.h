//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>
{
}

- (id)allRecordsIsFinal:(_Bool)arg1;
- (id)recordsOfClass:(Class)arg1 isFinal:(_Bool)arg2;
- (void)getCommittedRecord:(id *)arg1 stagedRecord:(id *)arg2 forScopedIdentifier:(id)arg3;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)discardStagedChangesWithScopeFilter:(id)arg1 error:(id *)arg2;
- (_Bool)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id *)arg3;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(_Bool *)arg2;
- (id)recordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)confirmAllRecordsWithError:(id *)arg1;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(_Bool)arg3 withError:(id *)arg4;
- (_Bool)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id *)arg3;
- (_Bool)applyBatch:(id)arg1 isFinal:(_Bool)arg2 direction:(unsigned long long)arg3 withError:(id *)arg4;
- (_Bool)updateRecord:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addRecord:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)scopeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

