//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Radio/NSObject-Protocol.h>

@class MCProfileConnection, NSDictionary;

@protocol MCProfileConnectionObserver <NSObject>

@optional
- (void)profileConnectionDidReceiveAppWhitelistChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceiveDefaultsChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
@end

