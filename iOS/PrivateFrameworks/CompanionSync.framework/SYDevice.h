//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NRDevicePropertyObserver-Protocol.h>
#import <CompanionSync/SYStateLoggable-Protocol.h>

@class NRDevice, NSDate, NSString, NSUUID, PBCodable;

@interface SYDevice : NSObject <NRDevicePropertyObserver, SYStateLoggable>
{
    NRDevice *_nrDevice;
    NSUUID *_pairingID;
    NSString *_pairingStorePath;
    NSString *_deviceClass;
    NSString *_systemVersion;
    NSString *_systemBuildVersion;
    NSDate *_lastActiveDate;
    _Bool _hasCachedNearby;
    _Bool _cachedIsNearby;
    long long _state;
}

+ (id)deviceForIDSDeviceID:(id)arg1 fromList:(id)arg2;
+ (id)deviceForIDSDevice:(id)arg1;
+ (id)deviceForNRDevice:(id)arg1;
+ (id)targetableDevice;
+ (id)knownDevices;
@property(readonly, nonatomic) NRDevice *nrDevice; // @synthesize nrDevice=_nrDevice;
@property(nonatomic) _Bool cachedIsNearby; // @synthesize cachedIsNearby=_cachedIsNearby;
@property(nonatomic) _Bool hasCachedNearby; // @synthesize hasCachedNearby=_hasCachedNearby;
@property(readonly, nonatomic) NSDate *lastActiveDate; // @synthesize lastActiveDate=_lastActiveDate;
@property(readonly, nonatomic) NSString *systemBuildVersion; // @synthesize systemBuildVersion=_systemBuildVersion;
@property(readonly, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, nonatomic) NSUUID *pairingID; // @synthesize pairingID=_pairingID;
@property(readonly, copy, nonatomic) NSString *pairingStorePath; // @synthesize pairingStorePath=_pairingStorePath;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBCodable *stateForLogging;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_updateStateFlagsPostingNotifications:(_Bool)arg1;
- (void)_updateCachedStateForProperty:(id)arg1;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)findMatchingIDSDeviceFromList:(id)arg1;
@property(readonly, nonatomic) _Bool supportsFileTransferMessageSend;
@property(readonly, nonatomic) long long deviceCode;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
@property(readonly, nonatomic, getter=isTargetable) _Bool targetable;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNRDevice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

