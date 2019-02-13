//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNGuidanceManager-Protocol.h>
#import <Navigation/MNTimeManagerObserver-Protocol.h>

@class GEOComposedGuidanceEvent, MNAnnouncementPlanEvent, MNGuidanceSignInfo, MNLocation, MNNavigationSession, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol MNAnnoucementStrategy, MNGuidanceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceEventManager : NSObject <MNGuidanceManager, MNTimeManagerObserver>
{
    id <MNGuidanceManagerDelegate> _delegate;
    MNNavigationSession *_navigationSession;
    NSMutableArray *_events;
    GEOComposedGuidanceEvent *_nextEvent;
    id <MNAnnoucementStrategy> _announcementStrategy;
    NSMutableDictionary *_announcementsSpoken;
    NSMutableDictionary *_hapticsTriggered;
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;
    MNGuidanceSignInfo *_signInfo;
    GEOComposedGuidanceEvent *_startSpokenGuidanceEvent;
    GEOComposedGuidanceEvent *_getOnRouteSpokenGuidanceEvent;
    GEOComposedGuidanceEvent *_endSpokenGuidanceEvent;
    GEOComposedGuidanceEvent *_returnToRouteSpokenGuidanceEvent;
    NSMutableArray *_startSignGuidanceEvents;
    GEOComposedGuidanceEvent *_endSignGuidanceEvent;
    GEOComposedGuidanceEvent *_returnToRouteSignGuidanceEvent;
    _Bool _hasBeenOnRouteOnce;
    _Bool _canSpeakReturnToRouteAnnouncement;
    double _timeLastAnnouncementStarted;
    double _timeLastAnnouncementEnded;
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;
    unsigned long long _lastStepIndex;
    _Bool _hasStickyEvents;
    MNLocation *_location;
    double _speed;
    NSMutableArray *_validEvents;
    NSMutableDictionary *_feedback;
    NSArray *_previousSignEvents;
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;
}

@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) __weak id <MNGuidanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)timeManagerDidChangeProvider:(id)arg1;
- (_Bool)_isEventValid:(id)arg1 start:(double)arg2 end:(double)arg3;
- (_Bool)_isValidEvent:(id)arg1;
- (double)_adjustedVehicleSpeed;
- (id)_serverStringDictionaryForEvent:(id)arg1 spoken:(_Bool)arg2;
- (double)_timeUntilEventTrigger:(id)arg1;
- (void)_markEventSpoken:(id)arg1;
- (_Bool)_hasSpokenEvent:(id)arg1;
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinIndex:(unsigned long long)arg3 selectedIndex:(out unsigned long long *)arg4;
- (double)_timeRemainingForEvent:(id)arg1;
- (void)_notifySpeechEvent:(id)arg1 variant:(unsigned long long)arg2;
- (double)_calculateDurationToSpeakEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;
- (void)_considerStickiness;
- (void)_considerSignGuidance;
- (void)_considerLaneGuidance;
- (void)_considerHaptics;
- (void)_considerAnnouncements;
- (_Bool)_shouldUseLocation:(id)arg1;
- (id)_spokenEventsRemainingInStep;
- (void)_filterValidEvents;
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_events;
- (void)_stepDidChange;
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;
- (double)timeUntilNextAnnouncement;
- (double)timeSinceLastAnnouncement;
- (void)stop;
- (void)updateDestination:(id)arg1;
- (void)updateForReroute:(id)arg1;
- (void)updateForReturnToRoute;
- (_Bool)repeatLastGuidanceAnnouncement:(id)arg1;
- (void)reset;
- (void)_initSpecialGuidanceEvents;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

