//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKHealthServicesClientInterface-Protocol.h>

@class HKHealthStore, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface HKHealthServicesManager : NSObject <HKHealthServicesClientInterface>
{
    HKHealthStore *_healthStore;
    NSMutableDictionary *_discoveries;
    NSMutableSet *_discoveriesEnded;
    NSMutableDictionary *_sessions;
    NSMutableSet *_sessionsEnded;
    CDUnknownBlockType _bluetoothStatusHandler;
    HKHealthServicesManager *_healthServicesManager;
}

@property(readonly, nonatomic) HKHealthServicesManager *healthServicesManager; // @synthesize healthServicesManager=_healthServicesManager;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStatusHandler; // @synthesize bluetoothStatusHandler=_bluetoothStatusHandler;
@property(retain, nonatomic) NSMutableSet *sessionsEnded; // @synthesize sessionsEnded=_sessionsEnded;
@property(retain, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) NSMutableSet *discoveriesEnded; // @synthesize discoveriesEnded=_discoveriesEnded;
@property(retain, nonatomic) NSMutableDictionary *discoveries; // @synthesize discoveries=_discoveries;
@property(nonatomic) __weak HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)clientRemote_deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(id)arg4;
- (void)clientRemote_deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(_Bool)arg3 withError:(id)arg4;
- (void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(id)arg2;
- (void)_addEndedSession:(id)arg1;
- (void)_addEndedDiscovery:(id)arg1;
- (void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getHealthServicePropertyNamesWithHandler:(CDUnknownBlockType)arg1;
- (void)setEnabledStatus:(_Bool)arg1 forPeripheral:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)healthServicePairingsWithHandler:(CDUnknownBlockType)arg1;
- (id)activeHealthServiceSessions;
- (void)endHealthServiceSession:(id)arg1;
- (void)startHealthServiceSession:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)activeHealthServiceDiscoveries;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)startAllHealthServicesDiscoveryWithHandler:(CDUnknownBlockType)arg1;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_fetchSupportedServiceIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)endBluetoothStatusUpdates;
- (void)startBluetoothStatusUpdates:(CDUnknownBlockType)arg1;
- (void)clientQueue_handleInterruption;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

