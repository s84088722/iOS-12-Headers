//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKAppInstallationWatcherObserver-Protocol.h>

@class CKPreviewDispatchCache, IMBalloonPlugin, NSArray, NSCache, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol CKExtensionConsumer;

@interface CKBalloonPluginManager : NSObject <CKAppInstallationWatcherObserver>
{
    NSArray *_appStripCandidatePlugins;
    NSArray *_visibleAppStripPlugins;
    NSArray *_visibleSwitcherPlugins;
    NSArray *_recentAppStripPlugins;
    NSArray *_visibleRecentAppStripPlugins;
    _Bool _isAppInstallationEnabled;
    _Bool _isAppRemovalEnabled;
    _Bool _isCameraAllowed;
    _Bool _appStoreAutoEnableToggled;
    _Bool _keepingEmptySections;
    _Bool _isAppInstallationObserver;
    NSString *_lastLaunchedIdentifier;
    id <CKExtensionConsumer> _currentExtensionConsumer;
    IMBalloonPlugin *_lastViewedPlugin;
    NSArray *_visiblePlugins;
    NSArray *_cachedPotentiallyVisiblePlugins;
    NSArray *_favoriteAppStripPlugins;
    NSDictionary *_pluginVersionMap;
    NSDictionary *_pluginSeenMap;
    NSDictionary *_pluginIndexPathMap;
    NSMutableDictionary *_historicalPluginIndexPathMap;
    NSMutableArray *_MRUPluginInteractionList;
    NSDictionary *_pluginLaunchTimeMap;
    NSArray *_allPlugins;
    long long _numberOfSectionsToKeep;
    NSMutableArray *_visibleInstallations;
    NSSet *_oldVisibleSwitcherPluginIdentifiers;
    NSCache *_iconCache;
    CKPreviewDispatchCache *_snapshotCache;
    NSMutableDictionary *_activeBrowsers;
}

