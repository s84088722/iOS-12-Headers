//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapItem, NSDate, NSString, RTVehicleEvent, UIImage;

__attribute__((visibility("hidden")))
@interface ParkedCar : NSObject
{
    RTVehicleEvent *_vehicleEvent;
    MKMapItem *_mapItem;
    struct CLLocationCoordinate2D _coordinate;
    int _referenceFrame;
    double _horizontalAccuracy;
    UIImage *_image;
    NSString *_notes;
}

+ (id)title;
+ (id)personalizedItemKey;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) int referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) RTVehicleEvent *vehicleEvent; // @synthesize vehicleEvent=_vehicleEvent;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long locationQuality;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) NSString *locationName;
@property(readonly, nonatomic) NSString *locationDisplayString;
@property(readonly, nonatomic) NSString *title;
- (void)updateFromVehicleEvent:(id)arg1 geoMapItem:(id)arg2;
- (id)initWithVehicleEvent:(id)arg1 geoMapItem:(id)arg2;
- (id)init;

@end

