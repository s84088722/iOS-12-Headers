//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSXPCListenerDelegate-Protocol.h>
#import <PassKitCore/PDAssertionCoordinatorDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSHashTable, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface PDAssertionManager : NSObject <NSXPCListenerDelegate, PDAssertionCoordinatorDelegate>
{
    NSHashTable *_observers;
    NSXPCListener *_coordinatorListener;
    NSMutableDictionary *_coordinators;
    NSObject<OS_dispatch_queue> *_managerSerialQueue;
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

- (void).cxx_destruct;
- (void)_applicationStateChanged:(id)arg1;
- (void)_removeAllAssertionCoordinators;
- (void)_removeAssertionCoordinator:(id)arg1;
- (void)_addAssertionCoordinator:(id)arg1 forProcessIdentifier:(id)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)assertionsOfType:(unsigned long long)arg1;
- (void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2;
- (void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2;
- (_Bool)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

