//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, HDXPCListener, NSArray, NSString, Protocol, _HKBehavior;
@protocol HDHealthDaemonReadyObserver, HDNanoAlertSuppressionService;

@protocol HDHealthDaemon <NSObject>
@property(readonly, nonatomic) _HKBehavior *behavior;
@property(retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService;
@property(readonly, nonatomic) HDPrimaryProfile *primaryProfile;
@property(readonly) HDPluginManager *pluginManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
- (NSArray *)daemonExtensionsConformingToProtocol:(Protocol *)arg1;
- (id)daemonExtensionWithIdentifier:(NSString *)arg1;
- (HDXPCListener *)createXPCListenerWithMachServiceName:(NSString *)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
@end

