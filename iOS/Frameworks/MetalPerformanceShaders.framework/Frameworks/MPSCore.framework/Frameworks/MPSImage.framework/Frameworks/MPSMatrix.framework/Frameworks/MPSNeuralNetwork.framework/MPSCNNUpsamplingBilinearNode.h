//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNUpsamplingBilinearNode : MPSNNFilterNode
{
    double _scaleFactorX;
    double _scaleFactorY;
    _Bool _alignCorners;
}

+ (id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 alignCorners:(_Bool)arg4;
+ (id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool alignCorners; // @synthesize alignCorners=_alignCorners;
@property(readonly, nonatomic) double scaleFactorY; // @synthesize scaleFactorY=_scaleFactorY;
@property(readonly, nonatomic) double scaleFactorX; // @synthesize scaleFactorX=_scaleFactorX;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 alignCorners:(_Bool)arg4;
- (id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3;

@end

