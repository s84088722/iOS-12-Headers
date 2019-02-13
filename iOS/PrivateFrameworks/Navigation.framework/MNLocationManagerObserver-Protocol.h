//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNLocationManager, NSDate, NSError;

@protocol MNLocationManagerObserver <NSObject>
- (void)locationManager:(MNLocationManager *)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManager:(MNLocationManager *)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationManagerDidResumeLocationUpdates:(MNLocationManager *)arg1;
- (void)locationManagerDidPauseLocationUpdates:(MNLocationManager *)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(MNLocationManager *)arg1;
- (void)locationManagerDidReset:(MNLocationManager *)arg1;
- (void)locationManagerFailedToUpdateLocation:(MNLocationManager *)arg1 withError:(NSError *)arg2;
- (void)locationManagerUpdatedLocation:(MNLocationManager *)arg1;
@end

