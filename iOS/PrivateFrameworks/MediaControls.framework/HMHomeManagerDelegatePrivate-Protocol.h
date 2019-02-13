//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaControls/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, NSArray;

@protocol HMHomeManagerDelegatePrivate <HMHomeManagerDelegate>

@optional
- (void)homeManagerDidEndBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManagerWillStartBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateThisDeviceIsResidentCapable:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAccessAllowedWhenLocked:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateResidentEnabledForThisDevice:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateDataSyncState:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateDataSyncInProgress:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateCurrentHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateApplicationData:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStateForIncomingInvitations:(NSArray *)arg2;
@end

