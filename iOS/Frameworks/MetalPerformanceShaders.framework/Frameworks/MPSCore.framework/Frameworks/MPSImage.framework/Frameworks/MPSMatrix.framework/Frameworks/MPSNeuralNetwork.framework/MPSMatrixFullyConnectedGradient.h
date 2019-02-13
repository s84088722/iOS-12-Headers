//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@interface MPSMatrixFullyConnectedGradient : MPSMatrixBinaryKernel
{
    unsigned long long _sourceNumberOfFeatureVectors;
    unsigned long long _sourceInputFeatureChannels;
    unsigned long long _sourceOutputFeatureChannels;
    double _alpha;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) unsigned long long sourceOutputFeatureChannels; // @synthesize sourceOutputFeatureChannels=_sourceOutputFeatureChannels;
@property(nonatomic) unsigned long long sourceInputFeatureChannels; // @synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels;
@property(nonatomic) unsigned long long sourceNumberOfFeatureVectors; // @synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeGradientForWeightsAndBiasToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 resultGradientForWeightMatrix:(id)arg4 resultGradientForBiasVector:(id)arg5;
- (void)encodeGradientForDataToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 weightMatrix:(id)arg3 resultGradientForDataMatrix:(id)arg4;
- (id)initWithDevice:(id)arg1;

@end

