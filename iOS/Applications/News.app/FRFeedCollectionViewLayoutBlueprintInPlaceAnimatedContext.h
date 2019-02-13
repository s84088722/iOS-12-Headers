//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintAnimatedContextType-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprint, FRFeedCollectionViewLayoutBlueprintDiff, NSIndexSet, NSOrderedSet, NSSet, NSString;

@interface FRFeedCollectionViewLayoutBlueprintInPlaceAnimatedContext : NSObject <FRFeedCollectionViewLayoutBlueprintAnimatedContextType>
{
    FRFeedCollectionViewLayoutBlueprint *_fromBlueprint;
    FRFeedCollectionViewLayoutBlueprint *_toBlueprint;
    FRFeedCollectionViewLayoutBlueprintDiff *_diff;
    NSSet *_insertedIndexPathsToZoomAndFade;
    NSOrderedSet *_insertedIndexPaths;
    NSIndexSet *_insertedSections;
    struct CGPoint _centerOfContainingAreaOfContiguousUpdate;
    struct CGRect _containingAreaOfContiguousUpdate;
}

@property(retain, nonatomic) NSIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
@property(retain, nonatomic) NSOrderedSet *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
@property(retain, nonatomic) NSSet *insertedIndexPathsToZoomAndFade; // @synthesize insertedIndexPathsToZoomAndFade=_insertedIndexPathsToZoomAndFade;
@property(nonatomic) struct CGPoint centerOfContainingAreaOfContiguousUpdate; // @synthesize centerOfContainingAreaOfContiguousUpdate=_centerOfContainingAreaOfContiguousUpdate;
@property(nonatomic) struct CGRect containingAreaOfContiguousUpdate; // @synthesize containingAreaOfContiguousUpdate=_containingAreaOfContiguousUpdate;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintDiff *diff; // @synthesize diff=_diff;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *toBlueprint; // @synthesize toBlueprint=_toBlueprint;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *fromBlueprint; // @synthesize fromBlueprint=_fromBlueprint;
- (void).cxx_destruct;
- (struct CGAffineTransform)_transformForInsertedLayoutAttributesInContiguousArea:(id)arg1;
- (void)_calculateContiguousRegionsInUpdateForAnimationTransform;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 withTopOffsetBlock:(CDUnknownBlockType)arg2;
- (id)initWithFromBlueprint:(id)arg1 toBlueprint:(id)arg2 andDiff:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

