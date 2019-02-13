//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MCUIAppSigner, NSObject, UIAlertController;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MCAppSignerViewController : UITableViewController
{
    _Bool _isNetworkReachable;
    MCUIAppSigner *_appSigner;
    UIAlertController *_activeAlertController;
    NSObject<OS_dispatch_group> *_trustActionGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *trustActionGroup; // @synthesize trustActionGroup=_trustActionGroup;
@property(nonatomic) _Bool isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
@property(retain, nonatomic) UIAlertController *activeAlertController; // @synthesize activeAlertController=_activeAlertController;
@property(retain, nonatomic) MCUIAppSigner *appSigner; // @synthesize appSigner=_appSigner;
- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_cancelActiveAlertController:(_Bool)arg1;
- (void)_presentAppRemovalAlert;
- (void)_presentNetworkRequiredAlert;
- (void)_presentVerifyAppAlert;
- (void)_presentTrustAlert;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_isEnterpriseAppTrustAllowed;
- (_Bool)_isAppRemovalAllowed;
- (_Bool)_isShowingTrustUntrustRowAllowed;
- (void)removeAppSignerApps;
- (void)verifyApps;
- (void)trustAppSigner;
- (void)_trustActionGroupVerifyAppsAndTrustSigner:(_Bool)arg1;
- (void)refreshAppSigner;
- (void)networkReachabilityChanged:(id)arg1;
- (void)effectiveSettingsChanged:(id)arg1;
- (void)appSignerApplicationsChanged:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;
- (id)initWithAppSigner:(id)arg1;

@end

