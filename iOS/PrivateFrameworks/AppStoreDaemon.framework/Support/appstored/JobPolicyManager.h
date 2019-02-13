//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BatterySaverWatcherDelegate-Protocol.h"

@class BatterySaverWatcher, DataMigrationObserver, NSNumber, NSString;
@protocol JobPolicyManagerDelegate, OS_dispatch_queue;

@interface JobPolicyManager : NSObject <BatterySaverWatcherDelegate>
{
    BatterySaverWatcher *_batterySaverWatcher;
    NSNumber *_currentAccountDSID;
    DataMigrationObserver *_dataMigrationObserver;
    _Bool _internetReachableViaWiFi;
    _Bool _internetReachableViaOnlyWWAN;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct __SCNetworkReachability *_reachability;
    int _thermalNotificationToken;
    _Bool _running;
    _Bool _batterySaverEnabled;
    _Bool _dataMigrationComplete;
    _Bool _powerPluggedIn;
    _Bool _setupAssistantRunning;
    id <JobPolicyManagerDelegate> _delegate;
    unsigned long long _lastThermalPressureLevel;
    long long _networkType;
}

@property(readonly, nonatomic, getter=isSetupAsssistantRunning) _Bool setupAssistantRunning; // @synthesize setupAssistantRunning=_setupAssistantRunning;
@property(readonly, nonatomic, getter=isPowerPluggedIn) _Bool powerPluggedIn; // @synthesize powerPluggedIn=_powerPluggedIn;
@property(readonly, nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(readonly, nonatomic) unsigned long long lastThermalPressureLevel; // @synthesize lastThermalPressureLevel=_lastThermalPressureLevel;
@property(readonly, nonatomic, getter=isDataMigrationComplete) _Bool dataMigrationComplete; // @synthesize dataMigrationComplete=_dataMigrationComplete;
@property(readonly, nonatomic, getter=isBatterySaverEnabled) _Bool batterySaverEnabled; // @synthesize batterySaverEnabled=_batterySaverEnabled;
@property(nonatomic) __weak id <JobPolicyManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_handleThermalNotification:(int)arg1;
- (void)_handleSetupAssistantFinishedNotification:(id)arg1;
- (void)_handleReachbilityCallback:(struct __SCNetworkReachability *)arg1 reachabilityFlags:(unsigned int)arg2 skipNotify:(_Bool)arg3;
- (void)_handleReachbilityCallback:(struct __SCNetworkReachability *)arg1 reachabilityFlags:(unsigned int)arg2;
- (void)_handleFirstReachbilityCallback:(struct __SCNetworkReachability *)arg1 reachabilityFlags:(unsigned int)arg2;
- (void)_handleDeviceUnlockNotification;
- (void)_handleDataMigrationCompletion;
- (void)_handleAccountChangedNotification;
- (void)_beginObservingThermalNotification;
- (void)_beginObservingSetupAssistantFinishedNotification;
- (void)_beginObservingPowerPluggedIn;
- (void)_beginObservingNetworkReachability;
- (void)_beginObservingDeviceLockStatus;
- (void)_beginObservingDataMigration;
- (void)_beginObservingBatterySaverNotification;
- (void)_beginObservingAccountChangeNotification;
- (void)batterySaverWatcherDidChangeState:(id)arg1;
- (_Bool)verifyJobEntityPolicy:(id)arg1 diagnosticContext:(id)arg2 outPolicyDescription:(id *)arg3;
@property(readonly, nonatomic, getter=isNetworkReachable) _Bool networkReachable;
- (_Bool)evaluatePolicy:(id)arg1 forBundleID:(id)arg2 jobID:(long long)arg3;
- (void)beginObservingPolicyChanges;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

