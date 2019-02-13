//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PassThroughViewController.h"

#import "FloatingControlsPresentation-Protocol.h"
#import "GEOLogContextDelegate-Protocol.h"
#import "LocalSearchViewControllerDelegate-Protocol.h"
#import "MKMapViewDelegatePrivate-Protocol.h"
#import "VenueChangeObserver-Protocol.h"
#import "VenueFloorViewControllerDelegate-Protocol.h"

@class ButtonsContainerViewController, LocalSearchViewController, MKMapView, NSLayoutXAxisAnchor, NSString, UIButton, UIStackView, VenueFloorViewController, WeatherLocationDataProvider, WeatherMapPanningCoordinator, WeatherStackViewController, _MKUserTrackingButton;
@protocol FloatingControlsViewControllerActionCoordination, MapViewProviding;

__attribute__((visibility("hidden")))
@interface FloatingControlsViewController : PassThroughViewController <VenueChangeObserver, LocalSearchViewControllerDelegate, GEOLogContextDelegate, VenueFloorViewControllerDelegate, FloatingControlsPresentation, MKMapViewDelegatePrivate>
{
    _Bool _isConfigured;
    _Bool _hasReceivedLocationUpdate;
    _Bool _visible;
    _Bool _nonFloorPickerControlsVisible;
    _Bool _isObservingLocationAuthorization;
    id <FloatingControlsViewControllerActionCoordination> _actionCoordinator;
    id <MapViewProviding> _mapViewProviding;
    long long _visibleControls;
    double _margin;
    NSString *_blurGroupName;
    UIStackView *_controlsStackView;
    ButtonsContainerViewController *_buttonsContainerViewController;
    _MKUserTrackingButton *_userLocationButton;
    UIButton *_settingsButton;
    UIButton *_mode2DButton;
    UIButton *_mode3DButton;
    UIButton *_modeARButton;
    VenueFloorViewController *_venueFloorViewController;
    WeatherStackViewController *_weatherStackViewController;
    WeatherLocationDataProvider *_weatherLocationDataProvider;
    WeatherMapPanningCoordinator *_weatherMapPanningCoordinator;
    LocalSearchViewController *_localSearchViewController;
    double _yawPriorToHeadingTracking;
}

@property(nonatomic) double yawPriorToHeadingTracking; // @synthesize yawPriorToHeadingTracking=_yawPriorToHeadingTracking;
@property(retain, nonatomic) LocalSearchViewController *localSearchViewController; // @synthesize localSearchViewController=_localSearchViewController;
@property(retain, nonatomic) WeatherMapPanningCoordinator *weatherMapPanningCoordinator; // @synthesize weatherMapPanningCoordinator=_weatherMapPanningCoordinator;
@property(retain, nonatomic) WeatherLocationDataProvider *weatherLocationDataProvider; // @synthesize weatherLocationDataProvider=_weatherLocationDataProvider;
@property(retain, nonatomic) WeatherStackViewController *weatherStackViewController; // @synthesize weatherStackViewController=_weatherStackViewController;
@property(retain, nonatomic) VenueFloorViewController *venueFloorViewController; // @synthesize venueFloorViewController=_venueFloorViewController;
@property(retain, nonatomic) UIButton *modeARButton; // @synthesize modeARButton=_modeARButton;
@property(retain, nonatomic) UIButton *mode3DButton; // @synthesize mode3DButton=_mode3DButton;
@property(retain, nonatomic) UIButton *mode2DButton; // @synthesize mode2DButton=_mode2DButton;
@property(retain, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) _MKUserTrackingButton *userLocationButton; // @synthesize userLocationButton=_userLocationButton;
@property(retain, nonatomic) ButtonsContainerViewController *buttonsContainerViewController; // @synthesize buttonsContainerViewController=_buttonsContainerViewController;
@property(retain, nonatomic) UIStackView *controlsStackView; // @synthesize controlsStackView=_controlsStackView;
@property(nonatomic) _Bool isObservingLocationAuthorization; // @synthesize isObservingLocationAuthorization=_isObservingLocationAuthorization;
@property(nonatomic) _Bool nonFloorPickerControlsVisible; // @synthesize nonFloorPickerControlsVisible=_nonFloorPickerControlsVisible;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool hasReceivedLocationUpdate; // @synthesize hasReceivedLocationUpdate=_hasReceivedLocationUpdate;
@property(copy, nonatomic) NSString *blurGroupName; // @synthesize blurGroupName=_blurGroupName;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) long long visibleControls; // @synthesize visibleControls=_visibleControls;
@property(nonatomic) __weak id <MapViewProviding> mapViewProviding; // @synthesize mapViewProviding=_mapViewProviding;
@property(nonatomic) __weak id <FloatingControlsViewControllerActionCoordination> actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
- (void).cxx_destruct;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (void)updateNonFloorPickerControlsVisibleForFloorPickerHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateNonFloorPickerControlsVisibleAnimated:(_Bool)arg1;
- (void)setNonFloorPickerControlsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)_weatherViewConstraints;
- (id)weatherStackViewControllerIfLoaded;
- (void)_configureButton:(id)arg1 withImageName:(id)arg2;
- (void)_showLocationServicesAlertIfNeeded;
- (void)_presentSettings;
- (id)_localSearchViewConstraints;
- (id)localSearchViewControllerIfLoaded;
- (void)localSearchViewShouldBeVisibleDidChange:(id)arg1;
- (void)localSearchViewControllerDidSelectBrowseVenue:(id)arg1;
- (void)localSearchViewControllerDidSelectRefreshSearchHere:(id)arg1;
- (id)venueWithFocus;
- (void)setSearchSession:(id)arg1;
- (void)setRefreshViewEnable:(_Bool)arg1;
- (_Bool)lacksSearchResultsInVenue:(id)arg1 forFloorOrdinal:(short)arg2;
- (id)venueFloorViewControllerConstraintsForViewWhenOpen:(id)arg1;
- (void)venueFloorViewControllerDidClose:(id)arg1;
- (void)venueFloorViewControllerDidOpen:(id)arg1;
- (void)venueFloorViewControllerDidFinishShowing:(id)arg1;
- (void)venueFloorViewControllerDidStartShowing:(id)arg1;
- (void)venueFloorViewControllerDidFinishHiding:(id)arg1;
- (void)venueFloorViewControllerDidStartHiding:(id)arg1;
- (void)venueFloorViewControllerDidChangeConstraints:(id)arg1;
- (void)didChangeFocusedVenue:(id)arg1 focusedBuilding:(id)arg2 displayedFloorOrdinal:(short)arg3;
- (void)setupVenueFloorViewController;
- (void)didChangeFocusedVenue:(id)arg1;
- (id)venueFloorViewControllerIfLoaded;
- (double)compassDiameter;
- (double)compassMargin;
- (void)_addSubview:(id)arg1 withConstraints:(id)arg2;
- (long long)_sanitizedControlsFromControls:(long long)arg1;
- (void)hideControlsIfNeeded:(long long)arg1;
- (void)showControlsIfNeeded:(long long)arg1;
- (_Bool)shouldShow:(long long)arg1 withControlOptions:(long long)arg2;
- (_Bool)shouldHide:(long long)arg1 withControlOptions:(long long)arg2;
- (_Bool)_pointContainedInWeatherView:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)buttonsContainerViewControllerIfLoaded;
- (id)controlsStackViewIfLoaded;
- (void)_updateCompassInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateTheme;
@property(readonly, nonatomic) MKMapView *mapView;
@property(readonly, nonatomic) struct CGRect floatingButtonsFrame;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *floatingButtonLeadingGuide;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

