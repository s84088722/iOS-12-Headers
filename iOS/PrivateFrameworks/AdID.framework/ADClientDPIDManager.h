//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordID, CKRecordZoneID, NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ADClientDPIDManager : NSObject
{
    NSObject<OS_dispatch_queue> *_backupFlowQueue;
    _Bool _isTest;
    _Bool _updateInProgress;
    _Bool _sandboxEnvironment;
    unsigned long long _dpidReconcileState;
    NSDate *_dpidReconcileStartDate;
    CKRecordZoneID *_zoneID;
    CKRecordID *_recordID;
    CKContainer *_privateContainer;
    long long _qualityOfService;
    NSString *_DPID;
    NSMutableArray *_operationsInProgress;
}

+ (id)DPIDOperationTypeToString:(unsigned long long)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool sandboxEnvironment; // @synthesize sandboxEnvironment=_sandboxEnvironment;
@property(retain, nonatomic) NSMutableArray *operationsInProgress; // @synthesize operationsInProgress=_operationsInProgress;
@property(nonatomic) _Bool updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(retain, nonatomic) NSString *DPID; // @synthesize DPID=_DPID;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain, nonatomic) CKContainer *privateContainer; // @synthesize privateContainer=_privateContainer;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain) NSDate *dpidReconcileStartDate; // @synthesize dpidReconcileStartDate=_dpidReconcileStartDate;
@property unsigned long long dpidReconcileState; // @synthesize dpidReconcileState=_dpidReconcileState;
@property(readonly, nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
- (void).cxx_destruct;
- (void)syncDPIDWithiCloud:(CDUnknownBlockType)arg1;
- (void)saveDPIDtoiCloud:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDPIDfromiCloud:(CDUnknownBlockType)arg1;
- (void)fetchDPIDfromiCloud:(CDUnknownBlockType)arg1;
- (void)teardowniCloudSubscription:(CDUnknownBlockType)arg1;
- (void)setupiCloudSubscription:(CDUnknownBlockType)arg1;
- (void)retryIfNeeded:(CDUnknownBlockType)arg1;
- (_Bool)canGenerateDPID;
- (_Bool)shouldSyncDPID;
- (id)generateDPID;
- (void)setupLocalDPID;
- (void)finishOperation:(unsigned long long)arg1;
- (void)startOperation:(unsigned long long)arg1;
- (id)operationQueueLog;
- (void)setiCloudAccountSubscribed:(_Bool)arg1;
- (_Bool)iCloudAccountSubscribed;
- (void)writeDPIDtoKeychain;
- (_Bool)limitAdTrackingEnabled;
- (_Bool)isRestrictedByApple;
- (_Bool)isLoggedIntoiTunes;
- (void)resetDPID:(CDUnknownBlockType)arg1;
- (void)handlePushNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)continueReconcileWithAccountStatus:(long long)arg1 andError:(id)arg2 with:(CDUnknownBlockType)arg3;
- (void)backupFlowForCloudKitWorkAtTime:(id)arg1 with:(CDUnknownBlockType)arg2;
- (void)reconcileDPID:(CDUnknownBlockType)arg1;
- (_Bool)canContinueProcessing:(id)arg1;
- (void)updateActiveRecordICloudDSID;
- (id)init;

@end

