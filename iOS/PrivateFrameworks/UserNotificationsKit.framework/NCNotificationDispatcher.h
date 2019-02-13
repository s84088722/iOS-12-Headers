//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/NCNotificationAlertDestinationDelegate-Protocol.h>
#import <UserNotificationsKit/NCNotificationDestinationDelegate-Protocol.h>

@class NCNotificationAlertQueue, NCNotificationDestinationsRegistry, NCNotificationStore, NSHashTable, NSMutableDictionary, NSString;
@protocol NCAlertingController, NCNotificationDispatcherDelegate;

@interface NCNotificationDispatcher : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate>
{
    id <NCNotificationDispatcherDelegate> _delegate;
    NCNotificationDestinationsRegistry *_destinationsRegistry;
    NCNotificationStore *_notificationStore;
    NCNotificationAlertQueue *_alertQueue;
    NSMutableDictionary *_sectionSettings;
    NSHashTable *_sourceDelegates;
    id <NCAlertingController> _alertingController;
}

@property(retain, nonatomic) id <NCAlertingController> alertingController; // @synthesize alertingController=_alertingController;
@property(retain, nonatomic) NSHashTable *sourceDelegates; // @synthesize sourceDelegates=_sourceDelegates;
@property(retain, nonatomic) NSMutableDictionary *sectionSettings; // @synthesize sectionSettings=_sectionSettings;
@property(retain, nonatomic) NCNotificationAlertQueue *alertQueue; // @synthesize alertQueue=_alertQueue;
@property(retain, nonatomic) NCNotificationStore *notificationStore; // @synthesize notificationStore=_notificationStore;
@property(retain, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry; // @synthesize destinationsRegistry=_destinationsRegistry;
@property(nonatomic) __weak id <NCNotificationDispatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setNotificationLayoutsInProgress:(id)arg1;
- (id)_notificationLayoutsInProgress;
- (void)_removeNotificationRequestFromLayoutsInProgress:(id)arg1;
- (void)_addNotificationRequestToLayoutsInProgress:(id)arg1;
- (_Bool)_layoutsInProgressContainsNotificationRequest:(id)arg1;
- (void)_clearUnsafeNotification:(id)arg1;
- (void)_didRemoveNotificationRequest:(id)arg1;
- (void)_didPostNotificationRequest:(id)arg1;
- (void)_willPostNotificationRequest:(id)arg1;
- (_Bool)_shouldPostNotificationRequest:(id)arg1;
- (void)_performOperationForRequestDestinations:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(_Bool)arg3;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(CDUnknownBlockType)arg2;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
- (void)destination:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setDeliverQuietly:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setAllowsNotifications:(_Bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeDispatcherSourceDelegate:(id)arg1;
- (void)addDispatcherSourceDelegate:(id)arg1;
- (_Bool)_isRegisteredDestination:(id)arg1;
- (void)_registerAlertDestination:(id)arg1;
- (void)_registerDestination:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(_Bool)arg2;
- (void)unregisterDestination:(id)arg1;
- (void)registerDestination:(id)arg1;
- (void)removeNotificationSectionWithIdentifier:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationWithRequest:(id)arg1;
- (void)modifyNotificationWithRequest:(id)arg1;
- (void)postNotificationWithRequest:(id)arg1;
- (id)initWithAlertingController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

