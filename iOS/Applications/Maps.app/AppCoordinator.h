//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsActivityContainerViewControllerDelegate-Protocol.h"
#import "MapsActivityViewControllerDelegate-Protocol.h"
#import "PPTTestCoordinatorProtocol-Protocol.h"
#import "ParkedCarActionDelegate-Protocol.h"
#import "PlaceCardActionDelegate-Protocol.h"
#import "ShareDelegate-Protocol.h"

@class AnalyticsMonitor, AppStateManager, BaseModeController, IOSChromeViewController, NSString, NavModeController, PedestrianNavModeController, RidesharingModeController, StepModeController, UINavigationController;
@protocol ActionCoordination, FlyoverActionCoordination, NavActionCoordination, StepActionCoordination;

__attribute__((visibility("hidden")))
@interface AppCoordinator : NSObject <PPTTestCoordinatorProtocol, MapsActivityContainerViewControllerDelegate, MapsActivityViewControllerDelegate, ShareDelegate, PlaceCardActionDelegate, ParkedCarActionDelegate>
{
    UINavigationController *_shareViewController;
    AnalyticsMonitor *_analyticsMonitor;
    id _lockScreenWindowObservingToken;
    CDUnknownBlockType _shareCompletion;
    CDUnknownBlockType _fixedProblemCompletion;
    BaseModeController *_baseModeController;
    NavModeController *_navModeController;
    PedestrianNavModeController *_pedestrianNavModeController;
    RidesharingModeController *_ridesharingModeController;
    AppStateManager *_appStateManager;
    IOSChromeViewController *_iosChromeViewController;
    StepModeController *_stepModeController;
    id <FlyoverActionCoordination> _flyoverActionCoordinator;
}

