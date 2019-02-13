//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;
@protocol PUHorizontalCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUHorizontalCollectionViewLayout : UICollectionViewLayout
{
    struct CGSize _contentSize;
    NSArray *_cachedItemLayoutAttributes;
    NSArray *_cachedSectionFrames;
    struct CGRect _lastRequestedRect;
    NSArray *_lastRequestedLayoutAttributesInRect;
    double _interitemSpacing;
    id <PUHorizontalCollectionViewLayoutDelegate> _delegate;
    struct CGSize _itemSize;
    struct UIEdgeInsets _itemsContentInset;
}

+ (Class)invalidationContextClass;
@property(nonatomic) __weak id <PUHorizontalCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets itemsContentInset; // @synthesize itemsContentInset=_itemsContentInset;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect collectionViewBounds;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)init;

@end

