//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CITemperatureAndTint : CIFilter
{
    CIImage *inputImage;
    CIVector *inputNeutral;
    CIVector *inputTargetNeutral;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputTargetNeutral; // @synthesize inputTargetNeutral;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
@property(retain, nonatomic) CIVector *inputNeutral; // @dynamic inputNeutral;

@end

