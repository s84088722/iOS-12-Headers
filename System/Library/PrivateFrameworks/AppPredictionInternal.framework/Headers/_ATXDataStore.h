/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSObject, NSString, _ATXDuetHelper, PETScalarEventTracker, _PASSqliteDatabase;

@interface _ATXDataStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _path;
	unsigned long long _schemaVersion;
	_ATXDuetHelper* _duetHelper;
	PETScalarEventTracker* _dbMigrationTracker;
	_PASSqliteDatabase* _db;
	unsigned long long _actionHistoryLengthPerAppAction;

}

@property (nonatomic,readonly) _PASSqliteDatabase * db;                                       //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) unsigned long long actionHistoryLengthPerAppAction;              //@synthesize actionHistoryLengthPerAppAction=_actionHistoryLengthPerAppAction - In the implementation block
+(id)defaultPath;
+(void)_simulateCrashForMigrationFailure:(id)arg1 ;
+(id)loadDataFromFile:(id)arg1 ;
+(BOOL)pareDownForBackup:(sqlite3Ref)arg1 ;
+(id)sharedInstance;
-(void)migrate;
-(void)_disconnectFromDb;
-(long long)configureDatabase;
-(long long)currentSchemaVersion;
-(id)initWithInMemoryDataStore;
-(id)initWithPath:(id)arg1 andDuetHelper:(id)arg2 ;
-(void)removeFeedbackForBundleId:(id)arg1 ;
-(void)removeAllFeedback;
-(void)removeAllAppActionPredictionFeedbackCounts;
-(void)pruneMessageRecipientsAddedBefore:(id)arg1 ;
-(void)_removeFeedbackForBundleId:(id)arg1 ;
-(void)enumerateStateForApps:(id)arg1 withGlobalBlock:(/*^block*/id)arg2 thenWithPerAppBlock:(/*^block*/id)arg3 readOnly:(BOOL)arg4 ;
-(void)enumerateStateForApps:(id)arg1 withGlobalBlock:(/*^block*/id)arg2 thenWithPerAppBlock:(/*^block*/id)arg3 ;
-(void)enumerateStateForAppsReadOnly:(id)arg1 withGlobalBlock:(/*^block*/id)arg2 thenWithPerAppBlock:(/*^block*/id)arg3 ;
-(void)addAppInstallForBundleId:(id)arg1 date:(id)arg2 genreId:(id)arg3 subGenreIds:(id)arg4 ;
-(void)addAppInstallForBundleId:(id)arg1 date:(id)arg2 genreId:(id)arg3 subGenreIds:(id)arg4 app2VecCluster:(id)arg5 ;
-(void)addAppLaunchForBundleId:(id)arg1 date:(id)arg2 withLaunchType:(long long)arg3 ;
-(void)addAppActionLaunchForAppAction:(id)arg1 date:(id)arg2 ;
-(void)addExtensionLaunchForBundleId:(id)arg1 date:(id)arg2 ;
-(id)appInfoForBundleId:(id)arg1 ;
-(void)removeAppInfoForBundleId:(id)arg1 ;
-(void)removeInfoForAppAction:(id)arg1 ;
-(void)removeAppLaunchesForBundleId:(id)arg1 ;
-(void)clearAppLaunchInfo;
-(void)clearAppInstallInfo;
-(long long)launchedAppCount;
-(id)loadAppInfo;
-(id)loadAppActionInfo;
-(id)lastMessageToRecipient:(id)arg1 ;
-(id)loadTopNAppActionsByPredictions:(unsigned long long)arg1 ;
-(void)writeLaunches:(id)arg1 followingBundle:(id)arg2 ;
-(void)writeAppActionLaunches:(id)arg1 followingAppAction:(id)arg2 ;
-(void)writeAverageSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2 ;
-(void)writeMedianSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2 ;
-(void)writeAverageSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2 ;
-(void)writeMedianSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2 ;
-(void)writeGenreId:(id)arg1 subGenreIds:(id)arg2 forBundleId:(id)arg3 ;
-(void)writeApp2VecCluster:(id)arg1 forBundleId:(id)arg2 ;
-(id)loadLaunchesFollowingBundle:(id)arg1 ;
-(id)loadAppActionLaunchesFollowing:(id)arg1 ;
-(void)deleteLaunchesFollowingBundle:(id)arg1 ;
-(void)deleteLaunchesFollowingAppAction:(id)arg1 ;
-(void)enumerateAppInfoBundlesExecutingBlock:(/*^block*/id)arg1 ;
-(void)enumerateAppInfoAppActionsExecutingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateAppInfoBundlesExecutingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateAppInfoAppActionsExecutingBlock:(/*^block*/id)arg1 ;
-(id)loadAppActionsFromAppActionInfo;
-(id)totalSlotsInDatastore;
-(id)totalNumberOfActionTypesForBundleId:(id)arg1 ;
-(BOOL)containsActionType:(id)arg1 ;
-(id)lastAppActionLaunchDateForAppAction:(id)arg1 ;
-(id)averageSecondsBetweenAppActionsForAppAction:(id)arg1 ;
-(id)medianSecondsBetweenAppActionsForAppAction:(id)arg1 ;
-(id)filenamesAndDataForBackup;
-(void)addAppLaunchForAppLaunchSequence:(id)arg1 date:(id)arg2 ;
-(id)appLaunchSequence;
-(void)addHistogramData:(id)arg1 forHistogramOfType:(long long)arg2 ;
-(id)histogramDataForHistogramType:(long long)arg1 ;
-(void)addCategoricalHistogramData:(id)arg1 forHistogramOfType:(long long)arg2 ;
-(id)categoricalHistogramDataForHistogramType:(long long)arg1 ;
-(id)blobOfType:(long long)arg1 ;
-(void)writeBlob:(id)arg1 type:(long long)arg2 expirationDate:(id)arg3 ;
-(void)writeActionType:(id)arg1 bundleId:(id)arg2 date:(id)arg3 action:(id)arg4 slotSets:(id)arg5 timeZone:(id)arg6 prevLocationUUID:(id)arg7 locationUUID:(id)arg8 weight:(double)arg9 actionUUID:(id)arg10 motionType:(long long)arg11 appSessionStartDate:(id)arg12 appSessionEndDate:(id)arg13 ;
-(PASDBIterAction_)_deserializeActionLogRowWithStmt:(id)arg1 invokingBlock:(/*^block*/id)arg2 ;
-(void)enumerateActionOfType:(id)arg1 bundleId:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)enumerateSlotUuidsOfType:(id)arg1 bundleId:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)enumerateActionsInUUIDSet:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)actionForSlotUUID:(id)arg1 ;
-(void)removeActionDataForActionUUID:(id)arg1 ;
-(BOOL)hasOrphanSlotSetKeys;
-(void)removeActionDataForBundleId:(id)arg1 ;
-(id)actionAndSlotsForRowId:(id)arg1 ;
-(void)regenerateSlotSetKeyForBundleId:(id)arg1 ;
-(void)trimActionHistoryWithAppWhitelist:(id)arg1 ;
-(id)actionLogKeys;
-(void)recordConfirms:(double)arg1 rejects:(double)arg2 forActionType:(id)arg3 bundleId:(id)arg4 action:(id)arg5 slotSet:(id)arg6 actionUUID:(id)arg7 date:(id)arg8 ;
-(void)enumerateFeedbackForActionOfType:(id)arg1 bundleId:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)removeAllSlotsFromActionLog;
-(void)removeAllSlotsFromActionFeedback;
-(void)removeAllSlotsFromSlotSetKey;
-(id)actionFeedbackLogKeys;
-(void)removeActionsWithoutTitle;
-(BOOL)_removeActionsWithoutTitle;
-(BOOL)checkIfInDB:(id)arg1 suggestionType:(long long)arg2 ;
-(void)insertSuggestionResponse:(id)arg1 response:(long long)arg2 timestamp:(long long)arg3 suggestionType:(long long)arg4 ;
-(id)getSuggestionResponsesAsStringInDB;
-(void)resetSuggestionResponses;
-(void)migrateWithMigrationPlan:(id)arg1 ;
-(long long)skipFromZeroSchema;
-(long long)migrateToVersion:(unsigned long long)arg1 withMigrationPlan:(id)arg2 ;
-(long long)runMigrationPlan:(id)arg1 ;
-(void)updateSchemaVersionNumberTo:(long long)arg1 ;
-(void)clearDatabase;
-(long long)migration_LaunchHistoriesToAppTable;
-(long long)migration_InstallDateToAppTable;
-(long long)migration_AppLaunchHistogramToTable;
-(long long)migration_RemoveFeedbackForUninstalledApps;
-(long long)migration_RemoveAllSubsequentLaunches;
-(long long)migration_RemoveRestoreUserDefault;
-(long long)migration_DelinkFromCoreLocationVisitMonitoring;
-(long long)migration_AddExtensionInfo;
-(BOOL)updateOrInsertHistogramData:(id)arg1 forHistogram:(long long)arg2 ;
-(BOOL)updateOrInsertCategoricalHistogramData:(id)arg1 forHistogram:(long long)arg2 ;
-(long long)migration_DeprecateGenericAppIntentModels;
-(long long)migration_PrefillActionHistograms;
-(long long)migration_failForTests;
-(long long)migration_moveCacheFiles;
-(long long)migration_DeprecateIntentForAllAppsHistograms;
-(long long)migration_RemoveActionsWithoutTitle;
-(BOOL)allActionsAndSlots:(id)arg1 success:(long long*)arg2 ;
-(BOOL)writeSlotSetKeyParameters:(id)arg1 rowId:(id)arg2 slotSet:(id)arg3 success:(long long*)arg4 ;
-(long long)updateAlog:(id)arg1 slotsToMigrate:(id)arg2 ;
-(long long)migration_SlotSetKeyCreation;
-(long long)_regenerateSlotSetKeys;
-(long long)migration_SlotSetKeyRegeneration;
-(BOOL)updateOrInsertSubsequentLaunchCountData:(id)arg1 forBundleId:(id)arg2 ;
-(BOOL)updateOrInsertSubsequentAppActionLaunchCountData:(id)arg1 forAppAction:(id)arg2 ;
-(BOOL)updateOrInsertPredictionsAndFeedbackForAppAction:(id)arg1 feedbackReceived:(BOOL)arg2 forUIType:(id)arg3 ;
-(BOOL)updateOrInsertMessageRecipient:(id)arg1 dateMessaged:(id)arg2 ;
-(BOOL)updateOrInsertAverageSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2 ;
-(BOOL)updateOrInsertMedianSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2 ;
-(BOOL)updateOrInsertAverageSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2 ;
-(BOOL)updateOrInsertMedianSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2 ;
-(BOOL)updateOrInsertGenreId:(id)arg1 subGenreIds:(id)arg2 forBundleId:(id)arg3 ;
-(BOOL)updateOrInsertApp2VecCluster:(id)arg1 forBundleId:(id)arg2 ;
-(BOOL)updateOrInsertTimestamp:(long long)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3 isExtension:(BOOL)arg4 ;
-(BOOL)updateOrInsertTimestamp:(long long)arg1 forAppAction:(id)arg2 ;
-(BOOL)updateOrInsertInstallTimestamp:(long long)arg1 genreId:(id)arg2 subGenreIds:(id)arg3 app2VecCluster:(id)arg4 forBundleId:(id)arg5 isExtension:(BOOL)arg6 ;
-(void)_markBundleIdsAsExtension:(id)arg1 ;
-(void)_markBundleIdAsExtension:(id)arg1 ;
-(BOOL)migrationUpdateOrInsertTimestamp:(long long)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3 ;
-(void)migrationPre44WriteActionType:(id)arg1 bundleId:(id)arg2 date:(id)arg3 action:(id)arg4 slotSets:(id)arg5 timeZone:(id)arg6 prevLocationUUID:(id)arg7 locationUUID:(id)arg8 weight:(double)arg9 actionUUID:(id)arg10 motionType:(long long)arg11 ;
-(void)_testMigrate;
-(void)_testMigrateToSchema:(unsigned long long)arg1 ;
-(id)_trimMigrationPlan:(id)arg1 toSchema:(unsigned long long)arg2 ;
-(void)swapInDuetHelperStub:(id)arg1 ;
-(id)_databaseSchema;
-(void)integrityCheckOrAbort;
-(id)deletionHighWaterMark;
-(void)setDeletionHighWaterMark:(id)arg1 ;
-(unsigned long long)actionHistoryLengthPerAppAction;
-(void)setActionHistoryLengthPerAppAction:(unsigned long long)arg1 ;
-(_PASSqliteDatabase *)db;
-(id)init;
-(BOOL)_reset;
@end
