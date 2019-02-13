//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAccordionFoldTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    NSNumber *inputBottomHeight;
    NSNumber *inputNumberOfFolds;
    NSNumber *inputFoldShadowAmount;
    NSNumber *inputTime;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(retain, nonatomic) NSNumber *inputFoldShadowAmount; // @synthesize inputFoldShadowAmount;
@property(retain, nonatomic) NSNumber *inputNumberOfFolds; // @synthesize inputNumberOfFolds;
@property(retain, nonatomic) NSNumber *inputBottomHeight; // @synthesize inputBottomHeight;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (id)_kernelMix;
- (id)_kernelWarpT;
- (id)_kernelWarpS;

@end

