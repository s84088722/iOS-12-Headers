//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIClone : CIFilter
{
    CIImage *_inputImage;
    CIImage *_inputMaskImage;
    struct CGPoint _inputOffset;
}

@property struct CGPoint inputOffset; // @synthesize inputOffset=_inputOffset;
@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage=_inputMaskImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;

@end

