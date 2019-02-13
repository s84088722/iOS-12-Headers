//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HSNetworkInterfaceManagerDelegate;

@interface HSNetworkInterfaceManager : NSObject
{
    id <HSNetworkInterfaceManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <HSNetworkInterfaceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setWiFiPowerState:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long wiFiInterfaceStatus;
- (void)_unregisterForWiFiNotifications;
- (void)_registerForWiFiNotifications;
- (void)_setBluetoothPowerState:(_Bool)arg1;
- (void)_handleBluetoothManagerStateChange:(id)arg1;
@property(readonly, nonatomic) unsigned long long bluetoothInterfaceStatus;
- (void)_unregisterForBluetoothNotifications;
- (void)_registerForBluetoothNotifications;
- (void)setNetworkInterfacePowerState:(_Bool)arg1;
- (void)dealloc;
- (void)stopObservingInterfaceChanges;
- (void)startObservingInterfaceChanges;

@end

