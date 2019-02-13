//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _HKDeepBreathingSessionConfiguration;
@protocol NSXPCProxyCreating, OS_dispatch_queue, _HKDeepBreathingSessionDelegate, _HKDeepBreathingSessionLifecycleDelegate;

@interface _HKDeepBreathingSession : NSObject
{
    _HKDeepBreathingSessionConfiguration *_sessionConfiguration;
    id <_HKDeepBreathingSessionLifecycleDelegate> _lifecycleDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    long long _serverState;
    id <NSXPCProxyCreating> _server;
    id <_HKDeepBreathingSessionDelegate> _delegate;
}

+ (id)_serverInterface;
+ (id)_clientInterface;
+ (id)sessionWithConfiguration:(id)arg1 lifecycleDelegate:(id)arg2;
@property(readonly) _HKDeepBreathingSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property __weak id <_HKDeepBreathingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_queue_alertDelegateDidEncounterError:(id)arg1;
- (void)_queue_alertDelegateDidReceiveHeartRate:(double)arg1;
- (void)sessionDidReceiveError:(id)arg1;
- (void)sessionDidReceiveHeartRate:(double)arg1;
- (_Bool)_queue_isServerAttached;
- (_Bool)_isServerAttached;
- (void)_connectionDidEncounterError:(id)arg1;
- (void)_queue_transitionToServerState:(long long)arg1;
@property(readonly) long long serverState;
- (id)_serverProxy;
- (id)_sessionConfiguration;
- (void)_queue_deactivate;
- (id)_serverWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_attachServerWithClientQueue:(id)arg1 healthStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endSessionWithEndReason:(long long)arg1;
- (void)startGuiding;
- (void)startSessionWithStartDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_lifecycleDelegate;
- (id)description;
- (id)_initWithSessionConfiguration:(id)arg1 lifecycleDelegate:(id)arg2;

@end

