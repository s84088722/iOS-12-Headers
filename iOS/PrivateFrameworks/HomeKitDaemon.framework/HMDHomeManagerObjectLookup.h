//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDObjectLookup.h>

#import <HomeKitDaemon/HMDObjectLookupScanProtocol-Protocol.h>

@class HMDHomeManager, NSString;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol>
{
    HMDHomeManager *_homeManager;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void).cxx_destruct;
- (void)_scanAccounts;
- (void)_scanCloudZones;
- (void)_scanHomes;
- (void)scanObjects;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

