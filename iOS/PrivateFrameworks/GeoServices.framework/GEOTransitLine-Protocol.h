//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapItemIdentifier, NSArray, NSString;
@protocol GEOTransitArtworkDataSource, GEOTransitSystem;

@protocol GEOTransitLine <NSObject>
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) _Bool showVehicleNumber;
@property(readonly, nonatomic) NSString *lineColorString;
@property(readonly, nonatomic) _Bool hasLineColorString;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> alternateArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> modeArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artwork;
@property(readonly, nonatomic) _Bool departuresAreVehicleSpecific;
@property(readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property(readonly, nonatomic) id <GEOTransitSystem> system;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long muid;
@end

