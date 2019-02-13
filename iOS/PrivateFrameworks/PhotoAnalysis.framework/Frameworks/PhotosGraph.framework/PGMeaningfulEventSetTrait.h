//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@class NSSet;

@interface PGMeaningfulEventSetTrait : PGMeaningfulEventTrait
{
    NSSet *_nodes;
    NSSet *_negativeNodes;
    CDUnknownBlockType _additionalMatchingBlock;
}

@property(copy, nonatomic) CDUnknownBlockType additionalMatchingBlock; // @synthesize additionalMatchingBlock=_additionalMatchingBlock;
@property(readonly, nonatomic) NSSet *negativeNodes; // @synthesize negativeNodes=_negativeNodes;
@property(readonly, nonatomic) NSSet *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (_Bool)isActive;
- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;
- (id)initWithNodes:(id)arg1;

@end

