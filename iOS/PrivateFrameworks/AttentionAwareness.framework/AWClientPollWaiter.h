//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWClientPollWaiter : NSObject
{
    AWAttentionAwarenessClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _clientBlock;
    NSObject<OS_dispatch_source> *_timer;
    int _pollState;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (void)invokeClientBlock:(unsigned long long)arg1 event:(id)arg2;
- (id)initWithClient:(id)arg1 timeout:(unsigned long long)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

