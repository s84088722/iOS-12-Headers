//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEODirectionsRequesterServerProxy-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEODirectionsRequesterServerRemoteProxy : NSObject <_GEODirectionsRequesterServerProxy>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingRequests;
}

- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 isDoomRequest:(_Bool)arg3 requestPriority:(id)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

