//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphEdge.h>

@class CLLocation, NSDate;

@interface PGGraphAddressEdge : PGGraphEdge
{
}

@property(readonly, nonatomic) CLLocation *photoLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D photoCoordinate;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
@property(readonly, nonatomic) double timestampUTCEnd;
@property(readonly, nonatomic) double timestampUTCStart;

@end

