//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface PLAssetResourceManager : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_requestIsolationQueue;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_requestById;
    int _currentRequestId;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)cancelRequest:(int)arg1;
- (int)requestCloudResourceType:(unsigned long long)arg1 assetObjectID:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setRequest:(id)arg1 forRequestID:(int)arg2;
- (id)_requestWithID:(int)arg1;
- (id)init;

@end

