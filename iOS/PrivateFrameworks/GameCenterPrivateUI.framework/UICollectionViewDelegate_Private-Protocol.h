//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/UICollectionViewDelegate-Protocol.h>
#import <GameCenterPrivateUI/UICollectionViewFocusDelegate_Legacy-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, UICollectionViewCell;
@protocol UISpringLoadedInteractionContext;

@protocol UICollectionViewDelegate_Private <UICollectionViewDelegate, UICollectionViewFocusDelegate_Legacy>

@optional
- (_Bool)_collectionView:(UICollectionView *)arg1 shouldSpringLoadItemAtIndexPath:(NSIndexPath *)arg2 withContext:(id <UISpringLoadedInteractionContext>)arg3;
- (void)_collectionView:(UICollectionView *)arg1 willLayoutCell:(UICollectionViewCell *)arg2 usingTemplateLayoutCell:(UICollectionViewCell *)arg3 forItemAtIndexPath:(NSIndexPath *)arg4;
- (UICollectionViewCell *)_collectionView:(UICollectionView *)arg1 templateLayoutCellForCellsWithReuseIdentifier:(NSString *)arg2;
- (NSIndexPath *)_collectionView:(UICollectionView *)arg1 targetIndexPathForMoveFromItemAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (_Bool)_collectionView:(UICollectionView *)arg1 shouldApplyTransitionContentOffset:(struct CGPoint)arg2 contentSize:(struct CGSize)arg3;
- (struct CGPoint)_collectionView:(UICollectionView *)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (NSIndexPath *)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(UICollectionView *)arg1;
@end

