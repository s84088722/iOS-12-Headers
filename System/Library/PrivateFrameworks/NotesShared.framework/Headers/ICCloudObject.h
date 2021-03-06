/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICCloudObject <NSObject,ICHasDatabaseScope>
@required
+(id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+(id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+(id)newPlaceholderObjectForRecordID:(id)arg1 context:(id)arg2;
+(id)allCloudObjectsInContext:(id)arg1;
-(id)objectID;
-(id)recordType;
-(void)deleteFromLocalDatabase;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(id)loggingDescription;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1;
-(id)userSpecificRecordID;
-(void)didFetchUserSpecificRecord:(id)arg1;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)newlyCreatedRecord;
-(BOOL)needsToSaveUserSpecificRecord;
-(BOOL)wantsUserSpecificRecord;
-(id)newlyCreatedUserSpecificRecord;
-(void)didSaveUserSpecificRecord:(id)arg1;
-(void)didFailToSaveUserSpecificRecord:(id)arg1 error:(id)arg2;
-(void)didDeleteUserSpecificRecordID:(id)arg1;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)objectWillBePushedToCloudWithOperation:(id)arg1;
-(void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
-(void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)objectWasFetchedButDoesNotExistInCloud;
-(void)objectWasFetchedFromCloudWithRecord:(id)arg1;
-(BOOL)needsToBeFetchedFromCloud;
-(BOOL)isValidObject;
-(id)className;
-(id)recordID;

@end

