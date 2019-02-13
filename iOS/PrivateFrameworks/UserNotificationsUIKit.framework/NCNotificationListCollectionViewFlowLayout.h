//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, NSMutableArray;

@interface NCNotificationListCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    _Bool _isChangingBounds;
    _Bool _showingNotificationsHistory;
    double _forcedContentSizeHeight;
    unsigned long long _animationState;
    NSMutableArray *_insertedIndexPaths;
    NSMutableArray *_removedIndexPaths;
    NSMutableArray *_replacedIndexPaths;
    NSIndexPath *_animationLeadingNotificationRequestIndexPath;
}

+ (Class)layoutAttributesClass;
@property(retain, nonatomic) NSIndexPath *animationLeadingNotificationRequestIndexPath; // @synthesize animationLeadingNotificationRequestIndexPath=_animationLeadingNotificationRequestIndexPath;
@property(retain, nonatomic) NSMutableArray *replacedIndexPaths; // @synthesize replacedIndexPaths=_replacedIndexPaths;
@property(retain, nonatomic) NSMutableArray *removedIndexPaths; // @synthesize removedIndexPaths=_removedIndexPaths;
@property(retain, nonatomic) NSMutableArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
@property(nonatomic) unsigned long long animationState; // @synthesize animationState=_animationState;
@property(nonatomic, getter=isShowingNotificationsHistory) _Bool showingNotificationsHistory; // @synthesize showingNotificationsHistory=_showingNotificationsHistory;
@property(nonatomic) double forcedContentSizeHeight; // @synthesize forcedContentSizeHeight=_forcedContentSizeHeight;
- (void).cxx_destruct;
- (_Bool)_isCellFrameVisibleForCoalescingAnimation:(struct CGRect)arg1;
- (long long)_zIndexForCellAtIndexPath:(id)arg1;
- (double)_animationScaleForItemWithIndexDifference:(long long)arg1 frame:(struct CGRect)arg2 leadingNotificationFrame:(struct CGRect)arg3;
- (void)_configureLayoutAttributesForCoalescingAnimation:(id)arg1;
- (void)_configureLayoutAttributesForCoalescing:(id)arg1;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)setAnimationState:(unsigned long long)arg1 forLeadingNotificationRequestAtIndexPath:(id)arg2;
- (id)init;

@end

