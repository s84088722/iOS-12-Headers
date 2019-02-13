//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSString, NSXPCListener;
@protocol CellularPlanVinylTest;

__attribute__((visibility("hidden")))
@interface CellularPlanVinylTestXPCServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *fXpcListener;
    NSMutableArray *fXpcConnections;
    id <CellularPlanVinylTest> fDelegate;
}

- (void)dealloc;
- (void)stop;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

