//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNReshapeNode : MPSNNFilterNode
{
    unsigned long long _resultWidth;
    unsigned long long _resultHeight;
    unsigned long long _resultFeatureChannels;
}

+ (id)nodeWithSource:(id)arg1 resultWidth:(unsigned long long)arg2 resultHeight:(unsigned long long)arg3 resultFeatureChannels:(unsigned long long)arg4;
- (Class)gradientClass;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 resultWidth:(unsigned long long)arg2 resultHeight:(unsigned long long)arg3 resultFeatureChannels:(unsigned long long)arg4;

@end

