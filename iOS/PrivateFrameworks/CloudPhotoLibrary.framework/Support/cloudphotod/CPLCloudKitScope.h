//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class CKRecordZone, CKRecordZoneID, CKReference, NSData;

@interface CPLCloudKitScope : NSObject <NSSecureCoding>
{
    CKReference *_rootRef;
    CKRecordZone *_zone;
    long long _options;
}

+ (id)_libraryStateFromCKRecordsForMomentShare:(id)arg1;
+ (id)_libraryStateFromCKRecordsForLibrary:(id)arg1;
+ (id)_updatedLibraryInfoFromLibraryInfoForMomentShare:(id)arg1 proposedScopeType:(long long *)arg2 fromCKRecords:(id)arg3 cloudKitScope:(id)arg4;
+ (id)_updatedLibraryInfoFromLibraryInfoForLibrary:(id)arg1 proposedScopeType:(long long *)arg2 fromCKRecords:(id)arg3 cloudKitScope:(id)arg4;
+ (id)_rootRecordNameForScopeType:(long long)arg1;
+ (id)_libraryStateFromCKRecords:(id)arg1 scopeType:(long long)arg2;
+ (id)libraryInfoAndState:(id *)arg1 proposedScopeType:(long long *)arg2 fromCKRecords:(id)arg3 cloudKitScope:(id)arg4;
+ (id)allRecordNamesForLibraryInfoAndState;
+ (id)_recordNamesForScopeType:(long long)arg1;
+ (id)scopeFromTransportScope:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
- (void).cxx_destruct;
- (id)updatedLibraryInfoFromLibraryInfo:(id)arg1 ckRecord:(id)arg2 scope:(id)arg3;
- (id)libraryStateFromCKRecord:(id)arg1 scope:(id)arg2;
- (id)libraryStateFromCKRecords:(id)arg1 scope:(id)arg2;
- (id)libraryInfoFromCKRecords:(id)arg1 scope:(id)arg2;
- (id)_updatedLibraryInfoFromLibraryInfo:(id)arg1 fromCKRecords:(id)arg2 scope:(id)arg3;
- (id)recordsToUpdateFromLibraryInfo:(id)arg1 inScope:(id)arg2;
- (id)shareRecordNameToDeleteInScope:(id)arg1;
- (_Bool)supportsZoneDeleteInScope:(id)arg1;
- (id)recordNamesForLibraryInfoAndStateInScope:(id)arg1;
- (_Bool)supportsDeletionOfRecord:(id)arg1 inScope:(id)arg2;
- (_Bool)supportsDirectDeletionOfRecord:(id)arg1 inScope:(id)arg2;
- (id)rootRecordNameForScope:(id)arg1;
- (void)setupRootOnRecord:(id)arg1 scope:(id)arg2;
- (id)recordIDForIdentifier:(id)arg1;
- (id)_rootRefForScope:(id)arg1;
@property(readonly, nonatomic, getter=isShared) _Bool shared;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;
@property(readonly, nonatomic) NSData *transportScope;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1 options:(long long)arg2;
- (id)initWithZone:(id)arg1 options:(long long)arg2;

@end

