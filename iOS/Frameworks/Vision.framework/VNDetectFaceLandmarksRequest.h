//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import <Vision/VNFaceObservationAccepting-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface VNDetectFaceLandmarksRequest : VNImageBasedRequest <VNFaceObservationAccepting>
{
}

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
+ (Class)configurationClass;
+ (const CDStruct_7d93034e *)revisionAvailability;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedLandmarks:(id)arg4;
- (long long)dependencyProcessingOrdinality;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
@property(nonatomic) _Bool performBlinkDetection;
@property(nonatomic) _Bool refineRightEyeRegion;
@property(nonatomic) _Bool refineLeftEyeRegion;
@property(nonatomic) _Bool refineMouthRegion;
@property(retain, nonatomic) NSNumber *cascadeStepCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly) Class superclass;

@end

