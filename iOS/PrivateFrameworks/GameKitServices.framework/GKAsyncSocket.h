//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GKAsyncSocket : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) id socketName;
@property(copy, nonatomic) CDUnknownBlockType connectedHandler;
@property(copy, nonatomic) CDUnknownBlockType receiveDataHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
- (void)setSyncQueue:(id)arg1;
- (id)syncQueue;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)tcpConnectSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;
- (void)tcpAttachSocketDescriptor:(int)arg1;

@end

