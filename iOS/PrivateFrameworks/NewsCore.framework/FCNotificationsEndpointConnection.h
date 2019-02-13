//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCEndpointConnection.h>

@class FCFileCoordinatedNotificationDropbox, NSString;

@interface FCNotificationsEndpointConnection : FCEndpointConnection
{
    NSString *_deviceType;
    NSString *_deviceOSVersion;
    FCFileCoordinatedNotificationDropbox *_fileCoordinatedNotificationDropbox;
}

@property(retain, nonatomic) FCFileCoordinatedNotificationDropbox *fileCoordinatedNotificationDropbox; // @synthesize fileCoordinatedNotificationDropbox=_fileCoordinatedNotificationDropbox;
@property(copy, nonatomic) NSString *deviceOSVersion; // @synthesize deviceOSVersion=_deviceOSVersion;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
- (void).cxx_destruct;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (id)_notificationDataInDropbox;
- (void)_updateNotificationDropboxDataWithBaseURL:(id)arg1 notificationUserID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4;
- (id)_notificationEntityWithChannelIDs:(id)arg1 isPaid:(_Bool)arg2;
- (id)_deviceInfoWithDeviceToken:(id)arg1;
- (id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5;
- (void)_sendNotificationsSubscriptionRequest:(id)arg1 pathComponent:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)unsubscribeNotificationsForChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)subscribeNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)unregisterDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)registerDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithBaseURLString:(id)arg1;
- (id)initWithConfigurationManager:(id)arg1;

@end

