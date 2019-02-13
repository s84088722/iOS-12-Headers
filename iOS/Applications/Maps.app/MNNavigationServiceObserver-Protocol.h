//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOAlightNotificationFeedback, GEOComposedRoute, GEOETARoute, GEOETATrafficUpdateResponse, GEOStep, MNCommuteDestination, MNGuidanceEventFeedback, MNGuidanceLaneInfo, MNGuidanceSignInfo, MNLocation, MNNavigationService, MNTrafficIncidentAlert, NSArray, NSDate, NSError, NSString, NSUUID;

@protocol MNNavigationServiceObserver <NSObject>

@optional
- (void)navigationServiceDidDetectInterfaceMismatch:(MNNavigationService *)arg1;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateAudioOutputSettings:(NSArray *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didActivateAudioSession:(_Bool)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateFeedback:(GEOAlightNotificationFeedback *)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didRecordTraceBookmarkWithID:(unsigned long long)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didSeekToTracePosition:(double)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didPlayTracePosition:(double)arg2;
- (void)navigationServiceDidResumeTrace:(MNNavigationService *)arg1;
- (void)navigationServiceDidPauseTrace:(MNNavigationService *)arg1;
- (void)navigationServiceDidFinishLoadingTrace:(MNNavigationService *)arg1;
- (void)navigationService:(MNNavigationService *)arg1 didUpdatePredictedCommuteDestination:(MNCommuteDestination *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didUpdatePossibleCommuteDestinations:(NSArray *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateIsInVehicle:(_Bool)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didInvalidateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didReceiveTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2 responseCallback:(void (^)(_Bool))arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(GEOComposedRoute *)arg3;
- (void)navigationServiceDidCancelReroute:(MNNavigationService *)arg1;
- (void)navigationService:(MNNavigationService *)arg1 didReroute:(GEOComposedRoute *)arg2;
- (void)navigationServiceWillReroute:(MNNavigationService *)arg1;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateIncidentsForRoute:(GEOComposedRoute *)arg2 etaRoute:(GEOETARoute *)arg3 incidentsOffset:(unsigned int)arg4;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateETAResponse:(GEOETATrafficUpdateResponse *)arg2 forRoute:(GEOComposedRoute *)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateDisplayETA:(NSDate *)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(GEOComposedRoute *)arg4;
- (void)navigationServiceDidHideSecondaryStep:(MNNavigationService *)arg1;
- (void)navigationService:(MNNavigationService *)arg1 displaySecondaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6;
- (void)navigationService:(MNNavigationService *)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationService:(MNNavigationService *)arg1 displayPrimaryStep:(GEOStep *)arg2 instructions:(NSArray *)arg3 shieldType:(int)arg4 shieldText:(NSString *)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationService:(MNNavigationService *)arg1 updatedGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 newGuidanceEventFeedback:(MNGuidanceEventFeedback *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 hideLaneDirectionsForId:(NSUUID *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 showLaneDirections:(MNGuidanceLaneInfo *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationServicePredictingDidArrive:(MNNavigationService *)arg1;
- (void)navigationServiceDidArrive:(MNNavigationService *)arg1;
- (void)navigationService:(MNNavigationService *)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationService:(MNNavigationService *)arg1 usePersistentDisplay:(_Bool)arg2;
- (void)navigationService:(MNNavigationService *)arg1 updateSignsWithInfo:(MNGuidanceSignInfo *)arg2;
- (void)navigationServiceEndGuidanceUpdate:(MNNavigationService *)arg1;
- (void)navigationServiceBeginGuidanceUpdate:(MNNavigationService *)arg1;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(NSString *)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationService:(MNNavigationService *)arg1 didUpdateMatchedLocation:(MNLocation *)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationService:(MNNavigationService *)arg1 didFailWithError:(NSError *)arg2;
- (void)navigationServiceWillResumeFromPause:(MNNavigationService *)arg1;
- (void)navigationServiceWillPause:(MNNavigationService *)arg1;
- (void)navigationService:(MNNavigationService *)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationService:(MNNavigationService *)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end

