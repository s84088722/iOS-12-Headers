//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CPSApplicationStateMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_stateObserverQueue;
    NSString *_bundleIdentifier;
    BKSApplicationStateMonitor *_stateMonitor;
    NSHashTable *_stateObservers;
}

@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) BKSApplicationStateMonitor *stateMonitor; // @synthesize stateMonitor=_stateMonitor;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isApplicationActive) _Bool applicationActive;
- (void)removeApplicationStateObserver:(id)arg1;
- (void)addApplicationStateObserver:(id)arg1;
- (void)removeAllObservers;
- (void)dealloc;
- (void)_handleStateChange:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end
