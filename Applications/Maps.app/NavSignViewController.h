//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SignHintViewController.h"

#import "GuidanceDisplay-Protocol.h"

@class NSString, NSUUID, NavSignContainerHintView, NavSignContainerView, NavSignLaneGuidanceInfo;
@protocol NavActionCoordination, NavContainerLayoutDelegate;

__attribute__((visibility("hidden")))
@interface NavSignViewController : SignHintViewController <GuidanceDisplay>
{
    int _guidanceState;
    int _arrivalManeuver;
    _Bool _testLaneGuidanceLayoutsEnabled;
    _Bool _debugHighlightLanes;
    NavSignLaneGuidanceInfo *_displayedLaneGuidanceInfo;
    unsigned long long _signLayoutType;
    id <NavActionCoordination> _coordinator;
    id <NavContainerLayoutDelegate> _layoutDelegate;
    NSUUID *_arrivedSignID;
    NSUUID *_proceedToRouteSignID;
}

@property(retain, nonatomic) NSUUID *proceedToRouteSignID; // @synthesize proceedToRouteSignID=_proceedToRouteSignID;
@property(retain, nonatomic) NSUUID *arrivedSignID; // @synthesize arrivedSignID=_arrivedSignID;
@property(nonatomic) __weak id <NavContainerLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <NavActionCoordination> coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) unsigned long long signLayoutType; // @synthesize signLayoutType=_signLayoutType;
- (void).cxx_destruct;
- (void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 distanceText:(id)arg3 forStep:(id)arg4 atStepIndex:(unsigned long long)arg5;
- (void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2 forStep:(id)arg3;
- (void)setETA:(id)arg1;
- (void)setDestinationDisplayName:(id)arg1;
- (void)usePersistentDisplay:(_Bool)arg1;
- (void)hideSecondaryManeuver;
- (void)hideLaneGuidance;
- (void)showLaneGuidance:(id)arg1;
- (void)updateLaneGuidance:(id)arg1;
- (id)currentLaneGuidanceId;
- (void)showSecondaryManeuverSign:(id)arg1;
- (void)showManeuverSign:(id)arg1 maneuverStepIndex:(unsigned long long)arg2;
- (void)showRecalculationFailed;
- (void)didReroute;
- (void)showRecalculating;
- (void)showArrivedUsingSignInfo:(_Bool)arg1;
- (void)showNoGuidance;
- (void)setSignLayoutType:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isShowingMidStepLaneGuidance) _Bool showingMidStepLaneGuidance;
@property(readonly, nonatomic, getter=isShowingLaneGuidance) _Bool showingLaneGuidance;
- (void)handleTap:(id)arg1;
- (void)_handleTapToToggleLaneGuidanceLayout:(id)arg1;
- (void)_setupLaneGuidanceWithPrimaryGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) NavSignContainerView *signContainerView;
@property(readonly, nonatomic) NavSignContainerHintView *signContainerHintView;
- (id)_initialConstraints;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isGuidanceEnabled) _Bool guidanceEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
