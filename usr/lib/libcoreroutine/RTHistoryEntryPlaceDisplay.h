/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, RTMapItem;

@interface RTHistoryEntryPlaceDisplay : NSObject {

	NSDate* _usageDate;
	RTMapItem* _mapItem;

}

@property (nonatomic,readonly) NSDate * usageDate;               //@synthesize usageDate=_usageDate - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
-(RTMapItem *)mapItem;
-(NSDate *)usageDate;
-(id)initWithUsageDate:(id)arg1 mapItem:(id)arg2 ;
-(id)init;
-(id)description;
@end

