//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKHIDPoint : NSObject
{
    double _altitudeAngle;
    double _azimuthAngle;
    double _force;
    double _timestamp;
    long long _type;
    struct CGPoint _location;
}

+ (id)pointWithLocation:(struct CGPoint)arg1 force:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) double azimuthAngle; // @synthesize azimuthAngle=_azimuthAngle;
@property(nonatomic) double altitudeAngle; // @synthesize altitudeAngle=_altitudeAngle;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;

@end

