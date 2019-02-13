//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDataChannelLinkContext, NSData, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_semaphore, OS_nw_connection, OS_nw_path_evaluator;

@interface _IDSDatagramChannel : NSObject
{
    _Bool _verboseFunctionalLogging;
    int _socketDescriptor;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _readHandler;
    CDUnknownBlockType _readHandlerWithOptions;
    _Bool _connected;
    struct os_unfair_lock_s _writeLock;
    // Error parsing type: Ai, name: _readState
    NSObject<OS_dispatch_semaphore> *_readSema;
    NSObject<OS_nw_connection> *_connection;
    _Bool _hasMetadata;
    _Bool _sentFirstReadLinkInfo;
    _Bool _receivedPreConnectionData;
    _Bool _waitForPreConnectionDataForConnected;
    _Bool _startCalled;
    _Bool _startAutomatically;
    int _osChannelFD;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    IDSDataChannelLinkContext *_cellularLink;
    NSMutableDictionary *_linkContexts;
    BOOL _defaultLinkID;
    NSData *_preConnectionData;
    NSMutableArray *_sendingMetadata;
    _Bool _needsMediaEncryptionInfo;
    unsigned long long _outgoingBytes;
    unsigned long long _incomingBytes;
    double _lastOutgoingStatReport;
    double _lastIncomingStatReport;
    NSMutableDictionary *_MKIArrivalTime;
    NSMutableDictionary *_firstPacketArrivalTimeForMKI;
}

- (void).cxx_destruct;
- (id)init;

@end

