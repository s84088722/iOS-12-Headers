//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"
#import "MRTransactionDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRDTransactionServer : NSObject <MRTransactionDelegate, MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _usedMemory;
    unsigned long long _allowedMemory;
    double _transactionWaitDuration;
    NSMutableArray *_transactions;
}

@property(readonly, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
- (void).cxx_destruct;
- (void)_sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;
- (void)sendContentItemTransaction:(id)arg1 request:(id)arg2 playerPath:(id)arg3;
- (void)sendContentItemTransactionWithPlaybackQueue:(id)arg1 request:(id)arg2 playerPath:(id)arg3;
- (void)handleContentItemTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;
- (void)handlePlaybackQueueRequestTransaction:(id)arg1 packets:(id)arg2 group:(id)arg3;
- (void)adjustMemory:(long long)arg1;
- (void)transaction:(id)arg1 didReceivePackets:(id)arg2 receivedSize:(unsigned long long)arg3 requestedSize:(unsigned long long)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (unsigned long long)transactionRequestingMemorySize:(id)arg1;
- (void)transactionDidEnd:(id)arg1 bytesRemaining:(unsigned long long)arg2;
- (void)collectDiagnostic:(id)arg1;
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
