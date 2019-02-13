//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, _PXAutoloopSchedulerRequest;
@protocol OS_dispatch_queue, PXAutoloopSchedulerDelegate;

@interface PXAutoloopScheduler : NSObject
{
    NSMutableArray *_pendingRequests;
    NSMapTable *_assetUUIDToPendingRequest;
    _PXAutoloopSchedulerRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    struct {
        _Bool respondsToAssetUUIDToFavorizeForAutoloopScheduler;
    } _delegateFlags;
    _Bool _shouldSimulateRequest;
    id <PXAutoloopSchedulerDelegate> _delegate;
}

+ (id)sharedScheduler;
@property(nonatomic) _Bool shouldSimulateRequest; // @synthesize shouldSimulateRequest=_shouldSimulateRequest;
@property(nonatomic) __weak id <PXAutoloopSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_nextRequest;
- (void)_startNextPendingRequest;
- (void)_scheduleNextPendingRequest;
- (void)_removeScheduleRequest:(id)arg1;
- (void)_addRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cancelRequest:(id)arg1;
- (void)scheduleRequests:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

