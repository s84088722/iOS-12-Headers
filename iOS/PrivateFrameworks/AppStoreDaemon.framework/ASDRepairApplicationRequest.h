//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDBaseClient.h>

#import <AppStoreDaemon/NSXPCListenerDelegate-Protocol.h>

@class ASDRepairApplicationRequestOptions, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDRepairApplicationRequest : ASDBaseClient <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDRepairApplicationRequestOptions *_options;
}

- (void).cxx_destruct;
- (void)_setupConnection;
- (void)_sendRequestWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

