//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSImageTransformProvider;

@interface MPSNNScaleNode : MPSNNFilterNode
{
    id <MPSImageTransformProvider> _transformProvider;
    CDStruct_da2e99ad _size;
}

+ (id)nodeWithSource:(id)arg1 outputSize:(CDStruct_14f26992)arg2;
+ (id)nodeWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(CDStruct_14f26992)arg3;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithSource:(id)arg1 outputSize:(CDStruct_14f26992)arg2;
- (id)initWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(CDStruct_14f26992)arg3;
- (id)privateInitWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(CDStruct_14f26992)arg3;

@end

