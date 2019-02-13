//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIClientContextConsuming-Protocol.h>
#import <StoreKitUI/SKUINetworkErrorDelegate-Protocol.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate-Protocol.h>
#import <StoreKitUI/SKUITabBarItemRootViewController-Protocol.h>
#import <StoreKitUI/SKUIWishlistDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIIPadSearchController, SKUINetworkErrorViewController, SKUIPopoverObserver, SKUIProductPageOverlayController, SKUIWishlistViewController, UIBarButtonItem;

@interface SKUIViewController : UIViewController <SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, UIPopoverControllerDelegate, SKUITabBarItemRootViewController, SKUIClientContextConsuming, SKUIWishlistDelegate>
{
    SKUIClientContext *_clientContext;
    SKUINetworkErrorViewController *_networkErrorViewController;
    NSOperationQueue *_operationQueue;
    SKUIProductPageOverlayController *_productPageOverlayController;
    SKUIIPadSearchController *_searchController;
    _Bool _wishlistButtonHidden;
    UIBarButtonItem *_wishlistButtonItem;
    SKUIPopoverObserver *_wishlistPopoverObserver;
    SKUIWishlistViewController *_wishlistViewController;
}

@property(readonly, nonatomic) UIBarButtonItem *_wishlistButtonItem; // @synthesize _wishlistButtonItem;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (id)_defaultRightBarButtonItemsIsCompact:(_Bool)arg1;
- (id)_defaultLeftBarButtonItems;
- (void)_reloadForOrientation:(long long)arg1;
- (void)_showDialogWithError:(id)arg1;
- (void)_presentWishlistFromPopover:(id)arg1;
- (void)_presentWishlistFromSheet;
- (void)_wishlistAction:(id)arg1;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)_setWishlistButtonHidden:(_Bool)arg1;
- (void)wishlist:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)_wishlistPopoverDidDismiss;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (void)forceOrientationBackToSupportedOrientation;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)showingError;
- (void)showError:(id)arg1;
- (void)showDefaultNavigationItemsIsCompact:(_Bool)arg1;
- (void)showDefaultNavigationItemsForSize:(struct CGSize)arg1;
- (void)showDefaultNavigationItems;
- (void)reloadData;
- (id)_getIPadSearchController;
@property(readonly, nonatomic) SKUIIPadSearchController *IPadSearchController;
- (void)dealloc;
- (id)initWithTabBarItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

