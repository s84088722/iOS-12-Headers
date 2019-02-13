//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, UNSApplicationLauncher;
@protocol OS_dispatch_queue;

@interface UNSApplicationService : NSObject
{
    NSMutableSet *_foregroundBundleIdentifiers;
    NSMutableSet *_installedBundleIdentifiers;
    NSMutableDictionary *_bundleIdentifierToBundleURL;
    UNSApplicationLauncher *_applicationLauncher;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isApplicationForeground:(id)arg1;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (id)initWithApplicationLauncher:(id)arg1;

@end

