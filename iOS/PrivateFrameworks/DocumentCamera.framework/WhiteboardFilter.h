//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface WhiteboardFilter : CIFilter
{
    CIImage *_inputImage;
    NSNumber *_stride;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *stride; // @synthesize stride=_stride;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (id)whiteboardFilterKernel;

@end

