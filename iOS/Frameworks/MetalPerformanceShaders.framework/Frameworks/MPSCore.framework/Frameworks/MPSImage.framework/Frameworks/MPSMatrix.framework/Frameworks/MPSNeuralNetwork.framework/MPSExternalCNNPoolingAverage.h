//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSExternalCNNUnary.h>

#import <MPSNeuralNetwork/MPSExternalCNNPoolingAverage-Protocol.h>

@class NSString;

@interface MPSExternalCNNPoolingAverage : MPSExternalCNNUnary <MPSExternalCNNPoolingAverage>
{
}

- (unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const CDStruct_53a8ffcf *)arg4;
- (unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const CDStruct_15cf940b *)arg5 destinationTexture:(id)arg6 destinationInfo:(const CDStruct_3d604284 *)arg7 zeroPadSizeX:(unsigned long long)arg8 zeroPadSizeY:(unsigned long long)arg9;
- (unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const CDStruct_15cf940b *)arg5 destinationTexture:(id)arg6 destinationInfo:(const CDStruct_3d604284 *)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

