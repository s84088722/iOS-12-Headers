//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSUUID;

@interface RTRouteManagerTransition : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSUUID *_originLoiIdentifier;
    NSUUID *_destinationLoiIdentifier;
    NSUUID *_originVisitIdentifier;
    NSUUID *_destinationVisitIdentifier;
    NSArray *_locations;
    double _motionAutomotiveRatio;
    NSDictionary *_locationTypeDistribution;
    double _majorGapLength;
}

@property(nonatomic) double majorGapLength; // @synthesize majorGapLength=_majorGapLength;
@property(retain, nonatomic) NSDictionary *locationTypeDistribution; // @synthesize locationTypeDistribution=_locationTypeDistribution;
@property(nonatomic) double motionAutomotiveRatio; // @synthesize motionAutomotiveRatio=_motionAutomotiveRatio;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, copy, nonatomic) NSUUID *destinationVisitIdentifier; // @synthesize destinationVisitIdentifier=_destinationVisitIdentifier;
@property(readonly, copy, nonatomic) NSUUID *originVisitIdentifier; // @synthesize originVisitIdentifier=_originVisitIdentifier;
@property(readonly, copy, nonatomic) NSUUID *destinationLoiIdentifier; // @synthesize destinationLoiIdentifier=_destinationLoiIdentifier;
@property(readonly, copy, nonatomic) NSUUID *originLoiIdentifier; // @synthesize originLoiIdentifier=_originLoiIdentifier;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 originLoiIdentifier:(id)arg3 destinationLoiIdentifier:(id)arg4 originVisitIdentifier:(id)arg5 destinationVisitIdentifier:(id)arg6;

@end

