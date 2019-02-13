//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RELocationManager.h>

#import <RelevanceEngine/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSLock, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface _RECoreLocationLocationManager : RELocationManager <CLLocationManagerDelegate>
{
    CLLocation *_currentLocation;
    NSLock *_locationAccessLock;
    CDUnknownBlockType _handler;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _resumedQueue;
}

- (void).cxx_destruct;
- (void)_notifyUpdateHandlersWithError:(id)arg1;
- (void)_updateLocation:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)currentLocation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

