//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HFAccessoryBrowsingManager, HMAccessory, SFDevice;

@protocol HFAccessoryBrowsingObserver <NSObject>
- (void)accessoryBrowsingManager:(HFAccessoryBrowsingManager *)arg1 didRemoveNewSharingDevice:(SFDevice *)arg2;
- (void)accessoryBrowsingManager:(HFAccessoryBrowsingManager *)arg1 didFindNewSharingDevice:(SFDevice *)arg2;
- (void)accessoryBrowsingManager:(HFAccessoryBrowsingManager *)arg1 didRemoveNewAccessory:(HMAccessory *)arg2;
- (void)accessoryBrowsingManager:(HFAccessoryBrowsingManager *)arg1 didFindNewAccessory:(HMAccessory *)arg2;
@end
