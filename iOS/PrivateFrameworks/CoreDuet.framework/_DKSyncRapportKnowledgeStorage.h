//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncRemoteKnowledgeStorage-Protocol.h>

@class NSDictionary, NSMutableDictionary, RPCompanionLinkClient, _DKEventTypeResultStatsCounter;
@protocol OS_dispatch_source, _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncRapportKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>
{
    NSDictionary *_failIfAsleepOption;
    _DKEventTypeResultStatsCounter *_failIfAsleepStats;
    RPCompanionLinkClient *_client;
    NSMutableDictionary *_companionLinkClients;
    unsigned long long _outstandingRequestCount;
    NSObject<OS_dispatch_source> *_companionLinkClientsCleanupTimer;
    double _retryTimeout;
    unsigned long long _currentChangeSetSequenceNumber;
    _Bool _isAvailable;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

+ (id)sharedInstance;
@property _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
@property(retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dataFromChangeSet:(id)arg1 didCompress:(_Bool *)arg2;
- (id)changeSetFromCompressedData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)changeSetForSyncWithEventsToInsert:(id)arg1 eventIDsToDeletes:(id)arg2 error:(id *)arg3;
- (void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performCompanionLinkCleanup;
- (void)companionLinkCleanupTimerFired;
- (void)createOrRescheduleCompanionLinkClientsCleanupTimer;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 client:(id)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (id)deviceForPeer:(id)arg1;
- (_Bool)isTransportActiveForPeer:(id)arg1;
- (long long)transportType;
- (id)name;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFetchDelegate:(id)arg1;
- (void)handleFetchSourceDeviceIDWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleFetchSourceDeviceIDWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleFetchDeletedEventIDsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleFetchDeletedEventIDsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleFetchEventsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleFetchEventsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)fetchEventsFromPeer:(id)arg1 creationDateBetweenDate:(id)arg2 andDate:(id)arg3 streamNames:(id)arg4 limit:(unsigned long long)arg5 fetchOrder:(long long)arg6 highPriority:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)clearPrewarmedFlag;
- (void)setHasDeletionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (_Bool)hasDeletionsFlagForPeer:(id)arg1;
- (void)setHasAdditionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (_Bool)hasAdditionsFlagForPeer:(id)arg1;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleBeaconWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleBeaconWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)sendBeaconToPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)myDeviceID;
- (id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
- (id)transformResponseError:(id)arg1;
- (void)removeAllClientsWithRetiring:(_Bool)arg1;
- (void)removeClient:(id)arg1 forPeer:(id)arg2 retiring:(_Bool)arg3;
- (void)setClient:(id)arg1 forPeer:(id)arg2;
- (id)clientForPeer:(id)arg1;
- (void)handleActivateCompanionLinkClient:(id)arg1 forPeer:(id)arg2 error:(id)arg3;
- (void)handleActivateWithError:(id)arg1;
- (void)handleDeviceLost:(id)arg1;
- (void)handleDeviceChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
- (void)handleDeviceFound:(id)arg1;
- (void)handleInvalidation;
- (void)registerRequestIDsWithClient:(id)arg1;
- (void)startRapport;
- (void)cancelOutstandingOperations;
- (void)start;
- (void)dealloc;
- (id)init;

@end

