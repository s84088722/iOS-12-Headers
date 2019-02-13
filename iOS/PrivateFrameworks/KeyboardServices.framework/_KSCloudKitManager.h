//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKRecordZone, NSString, _KSRequestThrottle;
@protocol OS_dispatch_queue, _KSCloudKitManagerDelegate;

@interface _KSCloudKitManager : NSObject
{
    NSObject<OS_dispatch_queue> *_ckWorkQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _KSRequestThrottle *_accountChangeThrottle;
    _KSRequestThrottle *_fetchZoneThrottle;
    _Bool _recordZoneOperationInProgress;
    _Bool _subscriptionOperationInProgress;
    CKRecordZone *_recordZone;
    id <_KSCloudKitManagerDelegate> _delegate;
    CKContainer *_cloudKitContainer;
    CKDatabase *_cloudKitDatabase;
    CKDatabase *_publicDatabase;
    NSString *_recordZoneKey;
    NSString *_subscriptionKey;
    NSString *_lastKnownUserKey;
}

+ (id)prepareContainerForID:(id)arg1;
@property(nonatomic) _Bool subscriptionOperationInProgress; // @synthesize subscriptionOperationInProgress=_subscriptionOperationInProgress;
@property(nonatomic) _Bool recordZoneOperationInProgress; // @synthesize recordZoneOperationInProgress=_recordZoneOperationInProgress;
@property(readonly, nonatomic) NSString *lastKnownUserKey; // @synthesize lastKnownUserKey=_lastKnownUserKey;
@property(readonly, nonatomic) NSString *subscriptionKey; // @synthesize subscriptionKey=_subscriptionKey;
@property(readonly, nonatomic) NSString *recordZoneKey; // @synthesize recordZoneKey=_recordZoneKey;
@property(retain, nonatomic) CKDatabase *publicDatabase; // @synthesize publicDatabase=_publicDatabase;
@property(retain, nonatomic) CKDatabase *cloudKitDatabase; // @synthesize cloudKitDatabase=_cloudKitDatabase;
@property(retain, nonatomic) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property(nonatomic) __weak id <_KSCloudKitManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKRecordZone *recordZone; // @synthesize recordZone=_recordZone;
- (void).cxx_destruct;
- (void)_ckDeleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_ckSaveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_ckFetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_inconvenientOperation:(id)arg1;
- (void)fetchPublicRecordsWithNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_submitFetchRecordsOperation:(id)arg1 withPriority:(unsigned long long)arg2 changeToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 retryCount:(unsigned long long)arg5;
- (void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 retryCount:(unsigned long long)arg4;
- (void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)copyFieldsFromRecord:(id)arg1 toRecord:(id)arg2;
- (id)resolveConflicts:(id)arg1;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4 retryCount:(unsigned long long)arg5;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setupSubscription;
- (void)addOperation:(id)arg1 priority:(unsigned long long)arg2;
- (void)addOperation:(id)arg1;
- (id)recordIDForName:(id)arg1;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 encryptedFields:(id)arg4;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 encryptedFields:(id)arg5;
- (void)resetZoneWithDelete:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setupRecordZoneWithCompletionHandler:(CDUnknownBlockType)arg1 ignoreDefaults:(_Bool)arg2;
- (void)_checkAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1 withRetryCount:(unsigned long long)arg2;
- (_Bool)isAccountAvailable;
- (void)queryAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)identityUpdated:(id)arg1;
- (void)accountStatusDidChange:(id)arg1;
- (void)setupAccountDidChange:(_Bool)arg1;
- (_Bool)needsDeviceToDevice;
- (id)userIdentity;
- (id)initWithRecordZoneName:(id)arg1;
- (id)initWithContainer:(id)arg1 recordZoneName:(id)arg2;
- (void)dealloc;
- (id)init;

@end

