//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class MKMapView;

__attribute__((visibility("hidden")))
@interface _MKLabelMarkerView : MKAnnotationView
{
    MKMapView *_mapView;
}

+ (_Bool)_followsTerrain;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (_Bool)updateCalloutViewIfNeededAnimated:(_Bool)arg1;
- (void)_updateAnchorOffset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)setAnnotation:(id)arg1;
- (void)_deregisterObserver;
- (void)_registerObserver;
- (_Bool)shouldShowCallout;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end

