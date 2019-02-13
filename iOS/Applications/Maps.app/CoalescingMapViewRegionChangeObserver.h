//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CoalescingMapViewRegionChangeObserverDelegate;

__attribute__((visibility("hidden")))
@interface CoalescingMapViewRegionChangeObserver : NSObject
{
    id <CoalescingMapViewRegionChangeObserverDelegate> _delegate;
    double _minDistanceThreshold;
    double _minZoomLevelRatio;
    double _lastZoomLevel;
    double _minZoomLevelThreshold;
    CDStruct_2c43369c _lastCenterCoordinate;
}

@property(nonatomic) double minZoomLevelThreshold; // @synthesize minZoomLevelThreshold=_minZoomLevelThreshold;
@property(nonatomic) double lastZoomLevel; // @synthesize lastZoomLevel=_lastZoomLevel;
@property(nonatomic) CDStruct_c3b9c2ee lastCenterCoordinate; // @synthesize lastCenterCoordinate=_lastCenterCoordinate;
@property(nonatomic) double minZoomLevelRatio; // @synthesize minZoomLevelRatio=_minZoomLevelRatio;
@property(nonatomic) double minDistanceThreshold; // @synthesize minDistanceThreshold=_minDistanceThreshold;
@property(nonatomic) __weak id <CoalescingMapViewRegionChangeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleMapViewRegionDidChange:(id)arg1;
- (id)init;

@end

