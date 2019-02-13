//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixBatchNormalization : MPSMatrixUnaryKernel
{
    _Bool _computeStatistics;
    int _neuronType;
    float _neuronA;
    float _neuronB;
    float _neuronC;
    float _epsilon;
    unsigned long long _sourceNumberOfFeatureVectors;
    unsigned long long _sourceInputFeatureChannels;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) _Bool computeStatistics; // @synthesize computeStatistics=_computeStatistics;
@property(nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) float neuronC; // @synthesize neuronC=_neuronC;
@property(nonatomic) float neuronB; // @synthesize neuronB=_neuronB;
@property(nonatomic) float neuronA; // @synthesize neuronA=_neuronA;
@property(nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
@property(nonatomic) unsigned long long sourceInputFeatureChannels; // @synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels;
@property(nonatomic) unsigned long long sourceNumberOfFeatureVectors; // @synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors;
- (id)debugDescription;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4;
- (float)neuronParameterC;
- (float)neuronParameterB;
- (float)neuronParameterA;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 meanVector:(id)arg3 varianceVector:(id)arg4 gammaVector:(id)arg5 betaVector:(id)arg6 resultMatrix:(id)arg7;
- (id)initWithDevice:(id)arg1;

@end

