//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SKUIRedeemViewCameraOverrideDelegate-Protocol.h"
#import "SKUIServiceAccountPageViewController-Protocol.h"
#import "SUClientInterfaceDelegate-Protocol.h"
#import "ServiceAccountPageEmbeddedParent-Protocol.h"
#import "ServiceBridgedNavigationControllerProxy-Protocol.h"
#import "ServiceBridgedNavigationItemProxy-Protocol.h"

@class ACAccount, NSString, SKUIRedeemCameraViewController, SSPromise, SUClientInterface, SUNavigationController;
@protocol ServiceAccountPageEmbedded;

@interface ServiceAccountPageViewController : UIViewController <SKUIServiceAccountPageViewController, SUClientInterfaceDelegate, ServiceAccountPageEmbeddedParent, SKUIRedeemViewCameraOverrideDelegate, ServiceBridgedNavigationItemProxy, ServiceBridgedNavigationControllerProxy>
{
    SKUIRedeemCameraViewController *_redeemCameraViewController;
    _Bool _bridgedNavigation;
    _Bool _loadFromBridgedNavigation;
    SUClientInterface *_clientInterface;
    SUNavigationController *_containerNavigationController;
    UIViewController<ServiceAccountPageEmbedded> *_underlyingViewController;
    UIViewController *_childViewController;
    SSPromise *_configurationPromise;
    ACAccount *_account;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
@property(nonatomic) _Bool loadFromBridgedNavigation; // @synthesize loadFromBridgedNavigation=_loadFromBridgedNavigation;
@property(nonatomic, getter=isBridgedNavigation) _Bool bridgedNavigation; // @synthesize bridgedNavigation=_bridgedNavigation;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) SSPromise *configurationPromise; // @synthesize configurationPromise=_configurationPromise;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) UIViewController<ServiceAccountPageEmbedded> *underlyingViewController; // @synthesize underlyingViewController=_underlyingViewController;
@property(retain, nonatomic) SUNavigationController *containerNavigationController; // @synthesize containerNavigationController=_containerNavigationController;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void).cxx_destruct;
- (void)_loadURLWithActiveConfiguration:(id)arg1;
- (id)_bagKeyForConfigURLString:(id)arg1;
- (id)_clientViewControllerProxy;
- (id)_preloadConfiguration;
- (void)clientInterfaceDidFinishLoading:(id)arg1;
- (void)clientInterface:(id)arg1 financeInterruptionResolved:(_Bool)arg2;
- (void)overrideIPadRedeemCamera:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bridgedRightButtonPressed;
- (void)performRedeemOperationWithCode:(id)arg1 cameraRecognized:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)loadWithURL:(id)arg1;
- (void)popBridgedViewControllersToIndex:(unsigned long long)arg1;
- (void)pushBridgedViewController:(id)arg1 animated:(_Bool)arg2;
- (id)navigationItemOptionsFromViewController:(id)arg1;
- (void)setBridgedNavigationItemWithOptions:(id)arg1;
- (void)navigationItemUpdated;
- (id)navigationController;
- (id)navigationItem;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_willAppearInRemoteViewController;
- (void)viewDidLoad;
- (void)dismissHostViewControllerWithResult:(_Bool)arg1 error:(id)arg2;
- (void)dismissHostViewController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

