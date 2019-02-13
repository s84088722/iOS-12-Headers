//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class MKMapCamera, NSArray;

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, NSCopying>
{
    MKMapCamera *_camera;
    CDStruct_02837cd9 _mapRect;
    CDStruct_b7cb895d _region;
    unsigned long long _mapType;
    int _mode;
    _Bool _showsPointsOfInterest;
    _Bool _showsPointLabels;
    _Bool _showsBuildings;
    _Bool _showsNightMode;
    _Bool _rendersInBackground;
    _Bool _useSnapshotService;
    struct CGSize _size;
    double _scale;
    _Bool _usingRect;
    _Bool _showsVenues;
    unsigned char _searchResultsType;
    NSArray *_annotationViews;
    NSArray *_customFeatureAnnotations;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic, getter=_customFeatureAnnotations, setter=_setCustomFeatureAnnotations:) NSArray *customFeatureAnnotations; // @synthesize customFeatureAnnotations=_customFeatureAnnotations;
@property(nonatomic, getter=_searchResultsType, setter=_setSearchResultsType:) unsigned char searchResultsType; // @synthesize searchResultsType=_searchResultsType;
@property(nonatomic, getter=_showsVenues, setter=_setShowsVenues:) _Bool showsVenues; // @synthesize showsVenues=_showsVenues;
@property(copy, nonatomic) NSArray *annotationViews; // @synthesize annotationViews=_annotationViews;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic, getter=_rendersInBackground, setter=_setRendersInBackground:) _Bool rendersInBackground; // @synthesize rendersInBackground=_rendersInBackground;
@property(nonatomic, getter=_useSnapshotService, setter=_setUseSnapshotService:) _Bool useSnapshotService; // @synthesize useSnapshotService=_useSnapshotService;
@property(nonatomic, getter=_showsNightMode, setter=_setShowsNightMode:) _Bool showsNightMode; // @synthesize showsNightMode=_showsNightMode;
@property(nonatomic) _Bool showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic, getter=_showsPointLabels, setter=_setShowsPointLabels:) _Bool showsPointLabels; // @synthesize showsPointLabels=_showsPointLabels;
@property(nonatomic) _Bool showsPointsOfInterest; // @synthesize showsPointsOfInterest=_showsPointsOfInterest;
@property(readonly, nonatomic) _Bool usingRect; // @synthesize usingRect=_usingRect;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) CDStruct_b7cb895d region; // @synthesize region=_region;
@property(nonatomic) CDStruct_02837cd9 mapRect; // @synthesize mapRect=_mapRect;
@property(copy, nonatomic) MKMapCamera *camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
