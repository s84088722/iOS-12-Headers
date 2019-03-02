/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMAltimeter : NSObject {

	id _internal;

}
+(void)dummySelector:(id)arg1 ;
+(BOOL)isRelativeAltitudeAvailable;
+(BOOL)isSignificantElevationAvailable;
+(void)initialize;
+(long long)authorizationStatus;
-(void)deallocPrivate;
-(void)onFilteredPressure:(const Sample*)arg1 ;
-(void)stopRelativeAltitudeUpdatesPrivate;
-(void)startRelativeAltitudeUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startRelativeAltitudeUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopRelativeAltitudeUpdates;
-(void)startSignificantElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopSignificantElevationUpdates;
-(void)querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initPrivate;
-(id)init;
-(void)dealloc;
@end
