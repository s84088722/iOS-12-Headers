//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class BBBulletin, NSString;
@protocol NNMKSyncStateManager;

@protocol NNMKSyncStateManagerDelegate <NSObject>
- (void)syncStateManager:(id <NNMKSyncStateManager>)arg1 didAcknowledgeForwardNotificationPayload:(void (^)(_Bool))arg2 forBulletin:(BBBulletin *)arg3;
- (void)syncStateManagerDidInvalidateSyncSession:(id <NNMKSyncStateManager>)arg1 syncSessionIdentifier:(NSString *)arg2;
- (void)syncStateManagerDidBeginSyncSession:(id <NNMKSyncStateManager>)arg1 syncSessionType:(NSString *)arg2 syncSessionIdentifier:(NSString *)arg3;
- (void)syncStateManagerDidChangePairedDevice:(id <NNMKSyncStateManager>)arg1;
- (void)syncStateManagerDidUnpair:(id <NNMKSyncStateManager>)arg1;
@end

