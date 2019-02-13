//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, CLInUseAssertion, NSCountedSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFLocationManager : NSObject
{
    CLInUseAssertion *_assertion;
    NSCountedSet *_clients;
    NSMutableSet *_foregroundApplications;
    BKSApplicationStateMonitor *_stateMonitor;
}

+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (id)sharedLocationManager;
- (void).cxx_destruct;
- (void)removeClientForApplication:(id)arg1;
- (void)addClientForApplication:(id)arg1;
- (void)_updateApplicationsToMonitor;
- (void)_setApplication:(id)arg1 isForeground:(_Bool)arg2;
- (void)_handleApplicationStateChange:(id)arg1;
- (void)_updateAssertion;
- (id)init;

@end

