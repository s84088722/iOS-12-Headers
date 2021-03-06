//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRArticleContentViewController.h"

#import "FCReadingHistoryObserving-Protocol.h"
#import "FCStreamingResultsObserving-Protocol.h"
#import "FRAppActivityObserving-Protocol.h"
#import "FRArticleTransitionAnimatorArticle-Protocol.h"
#import "FRFlintArticleDataSource-Protocol.h"
#import "FRHardPaywallViewControllerDelegate-Protocol.h"
#import "FRLocalDraftPreviewable-Protocol.h"
#import "FRPurchaseManagerPurchaseViewControllerDelegate-Protocol.h"
#import "FRScrollPositionProviding-Protocol.h"
#import "FRStackViewControllerAnimatorContext-Protocol.h"
#import "FRSubscriptionHeaderViewControllerDelegate-Protocol.h"
#import "NUURLHandlerDelegate-Protocol.h"
#import "SXAnalyticsReporting-Protocol.h"
#import "SXScrollViewControllerDelegate-Protocol.h"
#import "TSArticleRecirculationRoutableFeedDelegate-Protocol.h"
#import "TSArticleRecirculationViewControllerDelegate-Protocol.h"
#import "TSKeyCommandCoordinatorChangeDelegate-Protocol.h"
#import "TSNativeAdDataProviderType-Protocol.h"
#import "TSParentViewBoundsProvider-Protocol.h"
#import "TSPurchaseContextProvider-Protocol.h"

@class FCArticle, FRContentObscuringView, FRFeedSubscriptionModificationSessionManager, FRFlintAdController, FRFlintAppActivityMonitor, FRFlintDataProvider, FRHardPaywallViewController, FRNativeAdFetcher, FRNativeSubscriptionAdFetcher, FRReferredArticlePageViewDataSource, FRScrollQueueManager, FRSpinnerView, FRSponsoredBarViewController, FRStatusBarObserver, FRSubscriptionHeaderViewController, FRValidationQueue, NSDate, NSError, NSMutableDictionary, NSString, NUURLHandler, SFSafariViewController, SXContext, SXScrollViewController, SXVideoPlayerViewControllerManager, TSArticleRecirculationInArticleViewControllerProvider, TSBlueprintManualImpressionUpdateProvider, TSKeyCommandCoordinator, TSKeyCommandManager, UIViewController;
@protocol FCOperationCanceling, TSArticleRecirculationBridgedServiceType, TSArticleRecirculationViewControllersProviderType, UIViewControllerAnimatedTransitioning;

