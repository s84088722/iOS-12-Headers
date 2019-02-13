//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarChromeModeController-Protocol.h"
#import "CarMapPanningViewControllerDelegate-Protocol.h"
#import "CarUIBarButtonItemsControllerDelegate-Protocol.h"
#import "MKMapViewDelegatePrivate-Protocol.h"

@class CarChromeViewController, CarMapPanningViewController, CarMapTrackingController, CarUIBarButtonItemsController, ChromeViewController, MKMapView, NSString;

__attribute__((visibility("hidden")))
@interface CarMapPanningModeController : NSObject <CarMapPanningViewControllerDelegate, CarUIBarButtonItemsControllerDelegate, MKMapViewDelegatePrivate, CarChromeModeController>
{
    CarMapPanningViewController *_viewController;
    _Bool _scrollWasEnabled;
    _Bool _mapWasPanned;
    CarChromeViewController *_chromeViewController;
    CarUIBarButtonItemsController *_buttonController;
}

@property(retain, nonatomic) CarUIBarButtonItemsController *buttonController; // @synthesize buttonController=_buttonController;
@property(readonly, nonatomic) _Bool mapWasPanned; // @synthesize mapWasPanned=_mapWasPanned;
@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
- (int)currentUsageTarget;
- (void)carMapPanningViewControllerDidPan:(id)arg1 inDirection:(long long)arg2;
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;
- (void)_doneButtonItemPressed;
- (void)buttonController:(id)arg1 didSelectItem:(unsigned long long)arg2;
- (_Bool)buttonController:(id)arg1 shouldShowItem:(unsigned long long)arg2;
- (_Bool)invalidAfterDisconnect;
- (_Bool)showsExplicitPanButton;
- (_Bool)showsZoomControls;
- (void)_updateNavigationItemAnimated:(_Bool)arg1;
- (id)navigationItem;
- (_Bool)shouldEmulateOverlayInset;
- (void)configureNavigationDisplay:(id)arg1;
- (_Bool)shouldTopBarModifyMapInsets;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (id)carFocusOrderSequences;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)passThroughView;
- (id)viewController;
- (_Bool)allowKnobNudgeMapPanning;
- (_Bool)allowMapZoomAndRecentering;
- (_Bool)showsSpeedLimit;
- (_Bool)showsHeadingIndicator;
- (_Bool)showsMapView;
@property(readonly) MKMapView *mapView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) CarMapTrackingController *trackingController;

@end

