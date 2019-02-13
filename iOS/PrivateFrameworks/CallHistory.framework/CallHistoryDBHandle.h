//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class CallDBManager, NSManagedObjectContext, NSString;

@interface CallHistoryDBHandle : CHLogger
{
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    CallDBManager *callDBManager;
    NSString *objectId;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

+ (id)createForServer;
+ (id)createForClient;
+ (id)createWithDBManager:(id)arg1;
@property(readonly, nonatomic) CallDBManager *callDBManager; // @synthesize callDBManager;
@property(readonly, nonatomic) NSString *objectId; // @synthesize objectId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)deleteWithPredicate:(id)arg1;
- (_Bool)resetAllTimers;
- (void)resetTimers;
- (_Bool)saveTimers:(CDUnknownBlockType)arg1;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (id)timerIncoming;
- (_Bool)save:(id *)arg1;
- (_Bool)handleSaveForCallRecordContext:(id)arg1 error:(id *)arg2;
- (void)updateCallDBProperties;
- (_Bool)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id *)arg2;
- (void)deleteAll;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (id)createCallRecord;
- (id)fetchAllNoLimit;
- (id)fetchAll;
- (id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(_Bool)arg3;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)postTimersChangedNotification;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (_Bool)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (void)handlePersistentStoreChangedNotification:(id)arg1;
- (void)unRegisterForNotifications;
- (void)registerForNotifications:(id)arg1;
- (id)callRecordContext;
- (id)callDBProperties;
- (id)initWithDBManager:(id)arg1;

@end

