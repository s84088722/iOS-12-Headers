//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPDPushConnection, NSMapTable, NSMutableDictionary;
@protocol FPAccessControl, OS_dispatch_group, OS_dispatch_queue;

@interface FPDExtensionFileProviderManager : NSObject
{
    NSObject<OS_dispatch_queue> *_refreshOperationsQueue;
    NSObject<OS_dispatch_queue> *_providersQueue;
    NSMutableDictionary *_providersByIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_providersLoadedGroup;
    id _matchingContext;
    id <FPAccessControl> _accessControl;
    struct NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
    FPDPushConnection *_pushConnection;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (id)allProviders;
- (id)_deserializedAlternateContentsDictionary;
- (void)_serializeAlternateContentsURLDictionary:(struct NSMutableDictionary *)arg1;
- (void)_loadAlternateContentsDictionary;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)arg1;
- (id)alternateContentsURLForItemID:(id)arg1;
- (void)setAlternateContentsURL:(id)arg1 forItemID:(id)arg2;
- (void)setFileProviderAccessControl:(id)arg1;
- (id)providerWithOwningApplicationIdentifier:(id)arg1;
- (id)providerForURL:(id)arg1;
- (id)providerWithIdentifier:(id)arg1;
- (id)providersInfo;
- (void)_updateProviderListForMatchingExtensions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)uniquedExtensions:(id)arg1;
- (void)migrateEnabledStateIfNecessary:(id)arg1;
- (void)loadProvidersWithUpdateHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)arg1;
- (id)init;

@end

