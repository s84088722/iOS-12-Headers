/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNReduceUnary : MPSCNNKernel {

	SCD_Struct_MP4 _clipRectSource;
	int _reduceOp;
	float _weightValue;

}

@property (assign,nonatomic) SCD_Struct_MP4 clipRectSource;              //@synthesize clipRectSource=_clipRectSource - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(SCD_Struct_MP4)clipRectSource;
-(void)setWeightValue:(float)arg1 ;
-(id)initWithDevice:(id)arg1 reduceOperation:(int)arg2 ;
-(void)setClipRectSource:(SCD_Struct_MP4)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
@end
