//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UICollectionView;

@protocol UICollectionViewDataSourcePrefetching <NSObject>
- (void)collectionView:(UICollectionView *)arg1 prefetchItemsAtIndexPaths:(NSArray *)arg2;

@optional
- (void)collectionView:(UICollectionView *)arg1 cancelPrefetchingForItemsAtIndexPaths:(NSArray *)arg2;
@end