+ (id)defaultFavoritePlugins;
+ (id)morePlugin;
+ (id)recentPlugin;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *activeBrowsers; // @synthesize activeBrowsers=_activeBrowsers;
@property(retain, nonatomic) CKPreviewDispatchCache *snapshotCache; // @synthesize snapshotCache=_snapshotCache;
@property(retain, nonatomic) NSCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) NSSet *oldVisibleSwitcherPluginIdentifiers; // @synthesize oldVisibleSwitcherPluginIdentifiers=_oldVisibleSwitcherPluginIdentifiers;
@property(nonatomic) _Bool isAppInstallationObserver; // @synthesize isAppInstallationObserver=_isAppInstallationObserver;
@property(retain, nonatomic) NSMutableArray *visibleInstallations; // @synthesize visibleInstallations=_visibleInstallations;
@property(nonatomic) long long numberOfSectionsToKeep; // @synthesize numberOfSectionsToKeep=_numberOfSectionsToKeep;
@property(nonatomic, getter=isKeepingEmptySections) _Bool keepingEmptySections; // @synthesize keepingEmptySections=_keepingEmptySections;
@property(retain, nonatomic) NSArray *allPlugins; // @synthesize allPlugins=_allPlugins;
@property(retain, nonatomic) NSDictionary *pluginLaunchTimeMap; // @synthesize pluginLaunchTimeMap=_pluginLaunchTimeMap;
@property(retain, nonatomic) NSMutableArray *MRUPluginInteractionList; // @synthesize MRUPluginInteractionList=_MRUPluginInteractionList;
@property(retain, nonatomic) NSMutableDictionary *historicalPluginIndexPathMap; // @synthesize historicalPluginIndexPathMap=_historicalPluginIndexPathMap;
@property(retain, nonatomic) NSDictionary *pluginIndexPathMap; // @synthesize pluginIndexPathMap=_pluginIndexPathMap;
@property(retain, nonatomic) NSDictionary *pluginSeenMap; // @synthesize pluginSeenMap=_pluginSeenMap;
@property(retain, nonatomic) NSDictionary *pluginVersionMap; // @synthesize pluginVersionMap=_pluginVersionMap;
@property(retain, nonatomic) NSArray *favoriteAppStripPlugins; // @synthesize favoriteAppStripPlugins=_favoriteAppStripPlugins;
@property(retain, nonatomic) NSArray *visibleSwitcherPlugins; // @synthesize visibleSwitcherPlugins=_visibleSwitcherPlugins;
@property(retain, nonatomic) NSArray *cachedPotentiallyVisiblePlugins; // @synthesize cachedPotentiallyVisiblePlugins=_cachedPotentiallyVisiblePlugins;
@property(retain, nonatomic) NSArray *visiblePlugins; // @synthesize visiblePlugins=_visiblePlugins;
@property(nonatomic, getter=isAppStoreAutoEnableToggled) _Bool appStoreAutoEnableToggled; // @synthesize appStoreAutoEnableToggled=_appStoreAutoEnableToggled;
@property(nonatomic) _Bool isCameraAllowed; // @synthesize isCameraAllowed=_isCameraAllowed;
@property(nonatomic) _Bool isAppRemovalEnabled; // @synthesize isAppRemovalEnabled=_isAppRemovalEnabled;
@property(nonatomic) _Bool isAppInstallationEnabled; // @synthesize isAppInstallationEnabled=_isAppInstallationEnabled;
@property(nonatomic) __weak IMBalloonPlugin *lastViewedPlugin; // @synthesize lastViewedPlugin=_lastViewedPlugin;
@property(nonatomic) __weak id <CKExtensionConsumer> currentExtensionConsumer; // @synthesize currentExtensionConsumer=_currentExtensionConsumer;
@property(retain, nonatomic) NSString *lastLaunchedIdentifier; // @synthesize lastLaunchedIdentifier=_lastLaunchedIdentifier;
- (void).cxx_destruct;
- (_Bool)isPluginVisible:(id)arg1;
- (void)handleManagedConfigSettingsChangeNotification:(id)arg1;
@property(readonly, nonatomic) _Bool isAppStoreEnabled;
- (unsigned long long)unseenPluginCount;
- (void)cleanSeenMap;
- (void)_setSeen:(_Bool)arg1 forPlugin:(id)arg2;
- (void)setSeen:(_Bool)arg1 forPlugin:(id)arg2;
- (_Bool)isPluginSeenWithInstalledVersion:(id)arg1;
- (_Bool)isPluginSeen:(id)arg1;
- (unsigned long long)badgeValueForPlugin:(id)arg1;
- (id)launchTimeForPlugin:(id)arg1;
- (void)updateLaunchTimeForPlugin:(id)arg1;
- (id)lastLaunchedPlugin;
- (long long)lastViewedPluginIndex;
- (void)updateLaunchStatus:(unsigned long long)arg1 forPlugin:(id)arg2 withNotification:(_Bool)arg3;
- (unsigned long long)launchStatusForPlugin:(id)arg1;
@property(readonly, nonatomic) NSArray *disabledPlugins;
- (id)allPluginsPassingTest:(CDUnknownBlockType)arg1;
- (id)createFakeAppsForPPTTesting:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *allEnabledPlugins;
@property(readonly, nonatomic) _Bool hasLoadedExtensions;
- (_Bool)isInternalPlugin:(id)arg1;
- (void)invalidateIconCache;
- (id)pluginForIdentifier:(id)arg1;
- (id)balloonPluginIdentifierForAppExtensionBundleIdentifier:(id)arg1;
- (void)saveWithNotification:(_Bool)arg1;
- (_Bool)_shouldForceRegenerateIndexPathMap;
- (id)_decodeIndexPathMap:(id)arg1;
- (id)_encodeIndexPathMap:(id)arg1;
- (_Bool)isPluginEnabled:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forPlugin:(id)arg2;
- (void)_updateHistoricalPluginIndexPathMap;
- (void)commitInteractionTimeOrderingChanges;
- (void)updateInteractionTimeForPlugin:(id)arg1;
- (void)removeAppWithIdentifier:(id)arg1;
- (void)_disableAppWithBalloonIdentifier:(id)arg1;
- (void)_addAppWithBalloonIdentifier:(id)arg1;
- (_Bool)_shouldUninstallContainingBundle:(id)arg1;
- (void)healthStickerStatusChanged;
- (struct __CFString *)healthKitAchievementAvailabilityChangedNotification;
- (void)reloadInstalledApps:(id)arg1;
- (void)refreshPlugins;
- (void)dealloc;
- (id)init;
- (id)viewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;
- (id)existingViewControllerForPluginIdentifier:(id)arg1;
- (id)viewControllerForPluginIdentifier:(id)arg1;
- (id)newViewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;
- (void)updateSnapshotForBrowserViewController:(id)arg1 currentBounds:(struct CGRect)arg2;
- (id)browserSnapshotForKey:(id)arg1;
- (void)_invalidatePluginForKey:(id)arg1;
- (void)invalidateAllActivePluginsSkippingCameraApp:(_Bool)arg1;
- (void)invalidateAllActivePlugins;
- (void)invalidateAllActiveSwitcherPlugins;
- (void)forceTearDownRemoteViewsSkippingCameraApp:(_Bool)arg1;
- (void)forceKillNonCameraRemoteExtensionsImmediately;
- (void)forceKillRemoteExtensionsWithDelay:(_Bool)arg1 skipCameraApp:(_Bool)arg2;
- (void)forceKillRemoteExtensionsWithDelay:(_Bool)arg1;
- (void)prepareForSuspend;
- (_Bool)isViewController:(id)arg1 fromPluginWithIdentifier:(id)arg2;
- (id)handwritingViewControllerWithPluginPayloads:(id)arg1;
- (id)digitalTouchViewControllerWithDataSource:(id)arg1;
- (id)existingPhotoBrowserViewController;
- (id)photosBrowserViewControllerWithPluginPayloads:(id)arg1;
- (void)invalidatePhotosPlugin;
- (id)descriptionOfVisibleDrawerPlugins;
- (void)removeVisibleInstallationWithID:(id)arg1;
- (_Bool)isEnabledAndVisible:(id)arg1;
- (void)updateIndexPath:(id)arg1 forPlugin:(id)arg2 isDrawerPluginPath:(_Bool)arg3;
- (void)regeneratePluginIndexPaths;
- (_Bool)_addPluginToRecentsFrontIfNeeded:(id)arg1 frontOfRecents:(id)arg2 pluginMap:(id)arg3 fallbackMap:(id)arg4;
- (id)_pluginIndexPathForFavoritePluginWithIdentifier:(id)arg1 pluginMap:(id)arg2 fallbackMap:(id)arg3;
- (id)orderedPlugins:(_Bool)arg1;
- (id)allPotentiallyVisiblePlugins;
@property(readonly, nonatomic) NSArray *potentiallyVisibleNonFavoritePlugins;
@property(readonly, nonatomic) NSArray *potentiallyVisiblePlugins;
@property(readonly, nonatomic) NSArray *visibleRecentAppStripPlugins;
@property(readonly, nonatomic) NSArray *recentAppStripPlugins;
@property(readonly, nonatomic) NSArray *visibleFavoriteAppStripPlugins;
@property(readonly, nonatomic) NSArray *visibleDrawerPlugins;
- (id)candidateAppStripPlugins;
- (id)filteredArrayOfInstallationsThatShouldBeVisible:(id)arg1;
- (void)_refreshVisibleDrawerPluginsDueToAppInstallationChange;
- (void)updateAppInstallations;
- (void)appInstallationWatcher:(id)arg1 addedAppInstallation:(id)arg2;
- (void)appInstallationWatcher:(id)arg1 changedAppInstallation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

