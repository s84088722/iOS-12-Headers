//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/MKAnnotation-Protocol.h>
#import <PhotosUICore/PXContextualMemoriesSetting-Protocol.h>
#import <PhotosUICore/_PXCompletionHandlerManagerDelegate-Protocol.h>

@class CLLocation, CLPlacemark, NSString, PXLocationStream, _PXCompletionHandlerManager;

@interface PXContextualMemoriesLocationSetting : NSObject <_PXCompletionHandlerManagerDelegate, PXContextualMemoriesSetting, MKAnnotation>
{
    _Bool _monitorsCurrentLocation;
    CLPlacemark *_placemark;
    unsigned long long _locationState;
    PXLocationStream *_locationStream;
    _PXCompletionHandlerManager *_completionHandlerManager;
    struct CLLocationCoordinate2D _coordinate;
}

+ (struct CLLocationCoordinate2D)_simulatedLocationCoordinate;
+ (void)_setSimulatedLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingPlacemark;
+ (_Bool)automaticallyNotifiesObserversOfCoordinate;
@property(nonatomic) _Bool monitorsCurrentLocation; // @synthesize monitorsCurrentLocation=_monitorsCurrentLocation;
@property(retain, nonatomic) _PXCompletionHandlerManager *completionHandlerManager; // @synthesize completionHandlerManager=_completionHandlerManager;
@property(retain, nonatomic) PXLocationStream *locationStream; // @synthesize locationStream=_locationStream;
@property(nonatomic) unsigned long long locationState; // @synthesize locationState=_locationState;
@property(retain, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (void)requestLocationUpdateWithAccuracy:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didCallLastCompletionHandlerForCompletionHandlerManager:(id)arg1;
- (void)_updatePlacemarkForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_updatePlacemarkWithPlacemarks:(id)arg1 error:(id)arg2;
- (void)resetToDefault;
@property(readonly, nonatomic) CLLocation *location;
- (id)_locationForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_initiateLocationAcquisitionWithAccuracy:(double)arg1;
- (void)_handleLocationAcquisitionUpdate:(id)arg1;
- (void)_setCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *headerTitle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

