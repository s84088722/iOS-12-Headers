//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOSearchAttributionServerProxy-Protocol.h>

@class GEOSearchAttributionManifest, NSLock, NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOSearchAttributionServerProxy>
{
    NSMapTable *_listeners;
    NSLock *_listenersLock;
    _Bool _updatingManifest;
    NSMutableArray *_updateManifestCompletionHandlers;
    NSMutableArray *_updateManifestErrorHandlers;
    GEOSearchAttributionManifest *_attributionManifest;
    NSLock *_attributionManifestLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadAttributionInfoForListener:(id)arg1;
- (void)_sendError:(id)arg1 toListener:(id)arg2;
- (void)_sendInfo:(id)arg1 toListener:(id)arg2;
- (id)_attributionManifest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

