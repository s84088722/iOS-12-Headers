//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PDCloudStoreContainer.h>

@class NSObject, PKPaymentTransactionProcessor, PKPaymentWebService, PKPeerPaymentAccount;
@protocol OS_dispatch_queue;

@interface PDApplePayCloudStoreContainer : PDCloudStoreContainer
{
    NSObject<OS_dispatch_queue> *_proactiveFetchQueue;
    PKPaymentTransactionProcessor *_transactionProcessor;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPaymentWebService *_paymentWebService;
}

+ (void)invalidateServerChangeTokens;
- (void).cxx_destruct;
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;
- (id)_passUniqueIdentifierForCloudStoreRecord:(id)arg1;
- (id)_serviceIdentfierToRecordDictionaryFromArray:(id)arg1;
- (void)_fetchMissingRecordsFromModifiedRecords:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_canFormTransactionFromCloudStoreRecord:(id)arg1;
- (id)_parseModifiedRecords:(id)arg1 counterpartRecords:(id)arg2 shouldUpdateLocalDatabase:(_Bool)arg3 updateReasons:(unsigned long long)arg4;
- (_Bool)_isTransactionItemFromRecordType:(id)arg1;
- (_Bool)_canSyncTransactionToCloudKit:(id)arg1;
- (id)_strippedRecordName:(id)arg1;
- (id)_serviceIdentifierForRecordType:(id)arg1 recordID:(id)arg2;
- (id)_serviceIdentifierForRecord:(id)arg1;
- (id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2;
- (id)_insertOrUpdatePaymentTransaction:(id)arg1 withOriginDeviceID:(id)arg2 forPassUniqueIdentifier:(id)arg3 paymentApplication:(id)arg4 withInsertionMode:(unsigned long long)arg5 performTruncation:(_Bool)arg6;
- (id)_paymentApplicationForPassUniqueIdentifier:(id)arg1;
- (void)generateRandomTransactionForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canSyncTransactionToCloudKitWithBackingData:(_Bool)arg1 passUniqueIdentifier:(id)arg2 serviceIdentifier:(id)arg3;
- (_Bool)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1;
- (void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestUpdatesForPassUniqueIdentifier:(id)arg1;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createZones:(id)arg1 operationGroupNameSuffix:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createZones:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readCachedContainerValues;
- (void)saveCachedContainerValues;
- (void)_handlePeerPaymentAccountChanged:(id)arg1;
- (void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 shouldUpdateLocalDatabase:(_Bool)arg5 userInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cloudStoreAccountChanged:(id)arg1;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (_Bool)canInitializeContainer;
- (id)allRecordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2;
- (id)recordTypeForRecordID:(id)arg1;
- (id)initWithDataSource:(id)arg1 transactionProcessor:(id)arg2 paymentWebService:(id)arg3;

@end

