//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPRelayPairingClient.h>

#import <HomeKitDaemon/HMDRelayManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMDRelayManager, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDRelayPairingClient : HAPRelayPairingClient <HMDRelayManagerDelegate, HMFLogging>
{
    HMDRelayManager *_relayManager;
    HMDAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

+ (id)logCategory;
+ (id)accessoryBagURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) __weak HMDRelayManager *relayManager; // @synthesize relayManager=_relayManager;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2;
- (void)requestControllerIdentifier;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (void)open;
- (id)accessoryBagURL;
- (id)initWithRelayManager:(id)arg1 accessory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

