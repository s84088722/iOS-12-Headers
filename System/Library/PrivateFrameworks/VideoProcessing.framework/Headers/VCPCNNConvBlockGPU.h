/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPCNNConvBlock.h>

@class MPSCNNConvolution;

@interface VCPCNNConvBlockGPU : VCPCNNConvBlock {

	float* _batchNormMean;
	float* _batchNormVar;
	float* _batchNormGamma;
	float* _batchNormBeta;
	MPSCNNConvolution* _mpsConv;

}
-(int)initializeRest;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(void)releaseBatchNormMemory;
-(int)readBatchNormParam:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(int)fillConvWeightsGPU;
-(int)gpuForward;
-(int)forward;
-(void)dealloc;
@end
