//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFDiscoveredAccessory, HFSetupAccessoryResult, HMAccessorySetupCompletedInfo, HMHome, HMSetupAccessoryDescription, NAFuture, NSSet, NSString;
@protocol HFSetupPairingObserver;

@protocol HFSetupPairingController <NSObject>
+ (_Bool)supportsSetupPayloadRetry;
@property(readonly, nonatomic) HMAccessorySetupCompletedInfo *completedInfo;
@property(readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property(readonly, nonatomic) NSString *statusDescription;
@property(readonly, nonatomic) NSString *statusTitle;
@property(readonly, nonatomic) unsigned long long phase;
@property(readonly, nonatomic) HMHome *home;
@property(retain, nonatomic) HFSetupAccessoryResult *setupResult;
@property(readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription;
- (NSSet *)pairedAccessories;
- (NAFuture *)cancel;
- (void)startWithHome:(HMHome *)arg1;
- (void)removePairingObserver:(id <HFSetupPairingObserver>)arg1;
- (void)addPairingObserver:(id <HFSetupPairingObserver>)arg1;
@end

