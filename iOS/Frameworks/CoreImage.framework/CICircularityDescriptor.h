//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CICircularityDescriptor : CIFilter
{
    CIImage *inputImage;
    CIImage *inputCentroid;
    CIVector *inputExtent;
}

@property(retain, nonatomic) CIImage *inputCentroid; // @synthesize inputCentroid;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
- (id)outputImage;

@end

