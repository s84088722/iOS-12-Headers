//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVStackCommonTemplateController.h>

@class NSArray, NSIndexPath, UIView, UIViewController, _TVNeedsMoreContentEvaluator;

@interface _TVStackTemplateController : _TVStackCommonTemplateController
{
    NSArray *_viewControllers;
    double _lastLayoutWidth;
    NSArray *_stackSections;
    NSArray *_stackRows;
    NSIndexPath *_lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    UIViewController *_backdropTintViewController;
    UIView *_backdropTintView;
}

- (void).cxx_destruct;
- (struct CGSize)_maxContentSize;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateBackgroundTintView;
- (void)_configureBackgroundTintView;
- (void)_updateFirstItemRowIndexes;
- (void)_buildStackSections;
- (double)_maxViewWidth;
- (void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2;
- (_Bool)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id *)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct UIEdgeInsets)collectionListMargin;
- (long long)updateCollectionViewControllersAndForceReload:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)viewControllers;

@end

