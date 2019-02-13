//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScrollViewScrollObserver_Internal-Protocol.h>

@class NSArray, NSString, UIButton, UIColor, UILabel, UINavigationItem, UIPopoverController, UIScrollView, UISearchBar, UISearchDisplayControllerContainerView, UITableView, UIView, UIViewController, _UINavigationControllerPalette, _UISearchControllerDidScrollDelegate;
@protocol UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate;

@interface UISearchDisplayController : NSObject <_UIScrollViewScrollObserver_Internal>
{
    UIViewController *_viewController;
    UITableView *_tableView;
    UIView *_dimmingView;
    UISearchBar *_searchBar;
    UILabel *_noResultsLabel;
    NSString *_noResultsMessage;
    NSString *_resultsTitle;
    struct __CFArray *_containingScrollViews;
    double _lastKeyboardAdjustment;
    double _lastFooterAdjustment;
    UIPopoverController *_popoverController;
    long long _searchResultsTableViewStyle;
    id _navigationControllerBookkeeper;
    NSArray *_savedSelectedCellsWhenViewWillAppear;
    UIScrollView *_savedContainingScrollView;
    UISearchDisplayControllerContainerView *_containerView;
    unsigned long long _savedSearchBarResizingMask;
    UINavigationItem *_navigationItem;
    struct CGPoint _containingScrollViewContentOffset;
    struct CGRect _searchFieldInNavigationBarFrame;
    _UINavigationControllerPalette *_attachedNavigationPalette;
    UIButton *_animatingAppearanceNavigationButton;
    double _animatingAppearanceNavigationSearchBarWidth;
    UIColor *_dimmingOverlayColor;
    UIView *_tableViewBackgroundHeaderView;
    long long _unactivatedBarPosition;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    struct {
        unsigned int visible:1;
        unsigned int animating:1;
        unsigned int hidIndexBar:1;
        unsigned int hidNavigationBar:1;
        unsigned int noResultsMessageVisible:1;
        unsigned int noResultsMessageAutoDisplay:1;
        unsigned int navigationBarHidingEnabled:1;
        unsigned int dimTableViewOnEmptySearchString:1;
        unsigned int isRotatingWithPopover:1;
        unsigned int cancelButtonManagementDisabled:1;
        unsigned int allowDisablingNavigationBarHiding:1;
        unsigned int showsResultsForEmptyField:1;
        unsigned int searchBarCanBeHoisted:1;
        unsigned int animatingSearchResultsDisappearance:1;
        unsigned int navigationBarShadowWasHidden:1;
        unsigned int hoistingSearchBar:1;
    } _searchDisplayControllerFlags;
    _Bool _displaysSearchBarInNavigationBar;
    id <UISearchDisplayDelegate> _delegate;
    id <UITableViewDataSource> _tableViewDataSource;
    id <UITableViewDelegate> _tableViewDelegate;
    unsigned long long _navigationBarSearchFieldSizing;
    double __activationGapHeight;
    double __additionalNonCollapsingHeightAboveSearchBar;
}

