//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue, OS_xpc_object, SpringBoardAlertProxyDelegate;

@interface SpringBoardAlertProxy : NSObject
{
    id <SpringBoardAlertProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_inputConnection;
    NSObject<OS_xpc_object> *_inputEndpoint;
    SSXPCConnection *_outputConnection;
}

@property(readonly) NSObject<OS_xpc_object> *XPCEndpoint; // @synthesize XPCEndpoint=_inputEndpoint;
- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 connection:(id)arg2;
- (void)_disconnect;
@property __weak id <SpringBoardAlertProxyDelegate> delegate;
- (void)sendMessage:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;

@end

