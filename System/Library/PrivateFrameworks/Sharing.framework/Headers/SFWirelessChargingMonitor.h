//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, SFPowerSourceMonitor, SFWirelessChargingDevicePhone;
@protocol OS_dispatch_queue;

@interface SFWirelessChargingMonitor : NSObject
{
    _Bool _meDeviceWasWirelesslyCharging;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    SFWirelessChargingDevicePhone *_meChargingDevice;
    CDUnknownBlockType _wirelessPowerSourceFoundHandler;
    CDUnknownBlockType _wirelessPowerSourceLostHandler;
    CDUnknownBlockType _wirelessPowerSourceChangedHandler;
    SFPowerSourceMonitor *_monitor;
}

@property(nonatomic) _Bool meDeviceWasWirelesslyCharging; // @synthesize meDeviceWasWirelesslyCharging=_meDeviceWasWirelesslyCharging;
@property(retain, nonatomic) SFPowerSourceMonitor *monitor; // @synthesize monitor=_monitor;
@property(copy, nonatomic) CDUnknownBlockType wirelessPowerSourceChangedHandler; // @synthesize wirelessPowerSourceChangedHandler=_wirelessPowerSourceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType wirelessPowerSourceLostHandler; // @synthesize wirelessPowerSourceLostHandler=_wirelessPowerSourceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType wirelessPowerSourceFoundHandler; // @synthesize wirelessPowerSourceFoundHandler=_wirelessPowerSourceFoundHandler;
@property(readonly, nonatomic) SFWirelessChargingDevicePhone *meChargingDevice; // @synthesize meChargingDevice=_meChargingDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)chargingDeviceForPowerSources:(id)arg1;
- (void)refreshOnSameMatAsMeChargingDevice:(id)arg1 withMeWirelesslyCharging:(_Bool)arg2;
- (void)evaluatePowerSources:(id)arg1 found:(_Bool)arg2 changed:(_Bool)arg3 lost:(_Bool)arg4;
@property(readonly, copy, nonatomic) NSSet *wirelessChargingDevices;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setUpMonitor;
- (id)init;

@end

