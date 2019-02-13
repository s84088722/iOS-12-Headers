//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SSRemoteNotification;

@interface PushNotificationDisplayOperation : ISOperation
{
    SSRemoteNotification *_notification;
}

+ (_Bool)_shouldUseBulletinBoardForNotification:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_URLHandlerExists;
- (void)_playSound;
- (void)_performNotificationAction:(_Bool)arg1;
- (void)_openNotificationURL;
- (long long)_notificationClass;
- (void)_loadNotificationDownloadManifest;
- (unsigned long long)_dndInterruptionSuppression;
- (void)_displayBadge;
- (void)_displayAlert;
- (id)_clientIdentifierForDownloadKinds:(id)arg1;
- (_Bool)_clientExistsWithIdentifier:(id)arg1;
- (void)run;
@property(readonly) _Bool requiresClientIdentifier;
@property(readonly) NSDictionary *notificationUserInfo;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)init;

@end

