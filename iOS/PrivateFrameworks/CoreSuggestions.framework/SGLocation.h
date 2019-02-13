//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/SGObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>
#import <CoreSuggestions/SGEventLocationForGeocode-Protocol.h>

@class NSData, NSString;

@interface SGLocation : SGObject <SGEventLocationForGeocode, NSCopying, NSSecureCoding>
{
    unsigned long long _locationType;
    NSString *_label;
    NSString *_address;
    double _latitude;
    double _longitude;
    double _accuracy;
    double _quality;
    NSString *_airportCode;
    NSData *_handle;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) NSString *airportCode; // @synthesize airportCode=_airportCode;
@property(readonly, nonatomic) double quality; // @synthesize quality=_quality;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long locationType; // @synthesize locationType=_locationType;
- (void).cxx_destruct;
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;
- (id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;
- (id)geocodeHandle;
- (double)geocodeAccuracy;
- (double)geocodeLongitude;
- (double)geocodeLatitude;
- (_Bool)geocodeIsEnd;
- (_Bool)geocodeIsStart;
- (id)geocodeAirportCode;
- (id)geocodeAddress;
- (id)geocodeLabel;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isGeocoded) _Bool geocoded;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToLocation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 latitude:(double)arg7 longitude:(double)arg8 accuracy:(double)arg9 quality:(double)arg10 handle:(id)arg11;
- (id)initWithLocation:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 handle:(id)arg5;
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 airportCode:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 accuracy:(double)arg8 quality:(double)arg9;
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 accuracy:(double)arg7 quality:(double)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

