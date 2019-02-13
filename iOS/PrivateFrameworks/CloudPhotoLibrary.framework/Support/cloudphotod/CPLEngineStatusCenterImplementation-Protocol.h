//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLRecordStatus, CPLScopedIdentifier, NSArray;

@protocol CPLEngineStatusCenterImplementation <CPLEngineStorageImplementation>
@property(readonly, nonatomic) _Bool hasStatusChanges;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)discardNotificationForRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 error:(id *)arg2;
- (_Bool)acknowledgeChangedStatus:(CPLRecordStatus *)arg1 hasBeenDeleted:(_Bool *)arg2 error:(id *)arg3;
- (NSArray *)statusChangesMaximumCount:(unsigned long long)arg1;
- (CPLRecordStatus *)statusForRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (_Bool)addStatus:(CPLRecordStatus *)arg1 error:(id *)arg2;
- (_Bool)getNewGeneration:(unsigned long long *)arg1 error:(id *)arg2;
@end

