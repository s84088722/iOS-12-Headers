//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUSectionedTilingLayout.h>

@class NSIndexPath, NSMutableDictionary;
@protocol PUScrubberTilingLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUScrubberTilingLayout : PUSectionedTilingLayout
{
    struct CGSize _slitSize;
    NSIndexPath *_currentItemIndexPath;
    double _loupeWidth;
    NSIndexPath *_loupeNeighborIndexPath;
    double _loupeTransitionProgress;
    double _expandedItemWidth;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
    struct {
        _Bool respondsToAspectRatioForItemAtIndexPath;
        _Bool respondsToExpandedWidthForItemAtIndexPath;
        _Bool respondsToShouldShowTimeIndicatorForExpandedItemAtIndexPath;
    } _delegateFlags;
    _Bool _onlyShowExpandedItem;
    _Bool _showPlayheadForExpandedItem;
    _Bool _snapToExpandedItem;
    id <PUScrubberTilingLayoutDelegate> _delegate;
    double _playheadVerticalOverhang;
    double _slitAspectRatio;
    double _maxAspectRatio;
    double _currentItemTransitionProgress;
    double _currentItemFocusProgress;
    NSIndexPath *_loupeIndexPath;
    NSIndexPath *_overrideLoupeIndexPath;
    double _loupeAmount;
    NSIndexPath *_expandedItemIndexPath;
    double _expandedItemPlayheadProgress;
    struct CGSize _interItemSpacing;
    struct UIEdgeInsets _contentPadding;
}

@property(nonatomic) _Bool snapToExpandedItem; // @synthesize snapToExpandedItem=_snapToExpandedItem;
@property(nonatomic) double expandedItemPlayheadProgress; // @synthesize expandedItemPlayheadProgress=_expandedItemPlayheadProgress;
@property(nonatomic) double expandedItemWidth; // @synthesize expandedItemWidth=_expandedItemWidth;
@property(nonatomic) _Bool showPlayheadForExpandedItem; // @synthesize showPlayheadForExpandedItem=_showPlayheadForExpandedItem;
@property(nonatomic) _Bool onlyShowExpandedItem; // @synthesize onlyShowExpandedItem=_onlyShowExpandedItem;
@property(retain, nonatomic) NSIndexPath *expandedItemIndexPath; // @synthesize expandedItemIndexPath=_expandedItemIndexPath;
@property(nonatomic) double loupeAmount; // @synthesize loupeAmount=_loupeAmount;
@property(retain, nonatomic) NSIndexPath *overrideLoupeIndexPath; // @synthesize overrideLoupeIndexPath=_overrideLoupeIndexPath;
@property(readonly, nonatomic) double loupeTransitionProgress; // @synthesize loupeTransitionProgress=_loupeTransitionProgress;
@property(readonly, nonatomic) NSIndexPath *loupeIndexPath; // @synthesize loupeIndexPath=_loupeIndexPath;
@property(readonly, nonatomic) double currentItemFocusProgress; // @synthesize currentItemFocusProgress=_currentItemFocusProgress;
@property(readonly, nonatomic) double currentItemTransitionProgress; // @synthesize currentItemTransitionProgress=_currentItemTransitionProgress;
@property(nonatomic) double maxAspectRatio; // @synthesize maxAspectRatio=_maxAspectRatio;
@property(nonatomic) double slitAspectRatio; // @synthesize slitAspectRatio=_slitAspectRatio;
@property(nonatomic) struct UIEdgeInsets contentPadding; // @synthesize contentPadding=_contentPadding;
@property(nonatomic) double playheadVerticalOverhang; // @synthesize playheadVerticalOverhang=_playheadVerticalOverhang;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) __weak id <PUScrubberTilingLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(double)arg2 outNeighborIndexPath:(out id *)arg3;
- (id)_indexPathOfItemClosestToAbscissa:(double)arg1;
- (long long)_indexOfItemClosestToAbscissa:(double)arg1 inSection:(long long)arg2;
- (struct CGSize)_transformedSizeForIndexPath:(id)arg1;
- (double)_transformedHorizontalOffsetForIndexPath:(id)arg1;
- (double)_loupeAmountFor:(id)arg1;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 transitionProgress:(double)arg2;
- (float)_aspectRatioForIndexPath:(id)arg1;
- (_Bool)_shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)arg1;
- (struct CGRect)_rectForItemAtIndexPath:(id)arg1 withLoupeTransform:(_Bool)arg2 withExpanded:(_Bool)arg3;
- (struct CGSize)_slitSize;
- (double)_focusAbscissa;
@property(readonly, nonatomic) struct CGPoint focusPoint;
- (id)indexPathOfItemClosestToPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSIndexPath *currentItemIndexPath;
- (struct CGRect)contentBounds;
- (id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (struct CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (void)addLayoutInfosForTilesInRect:(struct CGRect)arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGSize)estimatedSectionSize;
- (id)preferredScrollInfo;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (void)setVisibleRect:(struct CGRect)arg1;
- (id)init;

@end

