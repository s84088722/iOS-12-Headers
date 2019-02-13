//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeRecolor : CIFilter
{
    CIImage *inputImage;
    CIImage *inputSource;
    CIImage *inputMask;
    NSNumber *inputNoiseAmount;
    NSNumber *inputBrightness;
    NSNumber *inputRecovery;
    CIVector *inputExtent;
    NSNumber *inputWhiteCutoff;
    NSNumber *inputChroma;
}

@property(retain, nonatomic) NSNumber *inputChroma; // @synthesize inputChroma;
@property(retain, nonatomic) NSNumber *inputWhiteCutoff; // @synthesize inputWhiteCutoff;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) NSNumber *inputRecovery; // @synthesize inputRecovery;
@property(retain, nonatomic) NSNumber *inputBrightness; // @synthesize inputBrightness;
@property(retain, nonatomic) NSNumber *inputNoiseAmount; // @synthesize inputNoiseAmount;
@property(retain, nonatomic) CIImage *inputMask; // @synthesize inputMask;
@property(retain, nonatomic) CIImage *inputSource; // @synthesize inputSource;
- (id)outputImage;
- (id)kernelRecovery;
- (id)kernelRepair;

@end

