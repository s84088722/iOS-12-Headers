//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UNSCriticalAlertAuthorizationAlertController, UNSDefaultDataProviderFactory, UNSNotificationAuthorizationAlertController;
@protocol OS_dispatch_queue;

@interface UNSNotificationSettingsService : NSObject
{
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (_Bool)_queue_isCarPlayAvailableForApplication:(id)arg1;
- (void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 topics:(id)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_queue_requestAuthorizationWithTopics:(id)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationWithTopics:(id)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDataProviderFactory:(id)arg1;

@end

