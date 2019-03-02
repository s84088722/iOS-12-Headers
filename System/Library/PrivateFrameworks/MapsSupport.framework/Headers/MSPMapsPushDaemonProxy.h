/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPMapsPushDaemonProxy <MSPRemoteModelAccess>
@required
-(void)checkin;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;
-(void)registerForTopic;
-(void)simulateProblemResolution;
-(void)fetchProblemStatus;
-(void)shouldUseDevAPNS:(/*^block*/id)arg1;
-(void)setShouldUseDevAPNS:(BOOL)arg1;
-(void)fetchDevicePushToken:(/*^block*/id)arg1;
-(void)simulateAnnouncement:(id)arg1;
-(void)clearCurrentAnnouncement;
-(void)resetShownAnnouncements;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1;
-(void)clearBulletinWithRecordID:(id)arg1;
-(void)problemStatusResponseWithNotificationID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeProblemStatusResponseWithNotificationID:(id)arg1;
-(void)showTrafficIncidentAlertWithID:(id)arg1 type:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4;
-(void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;
-(void)clearTrafficIncidentsBulletin;
-(void)showTransitAlightAlertWithTitle:(id)arg1 message:(id)arg2;
-(void)clearTransitAlightAlertBulletin;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2;
-(void)clearPredictedRouteTrafficIncidentBulletin;
-(void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1;
-(void)clearLowFuelAlertBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3;
-(oneway void)updateMapsModelBackupAttributesIfNeeded;
-(void)eraseRAPData;
-(void)handleMapsApplicationRemoval:(/*^block*/id)arg1;
-(void)mapsLocationAuthorizationStatusChanged;
-(void)fetchUserRoutingPreferencesWithCompletion:(/*^block*/id)arg1;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)clearTrafficConditionsBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
-(void)clearParkedCarBulletin;

@end