@interface FRFlintArticleContentViewController : FRArticleContentViewController <FRScrollPositionProviding, FCReadingHistoryObserving, FRAppActivityObserving, FRSubscriptionHeaderViewControllerDelegate, SXScrollViewControllerDelegate, SXAnalyticsReporting, FCStreamingResultsObserving, FRFlintArticleDataSource, FRHardPaywallViewControllerDelegate, FRPurchaseManagerPurchaseViewControllerDelegate, NUURLHandlerDelegate, TSArticleRecirculationViewControllerDelegate, TSArticleRecirculationRoutableFeedDelegate, TSParentViewBoundsProvider, FRLocalDraftPreviewable, TSKeyCommandCoordinatorChangeDelegate, FRArticleTransitionAnimatorArticle, FRStackViewControllerAnimatorContext, TSNativeAdDataProviderType, TSPurchaseContextProvider>
{
    _Bool _prefersChromeHidden;
    _Bool _subscriptionHeaderVisible;
    _Bool _dataProviderHadPrefetchedJSON;
    _Bool _dataProviderHadPrefetchedFonts;
    _Bool _didFailLoadingSilexContext;
    _Bool _isPresented;
    _Bool _silexDidPresentContents;
    _Bool _shouldRestoreScrollPosition;
    _Bool _wasNavigationBarVisible;
    _Bool _transparentToolbar;
    _Bool _articleMarkedAsConsumed;
    _Bool _viewportDebuggingEnabled;
    CDUnknownBlockType _presentationCompletionBlock;
    FRSubscriptionHeaderViewController *_subscriptionHeaderViewController;
    FRSponsoredBarViewController *_sponsoredBarViewController;
    FRSpinnerView *_spinnerView;
    FRContentObscuringView *_censorView;
    SXScrollViewController *_scrollViewController;
    FRFlintDataProvider *_dataProvider;
    SXContext *_silexContext;
    id <FCOperationCanceling> _silexContextOperationCancelHandler;
    NSDate *_silexContextLoadingStartDate;
    NSError *_silexContextLoadingError;
    FRFlintAdController *_adController;
    FCArticle *_articleForRestoration;
    FRFlintAppActivityMonitor *_flintActivityMonitor;
    SXVideoPlayerViewControllerManager *_videoPlayerViewControllerManager;
    FCArticle *_nativeAdArticle;
    FRScrollQueueManager *_scrollQueueManager;
    TSKeyCommandManager *_keyCommandManager;
    TSKeyCommandCoordinator *_keyCommandCoordinator;
    id <UIViewControllerAnimatedTransitioning> _animatorForNextTransition;
    NSMutableDictionary *_footerViewControllers;
    UIViewController *_footerBottomMarginController;
    FRHardPaywallViewController *_hardPaywallViewController;
    FRNativeAdFetcher *_nativeAdFetcher;
    FRNativeSubscriptionAdFetcher *_nativeSubscriptionAdFetcher;
    FRValidationQueue *_validatorQueue;
    SFSafariViewController *_learnMoreSafariViewController;
    FRFeedSubscriptionModificationSessionManager *_feedSubscriptionModificationSessionManager;
    FRReferredArticlePageViewDataSource *_endOfArticlePageViewDataSource;
    FRStatusBarObserver *_statusBarObserver;
    NUURLHandler *_URLHandler;
    id <TSArticleRecirculationBridgedServiceType> _articleRecirculationDataProvider;
    id <TSArticleRecirculationViewControllersProviderType> _endOfArticleViewControllers;
    TSArticleRecirculationInArticleViewControllerProvider *_inArticleViewControllerProvider;
    TSBlueprintManualImpressionUpdateProvider *_impressionUpdateProvider;
    struct CGRect _lastLayoutFrame;
}

