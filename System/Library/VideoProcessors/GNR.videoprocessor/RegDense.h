/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:57:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer, MTLTexture;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@class PyramidStorage, FigMetalContext, RegDenseShaders, RegPyrFusion, RegPyrFusionResources;

@interface RegDense : NSObject {

	PyramidStorage* _pyrConfidence;
	FigMetalContext* _metal;
	RegDenseShaders* _shaders;
	RegPyrFusion* _sfRegPyr;
	PyramidStorage* _refPyramid;
	PyramidStorage* _nonRefPyramid;
	RegPyrFusionResources* _sfRegPyrBuffers;
	id<MTLBuffer> _homographyMatrixBuffer;
	id<MTLTexture> _blendingWeight;

}
-(void)releaseResources;
-(id)initWithMetalContext:(id)arg1 ;
-(unsigned long long)computeBufferOffset:(unsigned long long*)arg1 width:(int)arg2 height:(int)arg3 format:(unsigned long long)arg4 ;
-(int)blendingWeightUsing:(id)arg1 and:(id)arg2 homography:(SCD_Struct_Re0*)arg3 relativeBrightness:(float)arg4 ;
-(int)warpFrame:(CVBufferRef)arg1 output:(CVBufferRef)arg2 homography:(SCD_Struct_Re0*)arg3 config:(FusionConfiguration*)arg4 ;
-(int)copy420Buffer:(CVBufferRef)arg1 output:(CVBufferRef)arg2 ;
-(int)pyramidConfidence:(id)arg1 input:(id)arg2 ;
-(unsigned long long)computeScratchBufferOffsets;
-(int)allocateResourcesForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 scratchBuffer:(id)arg3 ;
-(int)runWithAmbnrBuffers:(id)arg1 ambnrStage:(id)arg2 referenceFrameIndex:(int)arg3 nonReferenceFrameIndex:(int)arg4 homography:(SCD_Struct_Re0*)arg5 scratchBuffer:(CVBufferRef)arg6 config:(FusionConfiguration*)arg7 exposures:(exposureParameters*)arg8 ;
-(void)dealloc;
-(void)reset;
@end

