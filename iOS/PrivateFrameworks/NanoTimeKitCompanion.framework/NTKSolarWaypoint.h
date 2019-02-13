//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NTKSolarTimeModel;

@interface NTKSolarWaypoint : NSObject
{
    long long _type;
    NSDate *_waypointDate;
    NSString *_localizedName;
    NTKSolarTimeModel *_solarTimeModel;
    double _percentageThroughPeriodForWaypointDate;
}

@property(readonly, nonatomic) double percentageThroughPeriodForWaypointDate; // @synthesize percentageThroughPeriodForWaypointDate=_percentageThroughPeriodForWaypointDate;
@property(readonly, nonatomic) NSDate *waypointDate; // @synthesize waypointDate=_waypointDate;
@property(readonly, nonatomic) NTKSolarTimeModel *solarTimeModel; // @synthesize solarTimeModel=_solarTimeModel;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *localizedName;
- (void)updateDependentValuesWithPlaceholderData;
- (void)updateDependentValues;
- (id)initWithType:(long long)arg1 solarTimeModel:(id)arg2;

@end

