//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapView;
@protocol MKOverlay, OS_dispatch_queue;

@interface MKOverlayRenderer : NSObject
{
    id <MKOverlay> _overlay;
    CDStruct_02837cd9 _boundingMapRect;
    id _renderer;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    MKMapView *_mapView;
    double _contentScaleFactor;
    double _alpha;
}

@property(readonly, nonatomic) id <MKOverlay> overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (void)overlay:(id)arg1 drawKey:(const CDStruct_7523a67d *)arg2 inContext:(struct CGContext *)arg3;
- (_Bool)overlay:(id)arg1 canDrawKey:(const CDStruct_7523a67d *)arg2;
- (_Bool)_mayExtendOutsideBounds;
- (void)set_renderer:(id)arg1;
- (id)_renderer;
- (CDStruct_02837cd9)_boundingMapRect;
- (void)set_boundingMapRect:(CDStruct_02837cd9)arg1;
- (void)setNeedsDisplayInMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (void)setNeedsDisplayInMapRect:(CDStruct_02837cd9)arg1;
- (void)setNeedsDisplay;
- (CDStruct_02837cd9)mapRectForRect:(struct CGRect)arg1;
- (struct CGRect)rectForMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_c3b9c2ee)mapPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (void)_setMapView:(id)arg1;
- (id)_mapView;
- (id)_mk_overlayLayer;
- (id)_mk_overlayView;
- (CDStruct_c3b9c2ee)_originMapPoint;
@property(readonly) double contentScaleFactor;
- (void)setContentScaleFactor:(double)arg1;
@property double alpha; // @synthesize alpha=_alpha;
- (id)initWithOverlay:(id)arg1;
- (id)init;
- (void)dealloc;

@end

