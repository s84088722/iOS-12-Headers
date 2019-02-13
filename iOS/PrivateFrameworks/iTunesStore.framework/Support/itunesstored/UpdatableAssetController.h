//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface UpdatableAssetController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_deferredScheduleValuesByClientID;
    NSMutableDictionary *_lastModifiedHeaderValueByClientID;
    ISOperationQueue *_operationQueue;
    id _taskObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;
- (id)_operationQueue;
- (void)_networkTypeChangedNotification:(id)arg1;
- (_Bool)_hasEntitlements:(id)arg1;
- (id)_bundledManifestURLForClientIdentifier:(id)arg1;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)clearCache:(id)arg1 connection:(id)arg2;
- (void)_scheduleUpdateAssetsOperationWithManifestURL:(id)arg1 bundledManifestURL:(id)arg2 clientIdentifier:(id)arg3 userAgent:(id)arg4 scheduledInBackground:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)refreshCache:(id)arg1 connection:(id)arg2;
- (void)observeXPCServer:(id)arg1;
- (void)dealloc;
- (id)init;

@end

