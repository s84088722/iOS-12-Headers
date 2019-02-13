//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CacheDeletePurgeableProvider-Protocol.h"

@class NSRecursiveLock, NSString;
@protocol ODRStoreIntegrationProtocol, OS_dispatch_source;

@interface ODRManager : NSObject <CacheDeletePurgeableProvider>
{
    id <ODRStoreIntegrationProtocol> _store;
    NSRecursiveLock *_resourcesLock;
    NSObject<OS_dispatch_source> *_lowDisk;
}

+ (_Bool)isAppRunning:(id)arg1;
+ (long long)_availableSpaceCushion;
+ (long long)_availableSpaceOnDeviceRootVolume;
+ (void)initialize;
+ (id)defaultManager;
- (void).cxx_destruct;
- (id)status;
- (void)cancelRequestsForApplicationWithBundleID:(id)arg1;
- (void)scanAndCleanQueue;
- (void)purgeAssetWithIdentifier:(id)arg1 forReason:(unsigned long long)arg2;
- (void)purgeAllAssetsForApplication:(id)arg1 forReason:(unsigned long long)arg2;
- (long long)purgeBytes:(long long)arg1 odrOnly:(_Bool)arg2;
- (void)reportOnTopic:(id)arg1 withData:(id)arg2;
- (void)performResourceAccessBlock:(CDUnknownBlockType)arg1;
- (void)performResourceAccessBlock:(CDUnknownBlockType)arg1 forApplicationBundleID:(id)arg2;
- (void)addIntegrityHashingFromAssetPack:(id)arg1 toRequest:(id)arg2;
- (void)updatePriorityOfRequest:(id)arg1;
- (void)resumeRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)pauseRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)removeRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (long long)addRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)currentDownloadRequestsForApplicationBundleID:(id)arg1;
- (_Bool)checkAndRequestRequiredSpaceForRequest:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

