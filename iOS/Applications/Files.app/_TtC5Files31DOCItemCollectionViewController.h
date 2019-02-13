//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FPItemCollectionDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDataSourcePrefetching-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UICollectionViewDelegateTableLayout-Protocol.h"
#import "UICollectionViewDelegate_Private-Protocol.h"
#import "UICollectionViewDragDelegate-Protocol.h"
#import "UICollectionViewDragDelegate_Private-Protocol.h"
#import "UICollectionViewDropDelegate-Protocol.h"
#import "UICollectionViewDropDelegate_Private-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@interface _TtC5Files31DOCItemCollectionViewController : UIViewController <UICollectionViewDataSourcePrefetching, UICollectionViewDelegate_Private, UICollectionViewDataSource, FPItemCollectionDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegateTableLayout, UICollectionViewDragDelegate, UICollectionViewDragDelegate_Private, UICollectionViewDropDelegate, UICollectionViewDropDelegate_Private, UICollectionViewDelegate>
{
    // Error parsing type: , name: itemCollectionListCellIdentifier
    // Error parsing type: , name: itemCollectionGridCellIdentifier
    // Error parsing type: , name: itemCollectionGridCellNewFileIdentifier
    // Error parsing type: , name: itemCollectionLargeTextListCellIdentifier
    // Error parsing type: , name: itemCollectionCreateCellIdentifier
    // Error parsing type: , name: itemCollectionControlViewSectionHeaderIdentifier
    // Error parsing type: , name: itemCollectionControlViewSectionEmptyHeaderIdentifier
    // Error parsing type: , name: itemCollectionStatusSectionFooterIdentifier
    // Error parsing type: , name: itemCollectionStatusSectionEmptyFooterIdentifier
    // Error parsing type: , name: isInListMode
    // Error parsing type: , name: currentLoadingProgress
    // Error parsing type: , name: currentTransitionVisibility
    // Error parsing type: , name: cellContentPool
    // Error parsing type: , name: itemCollectionSource
    // Error parsing type: , name: itemCollection
    // Error parsing type: , name: items
    // Error parsing type: , name: itemsBeforeModelUpdate
    // Error parsing type: , name: createWasVisibleBeforeTheUpdate
    // Error parsing type: , name: configuration
    // Error parsing type: , name: defaultSaveLocationDidChangeNotificationToken
    // Error parsing type: , name: gridLayout
    // Error parsing type: , name: tableLayout
    // Error parsing type: , name: panSelectionGesture
    // Error parsing type: , name: isAppearing
    // Error parsing type: , name: longPressGesture
    // Error parsing type: , name: maskViews
    // Error parsing type: , name: errorViewController.storage
    // Error parsing type: , name: _footerView
    // Error parsing type: , name: currentDragSession
    // Error parsing type: , name: delegate
    // Error parsing type: , name: stackViewMetrics
    // Error parsing type: , name: enumerationProperties
    // Error parsing type: , name: enumerationIdentifier
    // Error parsing type: , name: isObserving
    // Error parsing type: , name: isSpringLoading
    // Error parsing type: , name: sortingModes
    // Error parsing type: , name: sortingDescriptor
    // Error parsing type: , name: _appearance
    // Error parsing type: , name: highlightedCell
    // Error parsing type: , name: collectionViewLayoutTraits
    // Error parsing type: , name: collectionViewContext
    // Error parsing type: , name: gatheringThumbnails
    // Error parsing type: , name: visibilityTimeOut
    // Error parsing type: , name: updatedIsScrollEnabled
    // Error parsing type: , name: needsDidFinishGatheringCall
    // Error parsing type: , name: isPreparingForReuse
    // Error parsing type: , name: initialLocation
    // Error parsing type: , name: viewDidAppear
    // Error parsing type: , name: lastPreviewedFPItem
    // Error parsing type: , name: enqueuedItemToReveal
    // Error parsing type: , name: enqueuedItemToScroll
    // Error parsing type: , name: keyCommandsObserver
    // Error parsing type: , name: updateStackViewMetrics
    // Error parsing type: , name: selectionGestureIsAddingItems
    // Error parsing type: , name: selectionGestureStartIndexPath
    // Error parsing type: , name: originalSelectionStateForCurrentSelectedIndexPaths
    // Error parsing type: , name: autoScrollSelectionTimer
    // Error parsing type: , name: DOCAutoScrollerInset
    // Error parsing type: , name: DOCTableLayoutSelectionInset
    // Error parsing type: , name: DOCAutoScrollerMAXSpeed
    // Error parsing type: , name: lastDropIndexPath
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)accessibilityIsInListMode;
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)updateAutoScroll;
- (void)selectionPanGestureRecognized:(id)arg1;
- (void)displayInfoForCurrentItem:(id)arg1;
- (void)startFolderCreation:(id)arg1;
- (void)pasteboardMoveToCollectionView:(id)arg1;
- (void)pasteboardPasteInCollectionView:(id)arg1;
- (void)longPressOnBackgroundGestureRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 leadingSwipeActionsForRowAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (void)userDefaultsDidChange:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)contentScrollView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didUpdateCollectionViewContentOffsetWithNotification:(id)arg1;
- (void)didUpdateCollectionViewIsScrollEnabledWithNotification:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
@property(nonatomic) struct UIEdgeInsets _contentOverlayInsets;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end
