//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface HMDSiriRemoteInputServer : NSObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_xpcServer;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSHashTable *_siriSessions;
}

+ (id)logCategory;
@property(retain, nonatomic) NSHashTable *siriSessions; // @synthesize siriSessions=_siriSessions;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)sessionForIdentifier:(id)arg1;
- (void)handleStopStreamMsg:(id)arg1;
- (void)handleStartStreamMsg:(id)arg1;
- (void)handleCheckInMsg:(id)arg1;
- (void)sendMsg:(id)arg1 args:(id)arg2;
- (void)sendMsgIfCheckedIn:(id)arg1 args:(id)arg2;
- (void)handleMsg:(id)arg1;
- (void)handleConnectionEvent:(id)arg1;
- (void)handleDisconnection;
- (void)handleConnection:(id)arg1;
- (void)handleServerEvent:(id)arg1;
- (void)invalidate;
- (void)deregisterSiriSession:(id)arg1;
- (_Bool)registerSiriSession:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

