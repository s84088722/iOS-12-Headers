//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NavContainerViewController.h"

#import "NavHeadingViewControllerDelegate-Protocol.h"
#import "NavSpeedLimitViewControllerDelegate-Protocol.h"
#import "PassThroughViewControllerDelegate-Protocol.h"

@class LowGuidanceSignsViewController, NSLayoutConstraint, NSString, NavCompassViewController, NavDrivingIndicatorsViewController, NavSignViewController, UIViewController;
@protocol GuidanceDisplay><SignHintDisplay;

__attribute__((visibility("hidden")))
@interface DrivingNavContainerViewController : NavContainerViewController <NavSpeedLimitViewControllerDelegate, NavHeadingViewControllerDelegate, PassThroughViewControllerDelegate>
{
    _Bool _visible;
    NSLayoutConstraint *_signTopToContentViewTopConstraint;
    unsigned long long _signStyle;
    UIViewController<GuidanceDisplay><SignHintDisplay> *_presentedSignViewController;
    LowGuidanceSignsViewController *_lowGuidanceSignsViewController;
    NavSignViewController *_navSignsViewController;
    NavDrivingIndicatorsViewController *_drivingIndicatorsViewController;
    NavCompassViewController *_compassViewController;
}

@property(retain, nonatomic) NavCompassViewController *compassViewController; // @synthesize compassViewController=_compassViewController;
@property(retain, nonatomic) NavDrivingIndicatorsViewController *drivingIndicatorsViewController; // @synthesize drivingIndicatorsViewController=_drivingIndicatorsViewController;
@property(retain, nonatomic) NavSignViewController *navSignsViewController; // @synthesize navSignsViewController=_navSignsViewController;
@property(retain, nonatomic) LowGuidanceSignsViewController *lowGuidanceSignsViewController; // @synthesize lowGuidanceSignsViewController=_lowGuidanceSignsViewController;
@property(retain, nonatomic) UIViewController<GuidanceDisplay><SignHintDisplay> *presentedSignViewController; // @synthesize presentedSignViewController=_presentedSignViewController;
@property(nonatomic) unsigned long long signStyle; // @synthesize signStyle=_signStyle;
- (void).cxx_destruct;
- (void)mapViewZoomController:(id)arg1 didChangeMapViewZoom:(unsigned long long)arg2;
- (id)passThroughView;
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;
- (void)mapView:(id)arg1 didUpdateYaw:(double)arg2;
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)shouldShowNavIndicators;
- (_Bool)navSpeedLimitViewControllerShouldBecomeVisible:(id)arg1;
- (_Bool)navHeadingViewControllerShouldBecomeVisible:(id)arg1;
- (void)didReceiveNewLocation:(id)arg1;
- (void)setNavIndicatorsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLayoutAnimated:(_Bool)arg1;
- (unsigned long long)_signLayoutTypeForTraits:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)containerStyleManagerDidChangeStyle:(unsigned long long)arg1;
- (id)statusBarBackgroundViewStyle;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (struct UIEdgeInsets)_lowGuidanceSignViewEdgeInsets;
- (void)updateNavSignOffsetFromStatusBarBottom;
- (void)_detachCommuteAndCompassViewControllers;
- (void)_detachNavSignViewController;
- (void)_attachCommuteSignsAndCompassViewControllers;
- (void)_attachNavSignViewController;
- (void)_updateDisplayedSignViewController;
- (void)setSignStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_attachDrivingIndicatorsViewController;
- (void)viewDidLoad;
- (void)setCoordinator:(id)arg1;
- (id)initWithCoordinator:(id)arg1 guidanceObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

