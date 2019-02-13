//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MKMapView, NSString, TapThenPanGestureRecognizer, VKDynamicAnimation;
@protocol ZoomingGestureConfiguration;

__attribute__((visibility("hidden")))
@interface SingleHandedZoomController : NSObject <UIGestureRecognizerDelegate>
{
    MKMapView *_mapView;
    TapThenPanGestureRecognizer *_zoomingGestureRecognizer;
    double _lastScale;
    _Bool _didStartZooming;
    VKDynamicAnimation *_decelerationAnimation;
    _Bool _enabled;
    id <ZoomingGestureConfiguration> _configuration;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) id <ZoomingGestureConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (_Bool)_shouldAdoptTapLocationAsFocusPoint;
- (double)_zoomOutDecelerationAnimationFrictionScale;
- (double)_maximumVelocityForZoomOut;
- (double)_maximumVelocityForZoomIn;
- (double)_minimumVelocityForApplyDecelerationAnimation;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)zoomingGestureRecognizer;
- (void)_zoomingGestureRecognizerStateDidChange:(id)arg1;
- (void)applySingleHandedZoomToMapView:(id)arg1;
- (void)_configurationDidUpate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

