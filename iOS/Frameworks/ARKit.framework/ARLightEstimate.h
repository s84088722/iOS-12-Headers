//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface ARLightEstimate : NSObject <NSSecureCoding>
{
    double _ambientIntensity;
    double _ambientColorTemperature;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double ambientColorTemperature; // @synthesize ambientColorTemperature=_ambientColorTemperature;
@property(readonly, nonatomic) double ambientIntensity; // @synthesize ambientIntensity=_ambientIntensity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
- (id)initWithAmbientIntensity:(double)arg1 temperature:(double)arg2;

@end

