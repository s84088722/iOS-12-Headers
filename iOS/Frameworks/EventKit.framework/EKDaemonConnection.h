//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/CADClientInterface-Protocol.h>

@class CADDatabaseInitializationOptions, NSMutableDictionary, NSXPCConnection;
@protocol CADInterface, EKDaemonConnectionDelegate, OS_dispatch_queue;

@interface EKDaemonConnection : NSObject <CADClientInterface>
{
    NSObject<OS_dispatch_queue> *_connectionLock;
    id <CADInterface> _remoteOperationProxy;
    id <CADInterface> _syncRemoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    _Bool _registeredForStartNote;
    _Bool _hasEverConnected;
    NSXPCConnection *_xpcConnection;
    id <EKDaemonConnectionDelegate> _delegate;
    CADDatabaseInitializationOptions *_initializationOptions;
}

@property(nonatomic) _Bool hasEverConnected; // @synthesize hasEverConnected=_hasEverConnected;
@property(retain, nonatomic) CADDatabaseInitializationOptions *initializationOptions; // @synthesize initializationOptions=_initializationOptions;
@property __weak id <EKDaemonConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned int)arg2 finished:(_Bool)arg3;
- (void)_finishAllRepliesOnServerDeath;
- (void)cancelRemoteOperation:(unsigned int)arg1;
- (void)removeCancellableRemoteOperation:(unsigned int)arg1;
- (unsigned int)addCancellableRemoteOperation:(id)arg1;
- (void)_daemonRestarted;
@property(readonly, retain, nonatomic) id <CADInterface> CADOperationProxySync;
@property(readonly, retain, nonatomic) id <CADInterface> CADOperationProxy;
@property(readonly, retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)disconnect;
- (_Bool)_connectToServer;
- (void)_createConnectionAndOperationProxyIfNeeded;
- (void)dealloc;
- (id)init;

@end

