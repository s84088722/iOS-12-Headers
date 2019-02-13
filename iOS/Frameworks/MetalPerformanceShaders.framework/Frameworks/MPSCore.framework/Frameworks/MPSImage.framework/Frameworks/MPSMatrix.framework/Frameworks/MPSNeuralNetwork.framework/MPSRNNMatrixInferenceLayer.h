//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@class MPSMatrixMultiplication;

@interface MPSRNNMatrixInferenceLayer : MPSKernel
{
    int *layerTypes;
    void **layers;
    void **forwardLayers;
    int *forwardLayerTypes;
    unsigned long long nForwardLayers;
    void **backwardLayers;
    int *backwardLayerTypes;
    unsigned long long nBackwardLayers;
    MPSMatrixMultiplication *gemmKernel;
    MPSMatrixMultiplication *gemmKernelNonTranspose;
    _Bool _recurrentOutputIsTemporary;
    _Bool _storeAllIntermediateStates;
    unsigned long long _numberOfLayers;
    unsigned long long _bidirectionalCombineMode;
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned long long outputFeatureChannels; // @synthesize outputFeatureChannels=_outputFeatureChannels;
@property(readonly, nonatomic) unsigned long long inputFeatureChannels; // @synthesize inputFeatureChannels=_inputFeatureChannels;
@property(nonatomic) unsigned long long bidirectionalCombineMode; // @synthesize bidirectionalCombineMode=_bidirectionalCombineMode;
@property(nonatomic) _Bool storeAllIntermediateStates; // @synthesize storeAllIntermediateStates=_storeAllIntermediateStates;
@property(nonatomic) _Bool recurrentOutputIsTemporary; // @synthesize recurrentOutputIsTemporary=_recurrentOutputIsTemporary;
@property(readonly, nonatomic) unsigned long long numberOfLayers; // @synthesize numberOfLayers=_numberOfLayers;
- (void)encodeBidirectionalSequenceToCommandBuffer:(id)arg1 sourceSequence:(id)arg2 destinationForwardMatrices:(id)arg3 destinationBackwardMatrices:(id)arg4;
- (void)encodeSequenceToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 sourceOffsets:(unsigned long long *)arg3 destinationMatrices:(id)arg4 destinationOffsets:(unsigned long long *)arg5 recurrentInputState:(id)arg6 recurrentOutputStates:(id)arg7;
- (void)encodeSequenceToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 destinationMatrices:(id)arg3 recurrentInputState:(id)arg4 recurrentOutputStates:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 rnnDescriptors:(id)arg2;
- (id)initWithDevice:(id)arg1 rnnDescriptor:(id)arg2;

@end

