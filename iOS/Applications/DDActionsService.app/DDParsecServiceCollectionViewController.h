//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "DDParsecServiceVCInterface-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "SearchUIFeedbackDelegate-Protocol.h"
#import "SearchUIFirstTimeExperienceDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "_MKPlaceViewControllerFeedbackDelegate-Protocol.h"

@class DDParsecFirstTimeViewController, DDParsecTableViewController, DDParsecViewProvider, NSArray, NSDate, NSIndexPath, NSString, UIActivityIndicatorView, UIViewController;

@interface DDParsecServiceCollectionViewController : UINavigationController <UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate, UIGestureRecognizerDelegate, SearchUIFirstTimeExperienceDelegate, DDParsecServiceVCInterface, SearchUIFeedbackDelegate, SKStoreProductViewControllerDelegate, _MKPlaceViewControllerFeedbackDelegate, UIViewControllerPreviewingDelegate>
{
    UIActivityIndicatorView *_progressView;
    DDParsecTableViewController *_tableViewController;
    UIViewController *_cardViewController;
    DDParsecViewProvider *_viewProvider;
    _Bool _expandedFirstRow;
    _Bool _sectionsIsSet;
    _Bool _loadingError;
    _Bool _useNetwork;
    _Bool _searchViewVisible;
    _Bool _fteMode;
    NSArray *_visibleResultsIndices;
    DDParsecFirstTimeViewController *_firstTimeViewController;
    double _scrollViewOffset;
    NSDate *_lastAppearTime;
    NSDate *_lastDisappearTime;
    _Bool _sourceIsHint;
    _Bool _previewMode;
    _Bool _sheetMode;
    _Bool _isShowingCard;
    _Bool _doneClicked;
    long long _cardViewDepth;
    NSIndexPath *_previewedIndexPath;
    id _previewingContext;
    long long _style;
    CDUnknownBlockType _queryBlock;
    NSArray *_sections;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) CDUnknownBlockType queryBlock; // @synthesize queryBlock=_queryBlock;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (_Bool)shouldHandleCardSectionEngagement:(id)arg1;
- (void)didEngageActionItem:(id)arg1 actionPerformed:(_Bool)arg2;
- (void)didEngageCardSection:(id)arg1;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)_registerForPreview;
- (void)traitCollectionDidChange:(id)arg1;
- (void)performActionWithCard:(id)arg1 indexPath:(id)arg2 trigger:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)willDisplayCardController:(id)arg1 forResult:(id)arg2;
- (_Bool)openParsecResultURL:(id)arg1;
- (id)previewViewControllerForRowAtIndexPath:(id)arg1 inPlatter:(_Bool)arg2;
- (void)_createAndPresentTableView:(_Bool)arg1;
- (void)firstTimeExperienceContinueButtonPressed;
- (void)updateVisualModeWithController:(id)arg1 animated:(_Bool)arg2;
- (void)updateVisualMode:(_Bool)arg1;
- (void)setSheetMode:(_Bool)arg1;
- (void)setPreviewMode:(_Bool)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showError:(id)arg1 animated:(_Bool)arg2;
- (id)searchResultsAtIndexPaths:(id)arg1;
- (id)searchResultAtIndexPath:(id)arg1;
- (void)visibleResultsDidChangeWithEvent:(unsigned long long)arg1;
- (void)showContent:(_Bool)arg1;
- (void)interactionEndedWithPunchout:(_Bool)arg1;
- (void)doneButtonPressed:(id)arg1 punchout:(_Bool)arg2;
- (void)doneButtonPressed:(id)arg1;
- (void)showLoadingSpinner:(_Bool)arg1;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)setSearchVisible:(_Bool)arg1;
- (void)setDDViewStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)addSections:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)_willAppearInRemoteViewController;
- (_Bool)presentsWithMargins;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setQuery:(CDUnknownBlockType)arg1;
- (void)startQueryWithResult:(id)arg1 context:(id)arg2;
- (void)startQueryWithString:(id)arg1 range:(struct _NSRange)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