@property(readonly, nonatomic) id <FlyoverActionCoordination> flyoverActionCoordinator; // @synthesize flyoverActionCoordinator=_flyoverActionCoordinator;
@property(readonly, nonatomic) StepModeController *stepModeController; // @synthesize stepModeController=_stepModeController;
@property(nonatomic) __weak IOSChromeViewController *iosChromeViewController; // @synthesize iosChromeViewController=_iosChromeViewController;
@property(retain, nonatomic) AppStateManager *appStateManager; // @synthesize appStateManager=_appStateManager;
@property(readonly, nonatomic) RidesharingModeController *ridesharingModeController; // @synthesize ridesharingModeController=_ridesharingModeController;
- (void).cxx_destruct;
- (void)pptTestSelectVenueSearchResult:(id)arg1;
- (void)pptTestPresentVenueForMapItem:(id)arg1 searchCategory:(id)arg2;
- (void)pptTestPresentPlacecardWithMapItem:(id)arg1;
- (id)_pptChromeTrayCoordinatorForCurrentMode;
- (id)pptTestScrollView;
- (void)pptTestDismissTrayAnimated:(_Bool)arg1 assertTrayType:(long long)arg2;
- (_Bool)pptTestIsTrayType:(long long)arg1;
- (void)pptTestUpdateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2;
- (_Bool)pptTestCanUpdateTrayLayout;
- (id)pptTestScrollViewForProactive;
- (void)pptTestOpenSettings;
- (void)pptTestStartTracePlayer:(id)arg1;
- (void)pptTestMoveToNextStep;
- (_Bool)pptTestHasNextStep;
- (long long)pptTestCurrentStepIndex;
- (_Bool)pptTestSupportStepping;
- (void)pptTestOpenCommuteEntry:(id)arg1;
- (void)pptTestTransitionBetweenFullAndLightGuidance;
- (void)pptTestEndNavigation;
- (void)pptTestStartNavigation;
- (void)pptTestDoDirectionItem:(id)arg1;
- (id)pptTestScrollViewForDirectionsDetails;
- (id)pptTestContaineeForDirectionsDetails;
- (void)pptTestPresentDirectionsDetails;
- (void)setPPTTestDirectionsPlan:(id)arg1;
- (void)pptTestCreateCustomSearchResultForDroppedPinAtPoint:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)pptTestSearchCancel;
- (void)pptTestEnterSearchMode;
- (void)pptTestRefreshSearch;
- (void)pptTestSearchForFieldItem:(id)arg1;
- (void)pptTestSearchEndEditing;
- (void)pptTestAutocompleteSearchForFieldItem:(id)arg1;
- (void)pptTestSearchNearByCategoryWithIndex:(unsigned long long)arg1;
- (void)pptTestSearchRetainQueryForSelectedSearchCompletion:(id)arg1;
- (void)pptTestMediumizePlaceCardAnimated:(_Bool)arg1;
- (void)pptTestMinimizePlaceCardAnimated:(_Bool)arg1;
- (void)pptTestMaxiumizePlaceCardAnimated:(_Bool)arg1;
- (_Bool)pptTestCanResizePlacecard;
- (void)pptTestPresentPlaceCardForSearchResult:(id)arg1 animated:(_Bool)arg2;
- (void)pptTestResetForLaunchURL;
- (void)setPPTTestViewMode:(long long)arg1 animated:(_Bool)arg2;
- (id)mapViewForPPTTest;
- (id)testCoordinator;
- (void)_displayOrScheduleDisplayOfEnqueuedFixedProblemInvokedAfterWait:(_Bool)arg1;
- (void)displayAnyEnqueuedFixedProblemNotification;
- (void)displayOrScheduleDisplayOfEnqueuedFixedProblem:(CDUnknownBlockType)arg1;
- (void)mapsActivityViewController:(id)arg1 activityCompleted:(_Bool)arg2;
- (void)mapsActivityViewControllerPresentRoutingApps:(id)arg1;
- (void)mapsActivityViewControllerPrint:(id)arg1;
- (id)mapsActivityMapView;
- (void)dismissShareIfNeededAnimated:(_Bool)arg1;
- (void)mapsActivityContainerViewControllerCancel:(id)arg1 animated:(_Bool)arg2;
- (void)archiveMapsActivity;
- (void)editLocationForParkedCar:(id)arg1;
- (void)startTableBookingFlowFromMapItem:(id)arg1;
- (void)editAddressFromPlaceCardItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)nameLocationFromPlaceCardItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exitFlyover;
- (void)enterFlyoverForMapItem:(id)arg1;
- (void)hideFullscreenDirectionsList;
- (void)showFullscreenDirectionsList;
- (void)dismissRidesharingSessionAndReturnToRoutePlanning:(_Bool)arg1;
- (void)continueRideBookingSessionWithApplicationIdentifier:(struct NSString *)arg1;
- (void)startRideBookingSessionWithRideBookingRideOption:(id)arg1;
- (void)endSteppingAndReturnToRoutePlanning:(_Bool)arg1;
- (void)startSteppingWithRoute:(id)arg1 userInfo:(id)arg2 directionsOptions:(long long)arg3;
@property(readonly, nonatomic) id <StepActionCoordination> stepActionCoordinator;
- (void)_presentHandoffAlertForDestination:(id)arg1;
- (void)_handoffDestinationToExternalDevice:(id)arg1;
- (_Bool)_carplayDestinationHandoffRequiredForRoute:(id)arg1;
- (void)_popNavMode;
- (_Bool)applyPendingActionIfNeeded;
- (void)_popNavModeWhenLockScreenWindowIsHidden;
- (void)endNavigationWithForceResetDirectionsManager:(_Bool)arg1;
- (void)endNavigation;
- (void)willDismissNavigationTrayWhenNavigationWillEnd;
- (void)willPresentNavigationTrayWhenNavigationDidStart;
- (void)startNavigationWithRoute:(id)arg1 navigationType:(unsigned long long)arg2 options:(long long)arg3;
- (void)startNavigationWithRoute:(id)arg1 navigationType:(unsigned long long)arg2;
- (void)startNavigationWithRoute:(id)arg1;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator;
@property(readonly, nonatomic) PedestrianNavModeController *pedestrianNavModeController; // @synthesize pedestrianNavModeController=_pedestrianNavModeController;
@property(readonly, nonatomic) NavModeController *navModeController; // @synthesize navModeController=_navModeController;
- (void)switchToDrivingDirectionsForCarPlay;
- (void)endSteppingAndNavigation;
- (void)openSearch:(id)arg1 andResults:(id)arg2;
- (void)startSearchMode;
@property(readonly, nonatomic) id <ActionCoordination> baseActionCoordinator;
@property(readonly, nonatomic) BaseModeController *baseModeController; // @synthesize baseModeController=_baseModeController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

