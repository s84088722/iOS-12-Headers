//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRFeedCollectionViewLayoutBlueprintModifierMappable-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprint;

@protocol FRFeedCollectionViewLayoutBlueprintModifierType <FRFeedCollectionViewLayoutBlueprintModifierMappable>
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) _Bool waitable;
- (void)modifyBlueprint:(FRFeedCollectionViewLayoutBlueprint *)arg1 completion:(void (^)(FRFeedCollectionViewLayoutBlueprintModifierResult *))arg2;

@optional
- (void)collectionViewBoundsDidChange:(struct CGRect)arg1;
- (void)cancel;
@end

