//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/OFNSOperation.h>

@class CLGeocoder, CLLocation, NSArray;

@interface OFCLGeocoderOperation : OFNSOperation
{
    CLGeocoder *_geocoder;
    CLLocation *_location;
    double _accuracy;
    NSArray *_placemarks;
}

+ (double)recommendedAccuracy;
+ (id)operationWithLocation:(id)arg1 accuracy:(double)arg2;
+ (id)operationWithLocation:(id)arg1;
@property(retain) NSArray *placemarks; // @synthesize placemarks=_placemarks;
- (void)cleanupOperation;
- (void)finishOperation;
- (void)cancelOperation;
- (unsigned long long)launchOperation;
- (void)dealloc;
- (id)initWithLocation:(id)arg1 accuracy:(double)arg2;

@end

