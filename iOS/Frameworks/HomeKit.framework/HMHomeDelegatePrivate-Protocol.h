//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMHomeDelegate-Protocol.h>

@class CLLocation, HMAccessory, HMActionSet, HMHome, HMMediaSystem, HMResidentDevice, HMRoom, HMServiceGroup, HMUser, NSArray, NSString;

@protocol HMHomeDelegatePrivate <HMHomeDelegate>

@optional
- (void)home:(HMHome *)arg1 didUpdateReprovisionStateForAccessory:(HMAccessory *)arg2;
- (void)home:(HMHome *)arg1 didRemoveMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didAddMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPassword:(NSString *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didEnableNotifications:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessControlForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLastExecutionDateForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForRoom:(HMRoom *)arg2;
- (void)homeDidUpdateApplicationData:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didUpdateAccesoryInvitationsForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateStateForOutgoingInvitations:(NSArray *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)home:(HMHome *)arg1 didRemoveResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didAddResidentDevice:(HMResidentDevice *)arg2;
@end

