//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKLoadingViewController.h>

#import <GameCenterPrivateUI/NSPopoverDelegate-Protocol.h>
#import <GameCenterPrivateUI/UICollectionViewDataSource-Protocol.h>
#import <GameCenterPrivateUI/UICollectionViewDelegate-Protocol.h>

@class GKCollectionDataSource, GKNoContentView, NSLayoutConstraint, NSMutableIndexSet, NSString, UICollectionView, UIView;

@interface GKDashboardCollectionViewController : GKLoadingViewController <NSPopoverDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _autoWidthUsesTwoColumnsWhenSpace;
    UICollectionView *_collectionView;
    GKCollectionDataSource *_dataSource;
    NSMutableIndexSet *_sectionsToReload;
    GKNoContentView *_noContentView;
    NSLayoutConstraint *_keyboardConstraint;
    double _keyboardConstraintDefaultConstant;
    UIView *_keyboardAdjustedView;
    UIView *_collectionContainerView;
    struct UIEdgeInsets _contentInsetsBeforeKeyboard;
    struct UIEdgeInsets _scrollInsetsBeforeKeyboard;
}

@property(nonatomic) UIView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(nonatomic) UIView *keyboardAdjustedView; // @synthesize keyboardAdjustedView=_keyboardAdjustedView;
@property(nonatomic) double keyboardConstraintDefaultConstant; // @synthesize keyboardConstraintDefaultConstant=_keyboardConstraintDefaultConstant;
@property(nonatomic) NSLayoutConstraint *keyboardConstraint; // @synthesize keyboardConstraint=_keyboardConstraint;
@property(nonatomic) struct UIEdgeInsets scrollInsetsBeforeKeyboard; // @synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard;
@property(nonatomic) struct UIEdgeInsets contentInsetsBeforeKeyboard; // @synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard;
@property(retain, nonatomic) GKNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) NSMutableIndexSet *sectionsToReload; // @synthesize sectionsToReload=_sectionsToReload;
@property(nonatomic) _Bool autoWidthUsesTwoColumnsWhenSpace; // @synthesize autoWidthUsesTwoColumnsWhenSpace=_autoWidthUsesTwoColumnsWhenSpace;
@property(retain, nonatomic) GKCollectionDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)clearSelectionForCollectionView:(id)arg1;
- (void)clearSelection;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)hideNoContentPlaceholder;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;
- (_Bool)hasData;
- (void)loadData;
- (void)setNeedsRefresh;
- (void)didExitRefreshingState;
- (void)didEnterRefreshingState;
- (void)didEnterLoadingState;
@property(readonly, nonatomic) _Bool isLoading; // @dynamic isLoading;
- (void)setAutoWidthColumns:(long long)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupDataSource;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)createCollectionViewInsideView:(id)arg1;
- (void)loadView;
- (void)setToHorizontalLayout:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

