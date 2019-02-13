//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID;

@interface MSPReplica : NSObject
{
    NSUUID *_clientIdentifier;
    NSDictionary *_records;
}

+ (void)_switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3;
+ (id)allowedEditClasses;
@property(readonly, nonatomic) NSDictionary *records; // @synthesize records=_records;
@property(readonly, nonatomic) NSUUID *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)tombstoneRecordForRecord:(id)arg1;
- (id)editsToRemoveRecordsWithIdentifiers:(id)arg1;
- (id)editsToInsertOrUpdateRecords:(id)arg1;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)_additionalEditsToUpdateContentsOfRecord:(id)arg1 identifier:(id)arg2;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (id)editsToMergeWithReplica:(id)arg1;
- (id)initWithRecords:(id)arg1 clientIdentifier:(id)arg2;
- (id)init;
- (id)replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(CDUnknownBlockType)arg4 replicaEditApplier:(CDUnknownBlockType)arg5 error:(out id *)arg6;
- (id)_replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(CDUnknownBlockType)arg4 replicaEditApplier:(CDUnknownBlockType)arg5 error:(out id *)arg6;
- (_Bool)_containerSerializationRequiresTrackingPositionEdits;

@end

