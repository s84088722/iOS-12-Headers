//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDragDelegate-Protocol.h"

@class NSIndexPath, UICollectionView;
@protocol UIDragSession;

@protocol UICollectionViewDragDelegate_Private <UICollectionViewDragDelegate>

@optional
- (long long)_collectionView:(UICollectionView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_Bool)_collectionView:(UICollectionView *)arg1 prefersFullSizePreviewsForDragSession:(id <UIDragSession>)arg2;
@end