+ (id)storyboardIdentifier;
@property(nonatomic) __weak TSBlueprintManualImpressionUpdateProvider *impressionUpdateProvider; // @synthesize impressionUpdateProvider=_impressionUpdateProvider;
@property(retain, nonatomic) TSArticleRecirculationInArticleViewControllerProvider *inArticleViewControllerProvider; // @synthesize inArticleViewControllerProvider=_inArticleViewControllerProvider;
@property(retain, nonatomic) id <TSArticleRecirculationViewControllersProviderType> endOfArticleViewControllers; // @synthesize endOfArticleViewControllers=_endOfArticleViewControllers;
@property(retain, nonatomic) id <TSArticleRecirculationBridgedServiceType> articleRecirculationDataProvider; // @synthesize articleRecirculationDataProvider=_articleRecirculationDataProvider;
@property(retain, nonatomic) NUURLHandler *URLHandler; // @synthesize URLHandler=_URLHandler;
@property(nonatomic) struct CGRect lastLayoutFrame; // @synthesize lastLayoutFrame=_lastLayoutFrame;
@property(readonly, nonatomic) FRStatusBarObserver *statusBarObserver; // @synthesize statusBarObserver=_statusBarObserver;
@property(retain, nonatomic) FRReferredArticlePageViewDataSource *endOfArticlePageViewDataSource; // @synthesize endOfArticlePageViewDataSource=_endOfArticlePageViewDataSource;
@property(retain, nonatomic) FRFeedSubscriptionModificationSessionManager *feedSubscriptionModificationSessionManager; // @synthesize feedSubscriptionModificationSessionManager=_feedSubscriptionModificationSessionManager;
@property(retain, nonatomic) SFSafariViewController *learnMoreSafariViewController; // @synthesize learnMoreSafariViewController=_learnMoreSafariViewController;
@property(retain, nonatomic) FRValidationQueue *validatorQueue; // @synthesize validatorQueue=_validatorQueue;
@property(retain, nonatomic) FRNativeSubscriptionAdFetcher *nativeSubscriptionAdFetcher; // @synthesize nativeSubscriptionAdFetcher=_nativeSubscriptionAdFetcher;
@property(retain, nonatomic) FRNativeAdFetcher *nativeAdFetcher; // @synthesize nativeAdFetcher=_nativeAdFetcher;
@property(retain, nonatomic) FRHardPaywallViewController *hardPaywallViewController; // @synthesize hardPaywallViewController=_hardPaywallViewController;
@property(retain, nonatomic) UIViewController *footerBottomMarginController; // @synthesize footerBottomMarginController=_footerBottomMarginController;
@property(retain, nonatomic) NSMutableDictionary *footerViewControllers; // @synthesize footerViewControllers=_footerViewControllers;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> animatorForNextTransition; // @synthesize animatorForNextTransition=_animatorForNextTransition;
@property(retain, nonatomic) TSKeyCommandCoordinator *keyCommandCoordinator; // @synthesize keyCommandCoordinator=_keyCommandCoordinator;
@property(retain, nonatomic) TSKeyCommandManager *keyCommandManager; // @synthesize keyCommandManager=_keyCommandManager;
@property(retain, nonatomic) FRScrollQueueManager *scrollQueueManager; // @synthesize scrollQueueManager=_scrollQueueManager;
@property(retain, nonatomic) FCArticle *nativeAdArticle; // @synthesize nativeAdArticle=_nativeAdArticle;
@property(retain, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager; // @synthesize videoPlayerViewControllerManager=_videoPlayerViewControllerManager;
@property(readonly, nonatomic) FRFlintAppActivityMonitor *flintActivityMonitor; // @synthesize flintActivityMonitor=_flintActivityMonitor;
@property(nonatomic) _Bool viewportDebuggingEnabled; // @synthesize viewportDebuggingEnabled=_viewportDebuggingEnabled;
@property(nonatomic) _Bool articleMarkedAsConsumed; // @synthesize articleMarkedAsConsumed=_articleMarkedAsConsumed;
@property(nonatomic) _Bool transparentToolbar; // @synthesize transparentToolbar=_transparentToolbar;
@property(retain, nonatomic) FCArticle *articleForRestoration; // @synthesize articleForRestoration=_articleForRestoration;
@property(nonatomic) _Bool wasNavigationBarVisible; // @synthesize wasNavigationBarVisible=_wasNavigationBarVisible;
@property(nonatomic) _Bool shouldRestoreScrollPosition; // @synthesize shouldRestoreScrollPosition=_shouldRestoreScrollPosition;
@property(nonatomic) _Bool silexDidPresentContents; // @synthesize silexDidPresentContents=_silexDidPresentContents;
@property(retain, nonatomic) FRFlintAdController *adController; // @synthesize adController=_adController;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(retain, nonatomic) NSError *silexContextLoadingError; // @synthesize silexContextLoadingError=_silexContextLoadingError;
@property(nonatomic) _Bool didFailLoadingSilexContext; // @synthesize didFailLoadingSilexContext=_didFailLoadingSilexContext;
@property(nonatomic) _Bool dataProviderHadPrefetchedFonts; // @synthesize dataProviderHadPrefetchedFonts=_dataProviderHadPrefetchedFonts;
@property(nonatomic) _Bool dataProviderHadPrefetchedJSON; // @synthesize dataProviderHadPrefetchedJSON=_dataProviderHadPrefetchedJSON;
@property(retain, nonatomic) NSDate *silexContextLoadingStartDate; // @synthesize silexContextLoadingStartDate=_silexContextLoadingStartDate;
@property(retain, nonatomic) id <FCOperationCanceling> silexContextOperationCancelHandler; // @synthesize silexContextOperationCancelHandler=_silexContextOperationCancelHandler;
@property(retain, nonatomic) SXContext *silexContext; // @synthesize silexContext=_silexContext;
@property(retain, nonatomic) FRFlintDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) SXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(retain, nonatomic) FRContentObscuringView *censorView; // @synthesize censorView=_censorView;
@property(retain, nonatomic) FRSpinnerView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) FRSponsoredBarViewController *sponsoredBarViewController; // @synthesize sponsoredBarViewController=_sponsoredBarViewController;
@property(retain, nonatomic) FRSubscriptionHeaderViewController *subscriptionHeaderViewController; // @synthesize subscriptionHeaderViewController=_subscriptionHeaderViewController;
@property(nonatomic) _Bool subscriptionHeaderVisible; // @synthesize subscriptionHeaderVisible=_subscriptionHeaderVisible;
@property(copy, nonatomic) CDUnknownBlockType presentationCompletionBlock; // @synthesize presentationCompletionBlock=_presentationCompletionBlock;
@property(nonatomic) _Bool prefersChromeHidden; // @synthesize prefersChromeHidden=_prefersChromeHidden;
- (void).cxx_destruct;
- (void)handleKeyCommand:(id)arg1;
- (void)decreaseText;
- (void)increaseText;
- (void)saveArticle;
- (void)dislikeArticle;
- (void)likeArticle;
- (void)previousStory;
- (void)nextStory;
- (void)dismissArticle;
- (void)registerKeyboardCommands;
- (void)responderDidChange;
- (_Bool)canBecomeFirstResponder;
- (id)fillReportConcernObjectforHeadline:(id)arg1;
- (long long)toggleLikeAction:(long long)arg1 forHeadline:(id)arg2;
- (long long)toggleReadingListActionForHeadline:(id)arg1;
- (void)toggleMuteActionForHeadline:(id)arg1;
- (struct CGRect)visibleRect;
- (void)checkVisibilityOfSubscriptionHeader;
- (id)nativeSubscriptionAdContext;
- (id)nativeAdContext;
- (void)requestNativeSubscriptionAdWithCompletion:(CDUnknownBlockType)arg1;
- (void)blackListValidationWithHeadline:(id)arg1 bannerView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestNativeAdCellDataValidatingAgainst:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showFeedViewWithShowSubscribedAlert:(_Bool)arg1 tag:(id)arg2;
- (void)purchaseManager:(id)arg1 purchaseViewControllerWebAccessAuthenticationSubscribed:(id)arg2;
- (void)purchaseManager:(id)arg1 purchaseViewControllerAppStorePurchaseSuccessful:(id)arg2;
- (void)_showSubscriptionSheetWithHeadline:(id)arg1 purchaseContext:(id)arg2;
- (void)_addToFavoritesWithHeadline:(id)arg1 notificationsEnabled:(_Bool)arg2 notificationAlertShown:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)endOfArticleFromSource:(long long)arg1 didSelectSubscribeButtonWithHeadline:(id)arg2 purchaseContext:(id)arg3;
- (void)endOfArticleFromSource:(long long)arg1 didSelectFollowingButtonWithHeadline:(id)arg2;
- (void)endOfArticleFromSource:(long long)arg1 didSelectFollowButtonWithHeadline:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_pageViewControllerForHeadline:(id)arg1 articleList:(id)arg2 articleSource:(long long)arg3 contentViewControllerDataSource:(id)arg4 previewPeeking:(_Bool)arg5;
- (id)_wrapViewControllerInNavigationController:(id)arg1;
- (id)_navigationControllerForHeadline:(id)arg1 articleList:(id)arg2 articleSource:(long long)arg3 contentViewControllerDataSource:(id)arg4 previewPeeking:(_Bool)arg5;
- (id)articleViewContextForArticleSource:(long long)arg1 headline:(id)arg2;
- (id)_feedViewControllerForTag:(id)arg1 withContext:(id)arg2;
- (void)endOfArticleFromSource:(long long)arg1 commitPreviewViewController:(id)arg2;
- (id)endOfArticleFromSource:(long long)arg1 previewViewControllerForTag:(id)arg2;
- (id)endOfArticleFromSource:(long long)arg1 previewViewControllerForHeadline:(id)arg2 articleList:(id)arg3;
- (id)animatorForDismissingViewController:(id)arg1;
- (id)animatorForPresentingViewController:(id)arg1;
- (void)_animateToNextViewControllerWithSourceChannel:(id)arg1;
- (void)_showHeadline:(id)arg1 articleList:(id)arg2 forCell:(id)arg3 articleSource:(long long)arg4;
- (void)animateToNextViewControllerWithSourceChannel:(id)arg1;
- (id)endOfArticleFromSource:(long long)arg1 reportConcernObjectForHeadline:(id)arg2;
- (long long)endOfArticleFromSource:(long long)arg1 toggleDislikeActionForHeadline:(id)arg2;
- (long long)endOfArticleFromSource:(long long)arg1 toggleLikeActionForHeadline:(id)arg2;
- (long long)endOfArticleFromSource:(long long)arg1 toggleReadingListActionForHeadline:(id)arg2;
- (void)endOfArticleFromSource:(long long)arg1 muteActionForHeadline:(id)arg2;
- (void)endOfArticleFromSource:(long long)arg1 didSelectCell:(id)arg2 withHeadline:(id)arg3 articleList:(id)arg4;
- (id)purchaseContextWithQToken:(id)arg1;
- (void)_submitEndOfArticleSubscribeButtonExposureEventWithUserAction:(long long)arg1 purchaseContext:(id)arg2;
- (void)articleRecirculationRoutedDidTapSubscribe:(id)arg1 withQToken:(id)arg2;
- (id)_purchaseContextWithQToken:(id)arg1;
- (id)articleRecirculationRouted:(id)arg1 previewingViewControllerForHeadline:(id)arg2 inSection:(long long)arg3 withHeadlines:(id)arg4;
- (void)_submitShareResultActivityEventForHeadline:(id)arg1 activityType:(id)arg2 completed:(_Bool)arg3 returnedItems:(id)arg4 activityError:(id)arg5 groupType:(long long)arg6 groupViewExposureID:(id)arg7;
- (void)articleRecirculationRouted:(id)arg1 didSelectShareActivityForHeadline:(id)arg2 activityType:(id)arg3 completed:(_Bool)arg4 returnedItems:(id)arg5 activityError:(id)arg6 inSection:(long long)arg7 groupViewExposureID:(id)arg8;
- (void)articleRecirculationRouted:(id)arg1 didSelectReportConcernActivityForHeadline:(id)arg2;
- (void)articleRecirculationRouted:(id)arg1 didSelectHeadline:(id)arg2 fromSection:(long long)arg3 withProperties:(id)arg4 inCollection:(id)arg5;
- (void)articleRecirculationRoutedDidSelectChannel:(id)arg1;
- (void)shouldPresentRecirculationController:(id)arg1;
- (void)routeToHeadline:(id)arg1 inHeadlineCollection:(id)arg2 fromSection:(long long)arg3;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)_reportNativeAdClickEventWithBannerView:(id)arg1;
- (void)_updateScrollViewContentInset;
- (id)_subscriptionHeaderContext;
- (void)_commitViewController:(id)arg1;
- (_Bool)transparentNavigationBar;
- (id)documentColor;
- (long long)_relativePriorityForDataProvider;
- (_Bool)shouldShowEmailSubscribeFooter;
- (id)currentPresentationAttributes;
- (void)_pptOpenURL:(id)arg1;
- (void)presentSourceChannelForLoadedHeadline;
- (id)scrollView;
- (id)visitableItem;
- (_Bool)fr_allowsEdgeSwiping;
- (void)_accessibilityFocusFirstElementIfAppropriate;
- (_Bool)hardPayWallOverlappingTargetComponentView;
- (void)showLearnMorePage;
- (void)hardPaywallViewControllerLearnMoreButtonTapped:(id)arg1;
- (void)hardPaywallViewControllerAlreadySubscriberButtonTapped:(id)arg1;
- (void)hardPaywallViewControllerGetSubscriptionButtonTapped:(id)arg1;
- (void)removeHardPaywall;
- (void)showHardPaywall;
- (void)updateHardPaywallColors;
- (void)subscriptionHeaderViewControllerLearnMoreButtonTapped:(id)arg1;
- (void)subscriptionHeaderViewControllerAlreadySubscriberButtonTapped:(id)arg1;
- (void)subscriptionHeaderViewControllerGetSubscriptionButtonTapped:(id)arg1;
- (_Bool)showingPrefetchedPurchase;
- (void)removePlacard;
- (void)setupSubscriptionHeaderViewController;
- (_Bool)shouldShowSubscriptionHeader;
- (void)updateSubscriptionHeaderColors;
- (void)addSubscriptionNativeAdWithBannerView:(id)arg1;
- (void)setSubscribeButtonTitle:(id)arg1 subtitle:(id)arg2;
- (void)setupSponsoredBarViewController;
- (_Bool)shouldShowSponsoredBanner;
- (void)showOffensiveContentPressed:(id)arg1;
- (void)hideObscuringViewAnimated:(_Bool)arg1;
- (void)showObscuringViewAnimated:(_Bool)arg1;
- (void)refresh;
@property(readonly, nonatomic) NSString *localDraftArticleIdentifier;
@property(readonly, nonatomic) NSString *localDraftChannelIdentifier;
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;
- (id)presentationViewForProvider:(id)arg1;
- (id)articleViewContextForProvider:(id)arg1;
- (id)articlePageViewControllerForProvider:(id)arg1;
- (id)articleForProvider:(id)arg1;
- (id)articleHeadlineForProvider:(id)arg1;
- (id)silexContextForProvider:(id)arg1;
- (id)feldsparContextForProvider:(id)arg1;
- (unsigned long long)silexTransitionTypeForType:(unsigned long long)arg1;
- (id)transitionDataSourceForAnimator:(id)arg1;
- (void)animatorDidBeginAnimation:(id)arg1;
- (_Bool)transparentToolbarActiveForAnimator:(id)arg1;
- (struct CGRect)animator:(id)arg1 frameForVideoPlayerViewController:(id)arg2 makeVideoPlayerVisible:(_Bool)arg3;
- (_Bool)componentViewIsVisibleForAnimator:(id)arg1;
- (_Bool)componentViewHasExtraContentForAnimator:(id)arg1;
- (_Bool)componentViewUsesThumbnailForAnimator:(id)arg1;
- (_Bool)componentViewIsObscuredForAnimator:(id)arg1;
- (id)componentContentViewForAnimator:(id)arg1;
- (id)componentViewForAnimator:(id)arg1;
- (struct CGRect)componentViewCropFrameForAnimator:(id)arg1;
- (struct CGRect)componentContentFrameForAnimator:(id)arg1;
- (struct CGRect)componentViewFrameForAnimator:(id)arg1;
- (id)thumbnailForAnimator:(id)arg1;
- (void)setupWithPreviousScrollPosition:(id)arg1;
- (void)scrollPositionObjectWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)increaseTextSizeWithFontCategory:(id)arg1;
- (void)decreaseTextSizeWithFontCategory:(id)arg1;
- (void)URLHandler:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)reportEvent:(id)arg1;
- (void)scrollViewControllerDidStopScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewController:(id)arg1 enableNavigation:(_Bool)arg2;
- (void)scrollViewControllerDidLayoutContent:(id)arg1;
- (void)scrollViewControllerWillLayoutContent:(id)arg1;
- (double)toolBarHeightForScrollViewController:(id)arg1;
- (double)navigationBarHeightForScrollViewController:(id)arg1;
- (void)scrollViewControllerDismissFullscreen:(id)arg1;
- (void)scrollViewControllerRequestsFullscreen:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (void)reloadFooters;
- (void)reloadHeaders;
- (_Bool)shouldLoadSilexContext;
- (void)showScrollViewControllerAnimated:(_Bool)arg1;
- (id)loadDataProvider;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_purchaseListDidChange;
- (void)refreshArticle;
- (void)setupSilexScrollViewControllerForSilexContext:(id)arg1;
- (void)setupArticleRecirculationWithCellStyle:(long long)arg1 inserted:(_Bool)arg2;
- (void)initializeScrollViewController;
- (void)didLoadSilexContext:(id)arg1;
- (void)failedToLoadSilexContextWithError:(id)arg1;
- (void)loadSilexContextIfNeeded;
- (void)setupContentWithArticle:(id)arg1 headlineContext:(id)arg2 context:(id)arg3 articleViewContext:(id)arg4 dataSource:(id)arg5;
- (void)reset;
- (double)_bottomBarHeight;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)activityObservingApplicationDidBecomeActive;
- (void)didTransitionFromPresentedInPagedView;
- (void)didTransitionToPresentedInPagedView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long fr_stackViewControllerPresentationStyle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

