/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class PAEKeyerMatteTools, PAEKeyerPreprocess;

@interface PAEKeyer : PAEFilterDefaultBase {

	OMSamples* _omSamples;
	BOOL _isMotion;
	SCD_Struct_PV20 _prevRationalTime;
	SCD_Union_PA87* _prevRectanglesFrame;
	HGBitmapLoader* _lutsBitmapLoaderCache;
	PCMutex* _cacheMutex;
	PAEKeyerMatteTools* _matteTools;
	PAEKeyerPreprocess* _preprocessTools;

}
-(id)initWithAPIManager:(id)arg1 ;
-(int)getColorPrimaries;
-(HGRef<HGNode>*)getKeyerNode:(HGRef<HGNode>*)arg1 omKeyer:(PAEKeyerOMKeyer2D*)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)isLumaKey;
-(BOOL)isSimpleKey;
-(BOOL)use32x32Histogram;
-(BOOL)sampleEdge:(OMSamplesElem*)arg1 renderInfo:(SCD_Struct_PA78*)arg2 width:(float)arg3 height:(float)arg4 ;
-(BOOL)sampleRect:(OMSamplesElem*)arg1 renderInfo:(SCD_Struct_PA78*)arg2 width:(float)arg3 height:(float)arg4 ;
-(void)setInitialSamples:(OMSamplesElem*)arg1 ;
-(void)getInputWidth:(float*)arg1 height:(float*)arg2 renderInfo:(SCD_Struct_PA78*)arg3 ;
-(void)computeModel:(BOOL)arg1 atTime:(/*function pointer*/void**)arg2 ;
-(BOOL)pullInitialKey:(id*)arg1 ;
-(double)autokeyAmountToHistoPercent:(double)arg1 ;
-(void)clearKey;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA78*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA78*)arg1 inputInfo:(SCD_Struct_PA79)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)getBlendOptionsAtTime:(/*function pointer*/void**)arg1 ;
-(id)apiManager;
-(void)dealloc;
-(id)properties;
@end

