//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNFaceObservationAccepting-Protocol.h>

@class NSArray;

@protocol VNFaceObservationAcceptingInternal <VNFaceObservationAccepting>
- (NSArray *)validatedInputFaceObservationsClippedToRegionOfInterest:(_Bool)arg1 error:(id *)arg2;
- (_Bool)getOptionalValidatedInputFaceObservations:(id *)arg1 clippedToRegionOfInterest:(_Bool)arg2 error:(id *)arg3;
@end

