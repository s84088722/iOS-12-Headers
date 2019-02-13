//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOAddress, GEOLatLng, GEOLocation, GEOMapRegion, NSString;

@interface GEOMapItemBuilder : NSObject
{
    struct {
        unsigned int referenceFrame:1;
    } _has;
    GEOLocation *_location;
    int _referenceFrame;
    GEOAddress *_address;
    GEOMapRegion *_mapRegion;
    GEOLatLng *_latlng;
    NSString *_name;
}

+ (id)buildWithSetterBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GEOLatLng *latlng; // @synthesize latlng=_latlng;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
@property(nonatomic) int referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end

