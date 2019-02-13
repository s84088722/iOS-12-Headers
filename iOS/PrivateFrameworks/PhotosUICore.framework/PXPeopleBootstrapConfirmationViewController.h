//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PhotosUICore/PXPeopleFlowViewController-Protocol.h>
#import <PhotosUICore/PXPeopleSuggestionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXPeopleSwipeSelectionManagerDelegate-Protocol.h>

@class NSArray, NSString, NSTimer, PXPeopleBootstrapContext, PXPeopleSuggestionManager, PXPeopleSwipeSelectionManager;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXPeopleBootstrapConfirmationViewController : UICollectionViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSwipeSelectionManagerDelegate, PXPeopleFlowViewController>
{
    _Bool _suggestionsPresented;
    _Bool _willAppear;
    id _context;
    id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;
    PXPeopleSwipeSelectionManager *_swipeSelectionManager;
    PXPeopleSuggestionManager *_suggestionManager;
    NSArray *_currentSuggestions;
    NSTimer *_loadingDelayTimer;
    unsigned long long _viewState;
    unsigned long long _type;
    struct CGSize _lastSize;
}

@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(nonatomic) _Bool willAppear; // @synthesize willAppear=_willAppear;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
@property(nonatomic) _Bool suggestionsPresented; // @synthesize suggestionsPresented=_suggestionsPresented;
@property(retain, nonatomic) NSTimer *loadingDelayTimer; // @synthesize loadingDelayTimer=_loadingDelayTimer;
@property(retain, nonatomic) NSArray *currentSuggestions; // @synthesize currentSuggestions=_currentSuggestions;
@property(readonly, nonatomic) PXPeopleSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
@property(retain, nonatomic) PXPeopleSwipeSelectionManager *swipeSelectionManager; // @synthesize swipeSelectionManager=_swipeSelectionManager;
@property(nonatomic) __weak id <PXPeopleFlowViewControllerActionDelegate> actionDelegate; // @synthesize actionDelegate;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)keyFaceUpdated:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)willTransitionToNextInFlow;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;
- (id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateImageForCell:(id)arg1 withPerson:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_cacheCurrentSuggestions;
- (id)_sortedIndexPathsForVisibleCells;
- (void)_badgeLoadingCells;
- (double)_wonkyAutomaticContentOffset;
- (struct UIEdgeInsets)_sectionInsets;
- (void)_updateHeaderContent;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)_localizedPromptString;
- (void)_startLoadingTimer;
- (void)_toggleConfirmedForCollectionViewCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_noSuggestionsFound;
- (void)_markSkippedSuggestions;
- (void)_evaluateIfSuggestionPresentationFinished;
- (void)_finishedPresentingSuggestions;
- (void)_updateViewWithViewState:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *presentationStatuses;
@property(readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContext:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

