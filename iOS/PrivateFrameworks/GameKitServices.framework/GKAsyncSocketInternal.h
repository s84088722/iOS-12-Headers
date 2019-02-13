//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameKitServices/GKAsyncSocket.h>

@class NSMutableData, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GKAsyncSocketInternal : GKAsyncSocket
{
    NSObject<OS_dispatch_source> *_receiveSource;
    NSObject<OS_dispatch_source> *_sendSource;
    _Bool _sendSourceSuspended;
    _Bool _invalidated;
    int _connectionSocket;
    NSMutableData *_dataToSend;
    CDUnknownBlockType _receiveDataHandler;
    CDUnknownBlockType _connectedHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_socketName;
}

- (void)setSocketName:(id)arg1;
- (id)socketName;
- (void)setConnectedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)connectedHandler;
- (void)setReceiveDataHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)receiveDataHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
- (void)sendData;
- (void)receiveData;
- (void)closeConnectionNow;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)tcpConnectSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;
- (void)tcpAttachSocketDescriptor:(int)arg1;
- (_Bool)setupSourcesWithSocket:(int)arg1 receiveEventHandler:(CDUnknownBlockType)arg2 sendEventHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

