/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNReshapeNode : MPSNNFilterNode {

	unsigned long long _resultWidth;
	unsigned long long _resultHeight;
	unsigned long long _resultFeatureChannels;

}
+(id)nodeWithSource:(id)arg1 resultWidth:(unsigned long long)arg2 resultHeight:(unsigned long long)arg3 resultFeatureChannels:(unsigned long long)arg4 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 resultWidth:(unsigned long long)arg2 resultHeight:(unsigned long long)arg3 resultFeatureChannels:(unsigned long long)arg4 ;
@end
