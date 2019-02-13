//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PDCloudStoreContainer.h>

@protocol PDCloudStorePassManager;

@interface PDPassCloudStoreContainer : PDCloudStoreContainer
{
    id <PDCloudStorePassManager> _passManager;
    _Bool _canInitializeContainer;
}

+ (void)invalidateServerChangeTokens;
- (void).cxx_destruct;
- (id)_ubiquitousCatalogOfRecord;
- (id)_catalogOfRecord;
- (_Bool)_isRemoteAssetItemFromRecordType:(id)arg1;
- (_Bool)_isPassCatalogItemFromRecordType:(id)arg1;
- (_Bool)_isPassItemFromRecordType:(id)arg1;
- (_Bool)_canInitializeContainer;
- (void)cloudStoreAccountChanged:(id)arg1;
- (void)readCachedContainerValues;
- (void)saveCachedContainerValues;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 shouldUpdateLocalDatabase:(_Bool)arg5 userInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)recordTypeForRecordID:(id)arg1;
- (_Bool)shouldFetchAndStoreCloudDataAtStartup;
- (_Bool)canInitializeContainer;
- (id)initWithDataSource:(id)arg1 passManager:(id)arg2;

@end

