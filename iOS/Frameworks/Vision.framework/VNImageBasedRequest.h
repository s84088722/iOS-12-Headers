//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNRequest.h>

#import <Vision/VNFaceObservationAcceptingInternal-Protocol.h>

@class NSArray, NSString;

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal>
{
}

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (Class)configurationClass;
- (id)validatedInputFaceObservationsClippedToRegionOfInterest:(_Bool)arg1 error:(id *)arg2;
- (_Bool)getOptionalValidatedInputFaceObservations:(id *)arg1 clippedToRegionOfInterest:(_Bool)arg2 error:(id *)arg3;
- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1;
@property(copy, nonatomic) NSArray *inputFaceObservations;
- (void)applyConfigurationOfRequest:(id)arg1;
- (struct CGRect)regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGRect)regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (_Bool)isFullCoverageRegionOfInterest;
- (_Bool)validateConfigurationAndReturnError:(id *)arg1;
@property(nonatomic) struct CGRect regionOfInterest;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

