//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUI/NSObject-Protocol.h>

@protocol _UNNotificationContentExtensionLegacy;

@protocol _UNNotificationContentExtensionLegacyDelegate <NSObject>
- (void)notificationContentExtensionDismiss:(id <_UNNotificationContentExtensionLegacy>)arg1;
- (void)notificationContentExtension:(id <_UNNotificationContentExtensionLegacy>)arg1 setDismissEnabled:(_Bool)arg2;
@end
