//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacility.h>

#import <FrontBoard/FBApplicationDataStoreRepositoryServerClientContextDelegate-Protocol.h>

@class FBServiceClientAuthenticator, NSString;
@protocol FBApplicationDataStoreRepository;

@interface FBApplicationDataStoreRepositoryServer : FBSServiceFacility <FBApplicationDataStoreRepositoryServerClientContextDelegate>
{
    id <FBApplicationDataStoreRepository> _dataStore;
    FBServiceClientAuthenticator *_connectionAuthenticator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <FBApplicationDataStoreRepository> dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (void)applicationDataStoreRepositoryClientContext:(id)arg1 repositoryInvalidatedForBundleID:(id)arg2;
- (void)applicationDataStoreRepositoryClientContext:(id)arg1 valueChangedForObject:(id)arg2 key:(id)arg3 bundleID:(id)arg4;
- (void)_handleRemoveAllObjects:(id)arg1;
- (void)_handleRemoveObjectForKey:(id)arg1 context:(id)arg2;
- (void)_handleSetObjectForKey:(id)arg1 context:(id)arg2;
- (void)_handleGetObjectForKey:(id)arg1;
- (void)_handleGetAvailableDataStores:(id)arg1;
- (void)_handleSynchronize:(id)arg1;
- (void)_handleSetChangesInterest:(id)arg1 context:(id)arg2;
- (void)_handleSetPrefetchedKeys:(id)arg1 context:(id)arg2;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (_Bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;
- (id)_prerequisiteMilestones;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

