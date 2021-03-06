/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHeuristicDevice, PPEventStore;

@interface ATXExtraordinaryEventsDataSource : NSObject {

	ATXHeuristicDevice* _device;
	PPEventStore* _extraordinaryEventStore;

}
+(id)_endOfDayAfterDate:(id)arg1 numberOfDays:(long long)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(id)_ekEventForHighlight:(id)arg1 eventStore:(id)arg2 ;
-(id)_fetchExtraordinaryEvents;
-(void)getEventsWithProminentFeature:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

