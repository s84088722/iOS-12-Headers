//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, CURetrier, NSArray, NSData, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFBLEScanner : NSObject <CBCentralManagerDelegate>
{
    _Bool _activateCalled;
    _Bool _activated;
    _Bool _activeScan;
    CBCentralManager *_centralManager;
    struct NSMutableDictionary *_devices;
    _Bool _invalidateCalled;
    _Bool _needDups;
    long long _payloadType;
    _Bool _poweredOffSleep;
    NSObject<OS_dispatch_source> *_rescanTimer;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_rssiEventLogFile;
    _Bool _scanStarted;
    CURetrier *_startRetrier;
    _Bool _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSSet *_trackedPeersApplied;
    _Bool _updating;
    struct LogCategory *_ucat;
    _Bool _rssiLog;
    _Bool _rssiLogStdOut;
    _Bool _scanCache;
    unsigned int _changeFlags;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    NSArray *_deviceFilter;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSData *_payloadFilterData;
    NSData *_payloadFilterMask;
    double _rescanInterval;
    long long _rssiThreshold;
    long long _scanInterval;
    long long _scanRate;
    long long _scanState;
    CDUnknownBlockType _scanStateChangedHandler;
    long long _scanWindow;
    double _timeout;
    CDUnknownBlockType _timeoutHandler;
    NSSet *_trackedPeers;
}

@property(copy, nonatomic) NSSet *trackedPeers; // @synthesize trackedPeers=_trackedPeers;
@property(copy, nonatomic) CDUnknownBlockType timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long scanWindow; // @synthesize scanWindow=_scanWindow;
@property(copy, nonatomic) CDUnknownBlockType scanStateChangedHandler; // @synthesize scanStateChangedHandler=_scanStateChangedHandler;
@property(readonly, nonatomic) long long scanState; // @synthesize scanState=_scanState;
@property(nonatomic) long long scanRate; // @synthesize scanRate=_scanRate;
@property(nonatomic) long long scanInterval; // @synthesize scanInterval=_scanInterval;
@property(nonatomic) _Bool scanCache; // @synthesize scanCache=_scanCache;
@property(nonatomic) long long rssiThreshold; // @synthesize rssiThreshold=_rssiThreshold;
@property(nonatomic) _Bool rssiLogStdOut; // @synthesize rssiLogStdOut=_rssiLogStdOut;
@property(nonatomic) _Bool rssiLog; // @synthesize rssiLog=_rssiLog;
@property(nonatomic) double rescanInterval; // @synthesize rescanInterval=_rescanInterval;
@property(readonly, copy, nonatomic) NSData *payloadFilterMask; // @synthesize payloadFilterMask=_payloadFilterMask;
@property(readonly, copy, nonatomic) NSData *payloadFilterData; // @synthesize payloadFilterData=_payloadFilterData;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) NSArray *deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
- (void).cxx_destruct;
- (void)_watchSetupParseName:(id)arg1 fields:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_updateRescanTimer;
- (_Bool)_updateCounterpart:(id)arg1;
- (void)_timeoutTimerFired;
- (void)_startTimeoutIfNeeded;
- (void)_rssiLogClose;
- (void)_rssiLogOpen;
- (void)_restartIfNeeded;
- (void)_rescanTimerFired;
- (void)_removeAllDevicesWithReason:(id)arg1;
- (void)_poweredOn;
- (void)_poweredOff;
- (_Bool)_needDups;
- (_Bool)_needActiveScan;
- (void)_invokeBlockActivateSafe:(CDUnknownBlockType)arg1;
- (void)_foundDevice:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 fields:(id)arg4;
- (void)performUpdate:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setPayloadFilterData:(id)arg1 mask:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

