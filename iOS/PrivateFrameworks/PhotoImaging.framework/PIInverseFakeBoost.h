//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIInverseFakeBoost : CIFilter
{
    double _inputBoost;
    CIImage *_inputImage;
}

+ (id)kernel;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
@property double inputBoost; // @synthesize inputBoost=_inputBoost;
- (void).cxx_destruct;
- (id)outputImage;

@end

