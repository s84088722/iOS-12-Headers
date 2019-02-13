//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, NSIndexPath, UICollectionView, UIDragPreviewParameters;
@protocol UIDragSession;

@protocol UICollectionViewDragSource <NSObject>

@optional
- (void)_collectionView:(UICollectionView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (void)_collectionView:(UICollectionView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (UIDragPreviewParameters *)_collectionView:(UICollectionView *)arg1 liftingPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)_collectionView:(UICollectionView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint)arg4;
- (NSArray *)_collectionView:(UICollectionView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

