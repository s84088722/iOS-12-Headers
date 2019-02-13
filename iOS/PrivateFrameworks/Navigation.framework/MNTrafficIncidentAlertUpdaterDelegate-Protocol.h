//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedRoute, GEOETARoute, MNTrafficIncidentAlert, MNTrafficIncidentAlertUpdater;

@protocol MNTrafficIncidentAlertUpdaterDelegate <NSObject>
- (_Bool)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(MNTrafficIncidentAlertUpdater *)arg1;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 didReturnToOriginalRoute:(GEOComposedRoute *)arg2 etaRoute:(GEOETARoute *)arg3 forAlert:(MNTrafficIncidentAlert *)arg4;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 didSwitchToNewRoute:(GEOComposedRoute *)arg2 forAlert:(MNTrafficIncidentAlert *)arg3;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 updatedAlert:(MNTrafficIncidentAlert *)arg2;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 didDismissAlert:(MNTrafficIncidentAlert *)arg2 withReroute:(_Bool)arg3;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 invalidatedAlert:(MNTrafficIncidentAlert *)arg2;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 receivedAlert:(MNTrafficIncidentAlert *)arg2 responseCallback:(void (^)(_Bool))arg3;
@end

