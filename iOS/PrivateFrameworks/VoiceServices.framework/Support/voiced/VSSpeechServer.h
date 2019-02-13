//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface VSSpeechServer : NSObject <NSXPCListenerDelegate>
{
    unsigned long long _connectionCount;
    struct __CFRunLoopSource *_runloopSourceRef;
    NSXPCListener *_listener;
}

@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic) struct __CFRunLoopSource *runloopSourceRef; // @synthesize runloopSourceRef=_runloopSourceRef;
@property(nonatomic) unsigned long long connectionCount; // @synthesize connectionCount=_connectionCount;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)scheduleBackgroundTask;
- (void)resume;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

