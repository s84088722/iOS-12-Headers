//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNRequestConfiguration.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNImageBasedRequestConfiguration : VNRequestConfiguration
{
    NSArray *_inputFaceObservations;
    struct CGRect _regionOfInterest;
}

@property(copy, nonatomic) NSArray *inputFaceObservations; // @synthesize inputFaceObservations=_inputFaceObservations;
@property(nonatomic) struct CGRect regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

