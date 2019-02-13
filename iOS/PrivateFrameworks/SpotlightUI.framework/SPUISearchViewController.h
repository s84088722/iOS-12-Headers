//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpotlightUI/APUIShortLookViewControllerDelegate-Protocol.h>
#import <SpotlightUI/SBUIActiveOrientationObserver-Protocol.h>
#import <SpotlightUI/SFFeedbackListener-Protocol.h>
#import <SpotlightUI/SPUIResultViewDelegate-Protocol.h>
#import <SpotlightUI/SPUISearchHeaderDelegate-Protocol.h>
#import <SpotlightUI/SearchUIFirstTimeExperienceDelegate-Protocol.h>
#import <SpotlightUI/SearchUIResultViewDelegate-Protocol.h>
#import <SpotlightUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSTimer, SPUILockScreenFooterView, SPUIResultViewController, SPUISearchFirstTimeViewController, SPUISearchHeader, SPUITestingHelper, UIView, _UILegibilitySettings;
@protocol SPUISearchViewControllerDelegate;

@interface SPUISearchViewController : UIViewController <SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, SPUIResultViewDelegate, UIGestureRecognizerDelegate, SFFeedbackListener, SearchUIResultViewDelegate, APUIShortLookViewControllerDelegate, SBUIActiveOrientationObserver>
{
    _Bool _internetOverrideForPPT;
    _Bool _lastQueryWasAuthenticated;
    id <SPUISearchViewControllerDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
    SPUISearchHeader *_searchHeader;
    NSMutableSet *_allHeaderViews;
    SPUISearchFirstTimeViewController *_firstTimeExperienceViewController;
    SPUIResultViewController *_searchResultViewController;
    SPUIResultViewController *_proactiveResultViewController;
    SPUILockScreenFooterView *_lockScreenFooterView;
    unsigned long long _presentationMode;
    NSTimer *_clearResultsTimer;
    SPUITestingHelper *_testingHelper;
}

+ (_Bool)isFeedbackSelector:(SEL)arg1;
+ (_Bool)shouldShowAsTypedSuggestion;
+ (_Bool)_isSuggestionResult:(id)arg1;
@property(retain) SPUITestingHelper *testingHelper; // @synthesize testingHelper=_testingHelper;
@property(retain) NSTimer *clearResultsTimer; // @synthesize clearResultsTimer=_clearResultsTimer;
@property _Bool lastQueryWasAuthenticated; // @synthesize lastQueryWasAuthenticated=_lastQueryWasAuthenticated;
@property _Bool internetOverrideForPPT; // @synthesize internetOverrideForPPT=_internetOverrideForPPT;
@property unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain) SPUILockScreenFooterView *lockScreenFooterView; // @synthesize lockScreenFooterView=_lockScreenFooterView;
@property(retain) SPUIResultViewController *proactiveResultViewController; // @synthesize proactiveResultViewController=_proactiveResultViewController;
@property(retain) SPUIResultViewController *searchResultViewController; // @synthesize searchResultViewController=_searchResultViewController;
@property(retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController; // @synthesize firstTimeExperienceViewController=_firstTimeExperienceViewController;
@property(retain) NSMutableSet *allHeaderViews; // @synthesize allHeaderViews=_allHeaderViews;
@property(retain) SPUISearchHeader *searchHeader; // @synthesize searchHeader=_searchHeader;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SPUISearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)hideKeyboard;
- (void)didBeginScrollingResults;
- (void)cancelButtonPressed;
- (_Bool)queryIsPresent;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (_Bool)allowInternet;
- (void)didUpdateFromResults;
- (void)queryContextDidChange:(id)arg1 fromSearchHeader:(id)arg2 allowZKW:(_Bool)arg3;
- (id)searchResultsTestingObject;
- (_Bool)runTest:(id)arg1 options:(id)arg2 unlockSpringBoard:(CDUnknownBlockType)arg3 enterSpotlight:(CDUnknownBlockType)arg4 exitSpotlight:(CDUnknownBlockType)arg5;
- (void)setInternetOverrideToDisable:(_Bool)arg1;
- (void)firstTimeExperienceContinueButtonPressed;
- (void)activateFirstTimeExperienceViewAnimate:(_Bool)arg1;
- (void)activateFirstTimeExperienceViewIfNecessary;
- (void)activateViewController:(id)arg1 animate:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)activeViewController;
- (void)didUpdateContentScrolledOffScreenStatus:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly) NSString *currentQuery;
- (id)contentScrollView;
- (void)didChangeExpansionStateForSection:(id)arg1 expanded:(_Bool)arg2;
- (_Bool)sectionShouldBeExpanded:(id)arg1;
- (id)viewControllerForPresenting;
- (void)didScrollPastBottomOfContent;
- (void)didTapInEmptyRegion;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)searchViewDidDismissWithReason:(unsigned long long)arg1;
- (void)clearSearchResults;
- (void)clearTimerExpired;
- (void)searchViewWillDismissWithReason:(unsigned long long)arg1;
- (void)searchViewDidPresentFromSource:(unsigned long long)arg1;
@property(readonly, nonatomic) double distanceToTopOfAppIcons;
- (id)homeScreenBringUpTestName;
- (_Bool)isRunningHomeScreenBringUpTest;
- (void)searchViewDidUpdatePresentationProgress:(double)arg1;
- (void)searchViewWillPresentFromSource:(unsigned long long)arg1;
- (void)performSearchWithSuggestion:(id)arg1;
- (void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 sourcePreference:(long long)arg3;
- (void)performSearchWithQuery:(id)arg1 forSuggestions:(_Bool)arg2;
- (void)shortLookViewController:(id)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(_Bool)arg3 shouldClearAction:(_Bool)arg4;
- (void)sendActionFeedbackFromShortLookViewController:(id)arg1 isPunchout:(_Bool)arg2;
- (void)shortLookViewController:(id)arg1 willDismissLongLookWithReason:(long long)arg2 actionCompleted:(_Bool)arg3 shouldClearAction:(_Bool)arg4;
- (void)shortLookViewController:(id)arg1 didCompleteActionWithResult:(long long)arg2;
- (void)shortLookViewController:(id)arg1 willDisplayLongLookWithReason:(long long)arg2;
- (void)shortLookViewControllerWillBeginUserInteraction:(id)arg1;
- (id)shortLookViewControllerForResult:(id)arg1;
- (_Bool)hasShortLookViewControllerForResult:(id)arg1;
- (id)userActivityFromIntent:(id)arg1;
- (void)getUserActivityForResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didEngageResult:(id)arg1;
- (void)updateHeaderViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)createAdditionalHeaderView;
@property(readonly, nonatomic) UIView *headerView;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

