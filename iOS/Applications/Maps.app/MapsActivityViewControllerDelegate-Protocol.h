//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MKMapView, MapsActivityViewController;

@protocol MapsActivityViewControllerDelegate <NSObject>
- (MKMapView *)mapsActivityMapView;

@optional
- (void)mapsActivityViewController:(MapsActivityViewController *)arg1 activityCompleted:(_Bool)arg2;
- (void)mapsActivityViewControllerPresentRoutingApps:(MapsActivityViewController *)arg1;
- (void)mapsActivityViewControllerPrint:(MapsActivityViewController *)arg1;
@end

