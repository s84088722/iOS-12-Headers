//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSArray;

@interface UICollectionView (FRAdditions)
- (id)fr_articleMarkingStateProvidersForArticleIDs:(id)arg1;
@property(readonly, nonatomic) NSArray *fr_visibleAndPreloadedCells;
- (long long)fr_globalItemIndexForIndexPath:(id)arg1;
- (long long)fr_totalNumberOfItems;
- (id)fr_visibleCellForIndexPath:(id)arg1;
- (id)fr_indexPathOfCellBeforeIndexPath:(id)arg1;
- (id)fr_indexPathOfCellAfterIndexPath:(id)arg1;
@end
