//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSState.h>

@class NSData;

@interface MPSCNNLossLabels : MPSState
{
    CDStruct_da2e99ad _lossImageSize;
    _Bool _isScalarLoss;
    unsigned long long _numNonZeroWeights;
    NSData *_userData;
    unsigned long long _numFeatureChannels_labels;
    unsigned long long _numFeatureChannels_loss;
}

- (void)dealloc;
- (id)weightsImage;
- (id)labelsImage;
- (id)lossImage;
- (id)initWithDevice:(id)arg1 lossImageSize:(CDStruct_14f26992)arg2 labelsDescriptor:(id)arg3 weightsDescriptor:(id)arg4;
- (id)initWithDevice:(id)arg1 labelsDescriptor:(id)arg2;
- (id)init;

@end
