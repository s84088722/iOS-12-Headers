//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisintegrateWithMaskTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputMaskImage;
    NSNumber *inputTime;
    NSNumber *inputShadowRadius;
    NSNumber *inputShadowDensity;
    CIVector *inputShadowOffset;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputShadowOffset; // @synthesize inputShadowOffset;
@property(retain, nonatomic) NSNumber *inputShadowDensity; // @synthesize inputShadowDensity;
@property(retain, nonatomic) NSNumber *inputShadowRadius; // @synthesize inputShadowRadius;
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelG;
- (id)_kernel;

@end

