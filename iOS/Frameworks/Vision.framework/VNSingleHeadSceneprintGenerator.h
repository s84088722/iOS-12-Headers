//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNSingleHeadSceneprintGenerator : VNEspressoModelFileBasedDetector
{
}

+ (id)configurationOptionKeysForDetectorKey;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)_observationsForSceneprintOutput:(const CDStruct_cf098810 *)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_analyzeRegionOfInterest:(struct CGRect)arg1 sceneprintOutputBuffer:(CDStruct_cf098810 *)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id *)arg5;
- (_Bool)_analyzePixelBuffer:(struct __CVBuffer *)arg1 sceneprintOutputBuffer:(CDStruct_cf098810 *)arg2 options:(id)arg3 error:(id *)arg4;

@end

