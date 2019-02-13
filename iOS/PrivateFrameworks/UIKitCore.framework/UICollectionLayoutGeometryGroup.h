//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, _UICollectionLayoutGeometryGroupSolution;
@protocol UICollectionLayoutGeometryGroupConfiguration;

__attribute__((visibility("hidden")))
@interface UICollectionLayoutGeometryGroup : NSObject <NSCopying>
{
    _Bool _heightUseContainerHeight;
    _Bool _heightUseContentHeight;
    _Bool _widthUseContainerWidth;
    _Bool _widthUseContentWidth;
    _Bool _alignItemsLeading;
    _Bool _alignItemsTrailing;
    _Bool _alignItemsJustify;
    _Bool _alignItemsTop;
    _Bool _alignItemsBottom;
    _Bool _alignItemsCenter;
    _Bool _orthogonalAlignItemsLeading;
    _Bool _orthogonalAlignItemsTrailing;
    _Bool _orthogonalAlignItemsJustify;
    _Bool _orthogonalAlignItemsTop;
    _Bool _orthogonalAlignItemsBottom;
    _Bool _orthogonalAlignItemsCenter;
    _Bool _layoutDirectionVertical;
    _Bool _alignItemsWithGridSpacing;
    id <UICollectionLayoutGeometryGroupConfiguration> _configuration;
    NSArray *_attributes;
    NSArray *_items;
    _UICollectionLayoutGeometryGroupSolution *_layoutSolution;
    double _height;
    double _heightAsFractionOfContainerHeight;
    double _width;
    double _widthAsFractionOfContainerWidth;
    long long _itemCountComputedToFit;
    long long _maximumNumberOfItems;
    double _leadingSpace;
    double _trailingSpace;
    double _topSpace;
    double _bottomSpace;
    double _minimumInterItemSpacing;
    long long _gridRowCount;
    long long _gridColumnCount;
    double _lineSpacing;
    long long _repeatCount;
}

+ (id)groupWithAttributes:(id)arg1 items:(id)arg2;
+ (id)groupWithConfiguration:(id)arg1;
@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) _Bool alignItemsWithGridSpacing; // @synthesize alignItemsWithGridSpacing=_alignItemsWithGridSpacing;
@property(nonatomic) _Bool layoutDirectionVertical; // @synthesize layoutDirectionVertical=_layoutDirectionVertical;
@property(nonatomic) _Bool orthogonalAlignItemsCenter; // @synthesize orthogonalAlignItemsCenter=_orthogonalAlignItemsCenter;
@property(nonatomic) _Bool orthogonalAlignItemsBottom; // @synthesize orthogonalAlignItemsBottom=_orthogonalAlignItemsBottom;
@property(nonatomic) _Bool orthogonalAlignItemsTop; // @synthesize orthogonalAlignItemsTop=_orthogonalAlignItemsTop;
@property(nonatomic) _Bool orthogonalAlignItemsJustify; // @synthesize orthogonalAlignItemsJustify=_orthogonalAlignItemsJustify;
@property(nonatomic) _Bool orthogonalAlignItemsTrailing; // @synthesize orthogonalAlignItemsTrailing=_orthogonalAlignItemsTrailing;
@property(nonatomic) _Bool orthogonalAlignItemsLeading; // @synthesize orthogonalAlignItemsLeading=_orthogonalAlignItemsLeading;
@property(nonatomic) long long gridColumnCount; // @synthesize gridColumnCount=_gridColumnCount;
@property(nonatomic) long long gridRowCount; // @synthesize gridRowCount=_gridRowCount;
@property(nonatomic) double minimumInterItemSpacing; // @synthesize minimumInterItemSpacing=_minimumInterItemSpacing;
@property(nonatomic) _Bool alignItemsCenter; // @synthesize alignItemsCenter=_alignItemsCenter;
@property(nonatomic) _Bool alignItemsBottom; // @synthesize alignItemsBottom=_alignItemsBottom;
@property(nonatomic) _Bool alignItemsTop; // @synthesize alignItemsTop=_alignItemsTop;
@property(nonatomic) _Bool alignItemsJustify; // @synthesize alignItemsJustify=_alignItemsJustify;
@property(nonatomic) _Bool alignItemsTrailing; // @synthesize alignItemsTrailing=_alignItemsTrailing;
@property(nonatomic) _Bool alignItemsLeading; // @synthesize alignItemsLeading=_alignItemsLeading;
@property(nonatomic) double bottomSpace; // @synthesize bottomSpace=_bottomSpace;
@property(nonatomic) double topSpace; // @synthesize topSpace=_topSpace;
@property(nonatomic) double trailingSpace; // @synthesize trailingSpace=_trailingSpace;
@property(nonatomic) double leadingSpace; // @synthesize leadingSpace=_leadingSpace;
@property(nonatomic) long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
@property(nonatomic) long long itemCountComputedToFit; // @synthesize itemCountComputedToFit=_itemCountComputedToFit;
@property(nonatomic) double widthAsFractionOfContainerWidth; // @synthesize widthAsFractionOfContainerWidth=_widthAsFractionOfContainerWidth;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) _Bool widthUseContentWidth; // @synthesize widthUseContentWidth=_widthUseContentWidth;
@property(nonatomic) _Bool widthUseContainerWidth; // @synthesize widthUseContainerWidth=_widthUseContainerWidth;
@property(nonatomic) double heightAsFractionOfContainerHeight; // @synthesize heightAsFractionOfContainerHeight=_heightAsFractionOfContainerHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool heightUseContentHeight; // @synthesize heightUseContentHeight=_heightUseContentHeight;
@property(nonatomic) _Bool heightUseContainerHeight; // @synthesize heightUseContainerHeight=_heightUseContainerHeight;
@property(retain, nonatomic) _UICollectionLayoutGeometryGroupSolution *layoutSolution; // @synthesize layoutSolution=_layoutSolution;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) id <UICollectionLayoutGeometryGroupConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (_Bool)_dimensionOrthogonalToLayoutAxisIsContentBased;
- (double)_dimensionAlongLayoutAxisForContainerDimensions:(struct CGSize)arg1;
- (struct CGSize)_specifiedGroupSizeForContainerSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)contentEdgeInsets;
- (_Bool)_hasItemOrthogonalAlignmentSpecified;
- (long long)_orthogonalAlignmentOption;
- (long long)_alignmentOption;
- (_Bool)_hasItemAlignmentSpecified;
- (void)_parseAttributes:(id)arg1;
- (id)_effectiveGroupItemForIndex:(long long)arg1;
- (id)_effectiveGroupItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_prepareWithContainerDimensions:(struct CGSize)arg1 sizeProvider:(id)arg2;
- (void)_prepareGridWithContainerDimensions:(struct CGSize)arg1 sizeProvider:(id)arg2;
- (void)prepareWithContainerDimensions:(struct CGSize)arg1 sizeProvider:(id)arg2;
- (void)addItem:(id)arg1;
- (void)addAttribute:(id)arg1;
- (id)description;
- (id)initWithAttributes:(id)arg1 items:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

