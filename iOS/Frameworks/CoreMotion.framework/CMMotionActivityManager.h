//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CMMotionActivityManager : NSObject
{
    struct CLConnectionClient *fLocationConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    CDUnknownBlockType fHandler;
    NSOperationQueue *fHandlerQueue;
}

+ (long long)authorizationStatus;
+ (_Bool)isActivityAvailable;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 onQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)stopActivityUpdates;
- (void)startActivityUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

