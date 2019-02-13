//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedTransitTripRouteLeg, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TransitClusteredVehicleInfoItem : NSObject
{
    GEOComposedTransitTripRouteLeg *_leg;
    unsigned long long _rideOption;
}

@property(readonly, nonatomic) unsigned long long rideOptionIndex; // @synthesize rideOptionIndex=_rideOption;
@property(readonly, nonatomic) GEOComposedTransitTripRouteLeg *leg; // @synthesize leg=_leg;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *actionSheetTitle;
@property(readonly, nonatomic) NSArray *routeDetailArtworks;
@property(readonly, nonatomic) NSArray *actionSheetArtworks;
- (id)initWithLeg:(id)arg1 rideOptionIndex:(unsigned long long)arg2;

@end
