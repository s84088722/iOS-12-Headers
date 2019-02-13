//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUServiceGridItemManager.h>

#import "HFAccessoryBrowsingObserver-Protocol.h"

@class HFAccessoryBrowsingManager, NSString;

@interface HSDiscoveredAccessoryGridContentItemManager : HUServiceGridItemManager <HFAccessoryBrowsingObserver>
{
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;
}

@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
- (void).cxx_destruct;
- (void)_reloadDiscoveredAccessoryItemProviderWithSenderSelector:(SEL)arg1;
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewSharingDevice:(id)arg2;
- (void)accessoryBrowsingManager:(id)arg1 didFindNewSharingDevice:(id)arg2;
- (void)accessoryBrowsingManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryBrowsingManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (void)_unregisterForExternalUpdates;
- (void)_registerForExternalUpdates;
- (id)initWithAccessoryBrowsingManager:(id)arg1 delegate:(id)arg2 discoveredAccessoryFilter:(id)arg3;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

