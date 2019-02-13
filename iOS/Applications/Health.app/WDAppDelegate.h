//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "HKProfileIconObserver-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UIApplicationTestingDelegate-Protocol.h"
#import "WDFavoriteDisplayTypesControllerObserver-Protocol.h"
#import "WDIntroFlowManagerDelegate-Protocol.h"

@class HKNavigationController, NSString, UIWindow, WDHealthDataViewController, WDIntroFlowManager, WDProfile, WDTabBarController, WDTodayViewController;

@interface WDAppDelegate : UIResponder <UIApplicationTestingDelegate, HKProfileIconObserver, WDFavoriteDisplayTypesControllerObserver, WDIntroFlowManagerDelegate, UIApplicationDelegate>
{
    WDProfile *_profile;
    WDIntroFlowManager *_introFlowManager;
    HKNavigationController *_profileNavigationController;
    HKNavigationController *_medicalIDNavigationController;
    HKNavigationController *_sourcesNavigationController;
    WDTabBarController *_tabBarController;
    WDHealthDataViewController *_healthDataViewController;
    WDTodayViewController *_todayViewController;
    UIWindow *_window;
}

+ (id)currentDelegate;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_postAWDMetricForUsingDeepLink;
- (void)_postAWDMetricForFinishedAddingAccount;
- (void)_postAWDOnboardingMetricForType:(int)arg1;
- (id)_storeDemoModeFavoriteDisplayTypes;
- (void)favoriteDisplayTypesControllerReady:(id)arg1;
- (void)resetStoreDemoModeFavorites;
- (void)restoreStoreDemoModeFavoritesIfNeeded;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_restoreApplicationStateWithUserActivity:(id)arg1;
- (_Bool)_restoreApplicationStateWithOnboardingUserActivity:(id)arg1;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)didTapProfileIcon;
- (void)presentProfileViewController;
- (void)_configureUserActivityPolicies;
- (void)_configureNotificationPolicies;
- (void)_buildUIWithProfile:(id)arg1;
- (void)_restoreToBaseStateAndSelectTabAtIndex:(long long)arg1;
- (id)introFlowManager;
- (id)tabBarController;
- (_Bool)_openURL:(id)arg1 options:(id)arg2;
- (void)openHealthAppURL:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (_Bool)landscapeChartAnimationTest;
- (_Bool)todayViewScrollTest;
- (_Bool)categoryViewScrollTest:(long long)arg1;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

