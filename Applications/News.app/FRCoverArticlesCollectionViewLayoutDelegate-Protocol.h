//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NFLCoverArticlesWidgetLayout, NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol FRCoverArticlesCollectionViewLayoutDelegate <UICollectionViewDelegateFlowLayout>
- (NFLCoverArticlesWidgetLayout *)coverArticlesWidgetLayoutForCollectionView:(UICollectionView *)arg1 collectionViewLayout:(UICollectionViewLayout *)arg2;
- (unsigned long long)collectionViewTargetCellIndex:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2;
- (_Bool)collectionViewIsDragging:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 rightMarginForItemAtIndexPath:(NSIndexPath *)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 leftMarginForItemAtIndexPath:(NSIndexPath *)arg3;
@end
