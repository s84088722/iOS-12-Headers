//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIFocusUpdateContext.h>

@class NSIndexPath, UICollectionView;

@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext
{
    _Bool _didSetPreviouslyFocusedIndexPath;
    _Bool _didSetNextFocusedIndexPath;
    NSIndexPath *_previouslyFocusedIndexPath;
    NSIndexPath *_nextFocusedIndexPath;
    UICollectionView *_collectionView;
}

+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;
+ (id)_contextWithContext:(id)arg1 collectionView:(id)arg2;
@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *nextFocusedIndexPath; // @synthesize nextFocusedIndexPath=_nextFocusedIndexPath;
@property(readonly, nonatomic) NSIndexPath *previouslyFocusedIndexPath; // @synthesize previouslyFocusedIndexPath=_previouslyFocusedIndexPath;
- (id)_initWithContext:(id)arg1 collectionView:(id)arg2 cachedPreviouslyFocusedIndexPath:(id)arg3;

@end

