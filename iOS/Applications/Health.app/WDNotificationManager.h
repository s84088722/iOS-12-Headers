//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class HKHealthStore, NSMutableDictionary, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface WDNotificationManager : NSObject <UNUserNotificationCenterDelegate>
{
    UNUserNotificationCenter *_notificationCenter;
    HKHealthStore *_healthStore;
    NSMutableDictionary *_domainsToPolicies;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

+ (void)initialize;
+ (void)setSuppressBadgeNotifications:(_Bool)arg1;
+ (_Bool)suppressBadgeNotifications;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_resourceQueue_policyForNotification:(id)arg1;
- (CDUnknownBlockType)_completionOnMainQueue:(CDUnknownBlockType)arg1;
- (void)setPolicy:(id)arg1 forDomain:(long long)arg2;
- (void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1;
- (void)resetHealthRecordsDataBadge;
- (void)resetEmergencySOSBadge;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

