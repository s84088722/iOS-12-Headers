//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKAuthorizationRequestRecord, HKObjectAuthorizationPromptSession, NSUUID;

@protocol HKHealthStoreClientInterface <NSObject>
- (void)clientRemote_waitOnHealthCloudSyncWithProgressDidStartWithUUID:(NSUUID *)arg1;
- (void)clientRemote_unitPreferencesDidUpdate;
- (void)clientRemote_presentAuthorizationWithSession:(HKObjectAuthorizationPromptSession *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)clientRemote_presentAuthorizationWithRequestRecord:(HKAuthorizationRequestRecord *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
