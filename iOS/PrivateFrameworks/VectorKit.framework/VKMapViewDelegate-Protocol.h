//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSError, NSString, VKLabelMarker, VKMapView, VKVenueBuildingFeatureMarker, VKVenueFeatureMarker;
@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;

@protocol VKMapViewDelegate <NSObject>

@optional
- (void)mapLayer:(VKMapView *)arg1 venueWithFocusDidChange:(VKVenueFeatureMarker *)arg2 building:(VKVenueBuildingFeatureMarker *)arg3;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom:(VKMapView *)arg1;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom:(VKMapView *)arg1;
- (void)mapLayerNavigationCameraHasStoppedPanning:(VKMapView *)arg1;
- (void)mapLayerNavigationCameraHasStartedPanning:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)mapLayer:(VKMapView *)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapLayerLabelsDidLayout:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 labelMarkerDidChangeState:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 selectedLabelMarkerDidChangeState:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 selectedLabelMarkerWillDisappear:(VKLabelMarker *)arg2;
- (void)mapLayer:(VKMapView *)arg1 didFinishChangingMapDisplayStyle:(CDStruct_80aa614a)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverModeWillChange:(int)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverModeDidChange:(int)arg2;
- (void)mapLayer:(VKMapView *)arg1 flyoverTourLabelDidChange:(NSString *)arg2;
- (void)mapLayer:(VKMapView *)arg1 didStopFlyoverTourCompleted:(_Bool)arg2;
- (void)mapLayerWillStartFlyoverTour:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 arTrackingStateDidChange:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)mapLayerARSessionInterruptionEnded:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 arSessionWasInterrupted:(unsigned long long)arg2;
- (void)mapLayer:(VKMapView *)arg1 didEncounterARError:(NSError *)arg2;
- (void)mapLayerDidExitAR:(VKMapView *)arg1;
- (void)mapLayerWillExitAR:(VKMapView *)arg1;
- (void)mapLayerDidEnterAR:(VKMapView *)arg1;
- (void)mapLayerWillEnterAR:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 canShowFlyoverDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 showingFlyoverDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 canZoomInDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 didBecomePitched:(_Bool)arg2;
- (id <VKTrackableAnnotationPresentation>)mapLayer:(VKMapView *)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)mapLayerDidBecomeFullyDrawn:(VKMapView *)arg1 hasFailedTiles:(_Bool)arg2;
- (void)mapLayerDidBecomePartiallyDrawn:(VKMapView *)arg1;
- (void)mapLayerDidReloadStylesheet:(VKMapView *)arg1;
- (void)mapLayerDidFinishInitialTrackingAnimation:(VKMapView *)arg1;
- (void)mapLayer:(VKMapView *)arg1 didChangeRegionAnimated:(_Bool)arg2;
- (void)mapLayer:(VKMapView *)arg1 willChangeRegionAnimated:(_Bool)arg2;
- (void)mapLayerDidDraw:(VKMapView *)arg1;
- (void)mapLayerDidChangeVisibleRegion:(VKMapView *)arg1;
- (void)mapLayerDidFailLoadingTiles:(VKMapView *)arg1 withError:(NSError *)arg2;
- (void)mapLayerDidFinishLoadingTiles:(VKMapView *)arg1;
- (void)mapLayerDidStartLoadingTiles:(VKMapView *)arg1;
@end