@property(nonatomic) double _additionalNonCollapsingHeightAboveSearchBar; // @synthesize _additionalNonCollapsingHeightAboveSearchBar=__additionalNonCollapsingHeightAboveSearchBar;
@property(nonatomic) double _activationGapHeight; // @synthesize _activationGapHeight=__activationGapHeight;
@property(nonatomic) unsigned long long navigationBarSearchFieldSizing; // @synthesize navigationBarSearchFieldSizing=_navigationBarSearchFieldSizing;
@property(nonatomic) _Bool displaysSearchBarInNavigationBar; // @synthesize displaysSearchBarInNavigationBar=_displaysSearchBarInNavigationBar;
@property(copy, nonatomic) NSString *searchResultsTitle; // @synthesize searchResultsTitle=_resultsTitle;
@property(nonatomic) __weak id <UITableViewDelegate> searchResultsDelegate; // @synthesize searchResultsDelegate=_tableViewDelegate;
@property(nonatomic) __weak id <UITableViewDataSource> searchResultsDataSource; // @synthesize searchResultsDataSource=_tableViewDataSource;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) __weak UIViewController *searchContentsController; // @synthesize searchContentsController=_viewController;
@property(nonatomic) id <UISearchDisplayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_containedInPopover;
- (double)_statusBarHeight;
- (_Bool)_shouldAccountForStatusBarHeight;
- (_Bool)_searchBarInNavigationControllerComponent;
- (id)_dimmingOverlayColor;
- (void)_setDimmingOverlayColor:(id)arg1;
- (void)_animateNavigationBarSearchBarAppearance:(id)arg1;
- (id)_containerView;
- (void)_configureContainerView;
@property(readonly, nonatomic) UINavigationItem *navigationItem;
- (_Bool)_showsResultsForEmptyField;
- (void)_setShowsResultsForEmptyField:(_Bool)arg1;
- (_Bool)_searchBarShouldScrollToVisible:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (void)_watchContainingTableViewForScrolling:(_Bool)arg1;
- (id)_noResultsMessageLabel;
@property(nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) _Bool cancelButtonManagementDisabled;
- (void)_clearViewController;
@property(nonatomic) _Bool dimTableViewOnEmptySearchString;
- (_Bool)_allowDisablingNavigationBarHiding;
- (void)_setAllowDisablingNavigationBarHiding:(_Bool)arg1;
@property(nonatomic, getter=isNavigationBarHidingEnabled) _Bool navigationBarHidingEnabled;
@property(copy, nonatomic) NSString *noResultsMessage;
@property(nonatomic) _Bool automaticallyShowsNoResultsMessage;
@property(nonatomic) _Bool noResultsMessageVisible;
@property(readonly, nonatomic) UITableView *searchResultsTableView; // @synthesize searchResultsTableView=_tableView;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (void)_managedTableViewDidScroll;
- (void)_updateNoSearchResultsMessageVisiblity;
- (void)navigationControllerDidCancelShowingViewController:(id)arg1;
- (void)navigationControllerDidShowViewController:(id)arg1;
- (void)navigationControllerWillShowViewController:(id)arg1;
- (void)_restoreSelectedCellsInCaseViewDidNotReallyAppear;
- (void)_saveSelectedRowsInCaseViewDoesNotReallyAppear;
- (void)_clearSavedSelectedCellsWeUsedWhenHedgingOurBets;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)windowDidRotate:(id)arg1;
- (void)windowWillAnimateRotation:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (double)_updateNavigationPalette;
- (void)_updatePinnedSearchBar;
@property(nonatomic, getter=isActive) _Bool active;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showHideAnimationDidFinish;
- (void)_sendDelegateDidBeginDidEndSearch;
- (id)_dimmingViewColor;
- (double)_dimmingViewAlpha;
- (void)_hideVisibleRefreshControl;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarSuperviewWillChange;
- (void)_indexBarFrameChanged:(id)arg1;
- (void)_setTableViewVisible:(_Bool)arg1 inView:(id)arg2;
- (void)_hoistSearchBar;
- (void)_adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(_Bool)arg1;
- (struct UIEdgeInsets)_tableViewContentInsets;
- (void)_enableParentScrollViews;
- (void)_disableParentScrollViews;
- (void)_destroyManagedTableView;
- (id)_createPopoverController;
- (void)_popoverClearButtonPressed:(id)arg1;
- (void)_popoverKeyboardDidHide:(id)arg1;
- (void)_popoverKeyboardDidShow:(id)arg1;
- (_Bool)_isSearchBarInBar;
- (_Bool)hidNavigationBar;
- (id)_topShadowView;
- (id)_containingTableView;
- (id)_containingViewOfClass:(Class)arg1;
- (void)setSearchContentsController:(id)arg1;
- (void)_setupNoResultsLabelIfNecessary;
- (void)setSearchBar:(id)arg1;
- (void)_configureNewSearchBar;
- (_Bool)_areSearchContentsSplitViewMaster;
- (void)_cleanUpSearchBar;
- (void)_configureSearchBarForTableView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 searchResultsTableViewStyle:(long long)arg3;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

