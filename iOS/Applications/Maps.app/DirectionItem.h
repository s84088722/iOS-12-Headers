//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "VenueRoutePlanningCardItem-Protocol.h"

@class DrivePreferences, MKMapItem, NSString, SearchFieldItem, TransitRouteOptions;

__attribute__((visibility("hidden")))
@interface DirectionItem : NSObject <NSCopying, VenueRoutePlanningCardItem>
{
    SearchFieldItem *_startItem;
    SearchFieldItem *_endItem;
    long long _transportType;
    DrivePreferences *_drivePreferences;
    TransitRouteOptions *_routeOptions;
}

@property(retain, nonatomic) TransitRouteOptions *routeOptions; // @synthesize routeOptions=_routeOptions;
@property(retain, nonatomic) DrivePreferences *drivePreferences; // @synthesize drivePreferences=_drivePreferences;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) SearchFieldItem *endItem; // @synthesize endItem=_endItem;
@property(readonly, nonatomic) SearchFieldItem *startItem; // @synthesize startItem=_startItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long venueCardID;
@property(readonly, nonatomic) unsigned long long venueID;
@property(readonly, nonatomic) _Bool isVenueItem;
@property(readonly, nonatomic) unsigned long long editRequired;
@property(readonly, nonatomic) MKMapItem *endMapItem;
@property(readonly, nonatomic) MKMapItem *startMapItem;
- (_Bool)isEquivalentAsWaypointToDirectionItem:(id)arg1;
- (_Bool)isEqualToDirectionItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartItem:(id)arg1 endItem:(id)arg2 transportType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
