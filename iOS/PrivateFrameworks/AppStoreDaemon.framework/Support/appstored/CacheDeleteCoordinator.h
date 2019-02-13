//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol CacheDeletePurgeableProvider, OS_dispatch_queue, OS_dispatch_source;

@interface CacheDeleteCoordinator : NSObject
{
    NSDictionary *_combinedSpaceByUrgency;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_freeSpaceQueue;
    NSObject<OS_dispatch_queue> *_runQueue;
    double _lastUpdate;
    id <CacheDeletePurgeableProvider> _appPurgeCoordinator;
    id <CacheDeletePurgeableProvider> _odrPurgeCoordinator;
    NSObject<OS_dispatch_source> *_scheduledTimer;
}

+ (id)sharedInstance;
@property(retain) NSObject<OS_dispatch_source> *scheduledTimer; // @synthesize scheduledTimer=_scheduledTimer;
@property(nonatomic) __weak id <CacheDeletePurgeableProvider> odrPurgeCoordinator; // @synthesize odrPurgeCoordinator=_odrPurgeCoordinator;
@property(readonly, nonatomic) id <CacheDeletePurgeableProvider> appPurgeCoordinator; // @synthesize appPurgeCoordinator=_appPurgeCoordinator;
- (void).cxx_destruct;
- (void)_updatePurgeableStorageWithCoaleseInterval:(float)arg1 refresh:(_Bool)arg2;
- (void)_refreshPurgeableStorage:(id)arg1;
- (void)_pushUpdatedAvailableStorage:(_Bool)arg1;
- (id)_purgeable:(id)arg1 urgency:(int)arg2;
- (id)_purge:(id)arg1 urgency:(int)arg2;
- (id)_periodic:(id)arg1 urgency:(int)arg2;
- (_Bool)_isStale;
- (void)_requestFreeSpace:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_cancelPurge;
- (void)watchAppsUpdated;
- (void)updatePurgeableStorageRightAway;
- (void)updatePurgeableStorage;
- (void)invaldateCaches;
- (void)registerCacheDeleteInfoCallbacks;
- (void)requestFreeSpace:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
