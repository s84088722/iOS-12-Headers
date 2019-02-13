//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeSpecular : CIFilter
{
    CIImage *inputImage;
    CIImage *inputSource;
    CIImage *inputSpecularMask;
    NSNumber *inputSpecularThreshold;
    NSNumber *inputSpecIntensity;
    NSNumber *inputDebugFlag;
}

@property(retain, nonatomic) NSNumber *inputDebugFlag; // @synthesize inputDebugFlag;
@property(retain, nonatomic) NSNumber *inputSpecIntensity; // @synthesize inputSpecIntensity;
@property(retain, nonatomic) NSNumber *inputSpecularThreshold; // @synthesize inputSpecularThreshold;
@property(retain, nonatomic) CIImage *inputSpecularMask; // @synthesize inputSpecularMask;
@property(retain, nonatomic) CIImage *inputSource; // @synthesize inputSource;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

