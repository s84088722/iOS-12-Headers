//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNPooling.h>

@interface MPSCNNDilatedPoolingMax : MPSCNNPooling
{
}

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5;
@property(readonly, nonatomic) unsigned long long dilationRateY;
@property(readonly, nonatomic) unsigned long long dilationRateX;
- (id)newPlugin;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 dilationRateX:(unsigned long long)arg4 dilationRateY:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7;

@end

