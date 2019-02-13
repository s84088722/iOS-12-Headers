//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration
{
    _Bool _reportCharacterBoxes;
    _Bool _detectDiacritics;
    _Bool _minimizeFalseDetections;
    unsigned long long _algorithm;
    unsigned long long _minimumCharacterPixelHeight;
    NSString *_textRecognition;
}

@property(copy, nonatomic) NSString *textRecognition; // @synthesize textRecognition=_textRecognition;
@property(nonatomic) _Bool minimizeFalseDetections; // @synthesize minimizeFalseDetections=_minimizeFalseDetections;
@property(nonatomic) _Bool detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property(nonatomic) unsigned long long minimumCharacterPixelHeight; // @synthesize minimumCharacterPixelHeight=_minimumCharacterPixelHeight;
@property(nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) _Bool reportCharacterBoxes; // @synthesize reportCharacterBoxes=_reportCharacterBoxes;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)arg1;

@end

