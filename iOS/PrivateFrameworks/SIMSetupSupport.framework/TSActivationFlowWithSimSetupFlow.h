//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SIMSetupSupport/TSSIMSetupFlow.h>

#import <SIMSetupSupport/TSCellularPlanManagerCacheDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSError, NSMutableArray, NSString, UIBarButtonItem, UIViewController;
@protocol TSSetupFlowItem;

@interface TSActivationFlowWithSimSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>
{
    _Bool _requireSetup;
    _Bool _isPreinstallingViewControllerActive;
    NSError *_planInstallError;
    NSMutableArray *_danglingPlanItems;
    NSString *_name;
    unsigned long long _userConsentType;
    UIBarButtonItem *_cancelButton;
    UIViewController<TSSetupFlowItem> *_currentViewController;
}

- (void).cxx_destruct;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;
- (void)popViewController:(id)arg1;
- (long long)signupUserConsentResponse;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;
- (_Bool)isPhoneFlow;
- (id)nextViewControllerFrom:(id)arg1;
- (void)firstViewController:(CDUnknownBlockType)arg1;
- (id)firstViewController;
- (void)dealloc;
- (id)initRequireSetup:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

