//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateDeleteRecordZonesOperation : FCCKPrivateDatabaseOperation
{
    _Bool _secureDatabaseOnly;
    NSArray *_recordZoneIDsToDelete;
    CDUnknownBlockType _deleteRecordZonesCompletionBlock;
    NSArray *_resultDeletedRecordZoneIDs;
}

@property(retain, nonatomic) NSArray *resultDeletedRecordZoneIDs; // @synthesize resultDeletedRecordZoneIDs=_resultDeletedRecordZoneIDs;
@property(copy, nonatomic) CDUnknownBlockType deleteRecordZonesCompletionBlock; // @synthesize deleteRecordZonesCompletionBlock=_deleteRecordZonesCompletionBlock;
@property(nonatomic) _Bool secureDatabaseOnly; // @synthesize secureDatabaseOnly=_secureDatabaseOnly;
@property(copy, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

