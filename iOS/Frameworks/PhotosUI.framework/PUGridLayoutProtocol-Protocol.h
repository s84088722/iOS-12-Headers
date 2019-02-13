//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>
#import <PhotosUI/PUCollectionViewLayoutDelegating-Protocol.h>

@class NSArray, NSIndexPath, NSSet, NSString;

@protocol PUGridLayoutProtocol <NSObject, PUCollectionViewLayoutDelegating>
@property(readonly, nonatomic) struct CGSize itemSize;
@property(nonatomic) _Bool usesAspectItems;
@property(nonatomic) double sectionTopPadding;
@property(nonatomic) _Bool sectionHeadersEnabled;
@property(copy, nonatomic) NSString *sectionHeaderElementKind;
@property(copy, nonatomic) NSSet *hiddenItemIndexPaths;
@property(nonatomic) double globalBottomPadding;
@property(nonatomic) double globalTopPadding;
@property(nonatomic) double globalFooterHeight;
@property(nonatomic) double globalHeaderHeight;
@property(readonly, nonatomic) NSIndexPath *globalFooterIndexPath;
- (struct CGPoint)targetContentOffsetForViewSizeTransitionContext:(id)arg1;
- (void)finalizeViewTransitionToSize;
- (id)prepareForViewTransitionToSize:(struct CGSize)arg1;
- (void)invalidateLayoutForVerticalScroll;
- (NSArray *)assetIndexPathsForElementsInRect:(struct CGRect)arg1;
@end

