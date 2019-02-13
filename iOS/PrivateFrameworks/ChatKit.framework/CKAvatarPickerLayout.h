//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, UICollectionViewLayoutAttributes;
@protocol CKAvatarPickerLayoutDelegate;

@interface CKAvatarPickerLayout : UICollectionViewLayout
{
    unsigned long long _layoutMode;
    id <CKAvatarPickerLayoutDelegate> _delegate;
    UICollectionViewLayoutAttributes *_titleSupplementaryAttr;
    NSArray *_attrCollection;
    NSArray *_supplementaryAttrCollection;
    NSArray *_cutoutAttrCollection;
    UICollectionViewLayoutAttributes *_leftShadowDecorationAttr;
    UICollectionViewLayoutAttributes *_rightShadowDecorationAttr;
}

@property(retain, nonatomic) UICollectionViewLayoutAttributes *rightShadowDecorationAttr; // @synthesize rightShadowDecorationAttr=_rightShadowDecorationAttr;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *leftShadowDecorationAttr; // @synthesize leftShadowDecorationAttr=_leftShadowDecorationAttr;
@property(copy, nonatomic) NSArray *cutoutAttrCollection; // @synthesize cutoutAttrCollection=_cutoutAttrCollection;
@property(copy, nonatomic) NSArray *supplementaryAttrCollection; // @synthesize supplementaryAttrCollection=_supplementaryAttrCollection;
@property(copy, nonatomic) NSArray *attrCollection; // @synthesize attrCollection=_attrCollection;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *titleSupplementaryAttr; // @synthesize titleSupplementaryAttr=_titleSupplementaryAttr;
@property(nonatomic) __weak id <CKAvatarPickerLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long layoutMode; // @synthesize layoutMode=_layoutMode;
- (void).cxx_destruct;
- (_Bool)_shouldShowContactNames;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)_setupBannerLayout;
- (void)_setupPancakeLayout;
- (double)_avatarBoundWidthLayoutMode:(unsigned long long)arg1;
- (double)_avatarBoundWidth;
- (unsigned long long)_itemCount;
- (_Bool)_canShowShadowClipping;
- (id)nameLayoutAttributesCollectionAtPoint:(struct CGPoint)arg1;
- (void)invalidateLayoutAndCache;
- (id)initWithLayoutMode:(unsigned long long)arg1;

@end

