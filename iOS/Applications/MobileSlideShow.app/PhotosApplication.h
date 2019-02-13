//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibrary/PLPhotosApplication.h>

#import "PHImportDelegate-Protocol.h"
#import "PXNotificationSuppressionContextManager-Protocol.h"
#import "PXSettingsKeyObserver-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class CAMNebulaDaemonProxyManager, NSMutableArray, NSSet, NSString, PUImportViewController, PUTabbedLibraryViewController, PhotosAppSpec, PhotosURLNavigationRequest, UIAlertView;

@interface PhotosApplication : PLPhotosApplication <UITabBarControllerDelegate, PHImportDelegate, PXSettingsKeyObserver, UNUserNotificationCenterDelegate, PXNotificationSuppressionContextManager>
{
    PhotosAppSpec *_spec;
    PUTabbedLibraryViewController *_tabbedLibraryViewController;
    PUImportViewController *_importController;
    PhotosURLNavigationRequest *_pendingNavigationRequest;
    NSMutableArray *_importDeviceQueue;
    UIAlertView *_phoneFailureAlertView;
    _Bool _pendingPromptCheck;
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;
}

@property(retain, nonatomic, setter=_setNebulaDaemonProxyManager:) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // @synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager;
- (void).cxx_destruct;
- (void)keyValueStoreDidChange:(id)arg1;
- (void)performNebuladCrashRecoveryIfNeededForceEndLastTimelapseSession:(_Bool)arg1;
- (void)removedImportSource:(id)arg1;
- (void)addedImportSource:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_showWelcomeViewControllersIfNecessary;
- (void)_showSyncReminderPromptIfNecessary;
- (void)_showCPLOverQuotaPromptIfNecessary;
- (void)_showCloudPhotoLibraryExitPromptIfNecessary;
- (void)_beginiPhotoMigration;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;
- (void)_dequeueNextImportDevice;
- (id)_newImportViewController;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (void)application:(id)arg1 userDidAcceptCloudKitShareWithMetadata:(id)arg2;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)applicationOpenURL:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_displayAndRemovePhoneInvitationFailures;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)contentViewController;
- (void)setupAppUI:(_Bool)arg1;
- (void)sharedFinishedLaunching:(_Bool)arg1;
- (void)_showNetworkPromptIfNecessary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSSet *notificationSuppressionContexts;
@property(readonly) Class superclass;

@end

