//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPSNNImageNode, MPSNNStateNode, NSArray, NSMutableArray, NSString;
@protocol MPSNNPadding;

@interface MPSNNFilterNode : NSObject
{
    NSMutableArray *_sourceImages;
    NSMutableArray *_sourceStates;
    MPSNNImageNode *_resultImage;
    NSMutableArray *_resultStates;
    id <MPSNNPadding> _paddingPolicy;
    NSString *_label;
}

@property(copy) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) id <MPSNNPadding> paddingPolicy; // @synthesize paddingPolicy=_paddingPolicy;
@property(readonly, nonatomic) MPSNNImageNode *resultImage; // @synthesize resultImage=_resultImage;
- (id)sourceStates;
- (id)sourceImages;
- (id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(CDUnknownBlockType)arg2;
- (id)gradientFiltersWithSource:(id)arg1;
- (id)gradientFiltersWithSources:(id)arg1;
- (id)gradientFilterWithSource:(id)arg1;
- (id)gradientFilterWithSources:(id)arg1;
- (Class)gradientClass;
- (id)debugQuickLookObject;
- (struct FilterGraphNode *)newFilterNode;
- (id)debugDescription;
- (void)dealloc;
- (id)resultStatesNoAllocate;
@property(readonly, nonatomic) NSArray *resultStates;
@property(readonly, nonatomic) MPSNNStateNode *resultState;
- (id)initWithSourceImages:(id)arg1 sourceStates:(id)arg2 paddingPolicy:(id)arg3;

@end

