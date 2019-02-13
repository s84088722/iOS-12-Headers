//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRNSXPCConnectionProtocol-Protocol.h>

@class NRMockClientNSXPCConnection, NRMockNSXPCListener, NSString, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface NRMockServerNSXPCConnection : NSObject <NRNSXPCConnectionProtocol>
{
    NRMockClientNSXPCConnection *_clientConnection;
    NRMockNSXPCListener *_listener;
    id _synchronousRemoteObjectProxy;
    id _remoteObjectProxy;
    _Bool _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _interruptionHandler;
}

@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
- (void).cxx_destruct;
@property(readonly, nonatomic) int processIdentifier;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) id remoteObjectProxy;
- (id)remoteObjectProxyAsync:(_Bool)arg1;
@property(retain, nonatomic) NSXPCInterface *remoteObjectInterface;
- (void)runCompletionBlock:(CDUnknownBlockType)arg1;
- (id)valueForEntitlement:(id)arg1;
@property(readonly, retain, nonatomic) NSString *processName;
- (void)_setQueue:(id)arg1;
- (id)initWithListener:(id)arg1 clientConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

