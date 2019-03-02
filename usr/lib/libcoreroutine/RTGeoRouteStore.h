/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTStore.h>

@interface RTGeoRouteStore : RTStore
-(void)clearWithHandler:(/*^block*/id)arg1 ;
-(void)purgePredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchGeoRoutesFromLocationOfInterestIdentifier:(id)arg1 toLocationOfInterestIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeGeoRoutesFromLocationOfInterestIdentifier:(id)arg1 toLocationOfInterestIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)storeGeoRoutes:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_updateGeoRoutes:(id)arg1 fromLocationOfInterestIdentifier:(id)arg2 toLocationOfInterestIdentifier:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchGeoRoutesFromLocationOfInterestIdentifier:(id)arg1 toLocationOfInterestIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeGeoRoutesFromLocationOfInterestIdentifier:(id)arg1 toLocationOfInterestIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)updateGeoRoutes:(id)arg1 fromLocationOfInterestIdentifier:(id)arg2 toLocationOfInterestIdentifier:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)init;
@end
