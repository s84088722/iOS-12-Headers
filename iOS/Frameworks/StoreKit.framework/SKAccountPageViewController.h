//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKUIRedeemViewCameraOverrideDelegate-Protocol.h>

@class ACAccount, NSString, NSURL, SKInvocationQueueProxy, SKRemoteAccountPageViewController, _UIAsyncInvocation;
@protocol SKAccountPageViewControllerDelegate, SKUIServiceAccountPageViewController;

@interface SKAccountPageViewController : UIViewController <SKUIRedeemViewCameraOverrideDelegate>
{
    NSURL *_accountURL;
    _UIAsyncInvocation *_cancelRequest;
    CDUnknownBlockType _prepareBlock;
    CDUnknownBlockType _loadBlock;
    SKRemoteAccountPageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> *_serviceProxy;
    _Bool _isRemoteViewControllerReady;
    _Bool _cameraDidShow;
    _Bool _viewHasAppeared;
    _Bool _isRemoteViewControllerSetup;
    CDUnknownBlockType redeemCompletionHandler;
    _Bool _loadFromBridgedNavigation;
    id <SKAccountPageViewControllerDelegate> _delegate;
    ACAccount *_account;
    SKAccountPageViewController *_preWarmedViewController;
}

@property(retain, nonatomic) SKAccountPageViewController *preWarmedViewController; // @synthesize preWarmedViewController=_preWarmedViewController;
@property(nonatomic) _Bool loadFromBridgedNavigation; // @synthesize loadFromBridgedNavigation=_loadFromBridgedNavigation;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <SKAccountPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_requestRemoteViewController;
- (void)_setupRemoteViewController:(_Bool)arg1;
- (void)_setupPreWarmedViewController;
- (void)_addRemoteView;
- (unsigned long long)_indexForFirstBridgedNavigationViewController;
- (void)_popAllBridgedNavigationViewControllers;
- (void)overrideRedeemOperationWithCode:(id)arg1 cameraRecognized:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (void)_bridgedRightButtonPressed:(id)arg1;
- (void)_popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)_pushBridgedViewControllerAnimated:(_Bool)arg1 options:(id)arg2;
- (void)_setBridgedNavigationItemWithOptions:(id)arg1;
- (void)_overrideRedeemCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)_overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_financeInterruptionResolved:(_Bool)arg1;
- (void)_dismissViewControllerWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_didFinishLoading;
- (void)_didPrepareWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)prepareWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAccountURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
