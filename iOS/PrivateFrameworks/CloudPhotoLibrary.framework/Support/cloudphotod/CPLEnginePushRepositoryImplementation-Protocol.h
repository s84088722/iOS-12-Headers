//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLExtractedBatch, CPLRecordChange, CPLScopeFilter, CPLScopedIdentifier, NSString;
@protocol NSFastEnumeration;

@protocol CPLEnginePushRepositoryImplementation <CPLEngineStorageImplementation>
- (_Bool)isEmpty;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 discardedUploadIdentifiers:(id *)arg4 error:(id *)arg5;
- (_Bool)deleteChangeWithScopedIdentifier:(CPLScopedIdentifier *)arg1 discardedUploadIdentifier:(id *)arg2 error:(id *)arg3;
- (_Bool)deleteChangeWithScopedIdentifier:(CPLScopedIdentifier *)arg1 error:(id *)arg2;
- (id <NSFastEnumeration>)allChangesWithScopeIdentifier:(NSString *)arg1 block:(CPLRecordChange * (^)(CPLRecordChange *))arg2;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(CPLScopedIdentifier *)arg2 block:(CPLRecordChange * (^)(CPLRecordChange *))arg3;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(CPLScopedIdentifier *)arg2 block:(CPLRecordChange * (^)(CPLRecordChange *))arg3;
- (id <NSFastEnumeration>)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2 block:(CPLRecordChange * (^)(CPLRecordChange *))arg3;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2 changeType:(unsigned long long)arg3 block:(CPLRecordChange * (^)(CPLRecordChange *))arg4;
- (id <NSFastEnumeration>)allChangesWithClass:(Class)arg1 scopeIdentifier:(NSString *)arg2 trashed:(_Bool)arg3 block:(CPLRecordChange * (^)(CPLRecordChange *))arg4;
- (CPLRecordChange *)changeWithScopedIdentifier:(CPLScopedIdentifier *)arg1 block:(CPLRecordChange * (^)(CPLRecordChange *))arg2;
- (CPLExtractedBatch *)storedExtractedBatch;
- (_Bool)storeExtractedBatch:(CPLExtractedBatch *)arg1 error:(id *)arg2;
- (_Bool)deleteAllChangesWithError:(id *)arg1;
- (_Bool)hasSomeChangeWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (_Bool)reinjectChange:(CPLRecordChange *)arg1 dequeueOrder:(long long)arg2 discardedUploadIdentifier:(id *)arg3 overwrittenRecord:(_Bool *)arg4 error:(id *)arg5;
- (_Bool)storeChange:(CPLRecordChange *)arg1 uploadIdentifier:(NSString *)arg2 discardedUploadIdentifier:(id *)arg3 error:(id *)arg4;
- (_Bool)hasChangesWithScopeFilter:(CPLScopeFilter *)arg1;
- (_Bool)hasChangesInScopeWithIdentifier:(NSString *)arg1;
- (unsigned long long)countOfChangesInScopeWithIdentifier:(NSString *)arg1;
@end

