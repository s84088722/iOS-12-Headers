//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CBScalablePipeManagerDelegate-Protocol.h>
#import <CoreUtils/CUReadWriteRequestable-Protocol.h>

@class CBScalablePipe, CBScalablePipeManager, CUReadRequest, CUWriteRequest, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUBluetoothScalablePipe : NSObject <CBScalablePipeManagerDelegate, CUReadWriteRequestable>
{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    struct channel *_btChannel;
    _Bool _btEndpointRegistering;
    _Bool _btEndpointRegistered;
    int _btPeerHostState;
    _Bool _btPeerKVORegistered;
    CBScalablePipe *_btPipe;
    CBScalablePipeManager *_btPipeManager;
    struct channel_ring_desc *_btReadRing;
    char *_btReadLeftoverBuf;
    unsigned long long _btReadLeftoverMaxLen;
    char *_btReadLeftoverPtr;
    char *_btReadLeftoverEnd;
    struct channel_ring_desc *_btWriteRing;
    int _channelFD;
    CUReadRequest *_readRequestCurrent;
    struct NSMutableArray *_readRequests;
    NSObject<OS_dispatch_source> *_readSource;
    _Bool _readSuspended;
    CUWriteRequest *_writeRequestCurrent;
    struct NSMutableArray *_writeRequests;
    NSObject<OS_dispatch_source> *_writeSource;
    _Bool _writeSuspended;
    int _peerHostState;
    int _priority;
    int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSUUID *_peerIdentifier;
    CDUnknownBlockType _peerHostStateChangedHandler;
    CDUnknownBlockType _stateChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType peerHostStateChangedHandler; // @synthesize peerHostStateChangedHandler=_peerHostStateChangedHandler;
@property(readonly, nonatomic) int peerHostState; // @synthesize peerHostState=_peerHostState;
@property(copy, nonatomic) NSUUID *peerIdentifier; // @synthesize peerIdentifier=_peerIdentifier;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (unsigned long long)_writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (int)_writeIOArray:(struct iovec **)arg1 ioCount:(int *)arg2;
- (_Bool)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (void)_processWrites;
- (void)writeWithRequest:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_abortReadsWithError:(id)arg1;
- (int)_readBytes:(char *)arg1 minLen:(unsigned long long)arg2 maxLen:(unsigned long long)arg3 offset:(unsigned long long *)arg4;
- (void)_prepareReadRequest:(id)arg1;
- (void)_processReads;
- (void)readWithRequest:(id)arg1;
- (void)_handleBTPeerHostStateChanged;
- (void)_tearDownPipe;
- (void)_setupPipe;
- (void)_ensureStopped:(id)arg1;
- (void)_ensureStarted;
- (void)_invalidate;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

