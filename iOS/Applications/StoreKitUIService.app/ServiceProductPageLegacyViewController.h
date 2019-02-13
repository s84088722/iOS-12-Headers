//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKProductPageViewControllerDelegatePrivate-Protocol.h"
#import "SKUIApplicationDelegatePackage-Protocol.h"
#import "ServiceAlertDelegate-Protocol.h"
#import "ServiceProductPage-Protocol.h"

@class NSString, SKProductPageViewController, SKUIApplicationController, ServiceAlertController, ServiceProductPageConfiguration, UINavigationController;
@protocol ServiceProductPageLegacyViewControllerDelegate;

@interface ServiceProductPageLegacyViewController : UIViewController <ServiceAlertDelegate, SKProductPageViewControllerDelegatePrivate, SKUIApplicationDelegatePackage, ServiceProductPage>
{
    CDUnknownBlockType _starRatingCompletionBlock;
    ServiceAlertController *_alertController;
    SKUIApplicationController *_applicationController;
    _Bool _preview;
    _Bool _didPurchase;
    _Bool _didStart;
    SKProductPageViewController *_legacyProductViewController;
    UINavigationController *_loadingPlaceholderViewController;
    ServiceProductPageConfiguration *_pageConfiguration;
    _Bool _didLoad;
    _Bool _didShow;
    id <ServiceProductPageLegacyViewControllerDelegate> _delegate;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) __weak id <ServiceProductPageLegacyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_startIfReady;
- (_Bool)_shouldLayoutAsOverlayWithTraitCollection:(id)arg1;
- (void)_sendUnavailableErrorResponse;
- (void)_sendInstallAttributionIfAllowed;
- (void)_sendDidFinishWithResult:(long long)arg1;
- (void)_presentAlertViewForDialog:(id)arg1;
- (id)_newCancelButtonItemWithClientContext:(id)arg1;
- (void)_loadLegacyViewControllerIfApplicable;
- (id)_legacyProductViewController;
- (id)_clientViewControllerProxy;
- (void)_cancelButtonAction:(id)arg1;
- (void)_backgroundViewAction:(id)arg1;
- (id)legacyScriptInterfaceForApplication:(id)arg1;
- (void)applicationDidDisplayFirstPage:(id)arg1;
- (void)application:(id)arg1 didStopWithOptions:(id)arg2;
- (void)application:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)application:(id)arg1 didCompleteSoftwarePurchase:(id)arg2;
- (void)application:(id)arg1 didCompletePurchase:(id)arg2;
- (void)setVisibleInClientWindow:(id)arg1;
- (void)productPageDidFinishLoad:(id)arg1;
- (void)productPage:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)productPage:(id)arg1 setStatusBarHidden:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)productPage:(id)arg1 presentProductPageWithRequest:(id)arg2 animated:(_Bool)arg3;
- (void)productPage:(id)arg1 presentAlertForDialog:(id)arg2;
- (void)productPage:(id)arg1 didReceiveTitle:(id)arg2;
- (void)productPage:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)productPage:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)setShowsStoreButton:(_Bool)arg1;
- (void)setShowsRightBarButton:(_Bool)arg1;
- (void)setPreview:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setPromptString:(id)arg1;
- (void)setProductPageStyle:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setAskToBuy:(_Bool)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAdditionalBuyParameters:(id)arg1;
- (void)loadProductWithURL:(id)arg1;
- (void)loadProductWithRequest:(id)arg1;
- (void)loadProductWithParameters:(id)arg1;
- (void)loadProductWithPageDictionary:(id)arg1;
- (void)finishStarRatingPromptWithRating:(id)arg1;
- (void)finishImmediately;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)alertController:(id)arg1 alertDidFinishWithButton:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)promptForStarRatingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

