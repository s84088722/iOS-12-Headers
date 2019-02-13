//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HSPairingSetupStep-Protocol.h"

@class HFAccessoryBrowsingManager, HSEntitlementContext, NAFuture, NSString;
@protocol HSSetupStepDelegate;

@interface HSSetupCameraViewController : UIViewController <HSPairingSetupStep>
{
    _Bool _codeScanningRequired;
    id <HSSetupStepDelegate> _delegate;
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;
    HSEntitlementContext *_entitlementContext;
    NAFuture *_readyToDisplayFuture;
}

@property(nonatomic) _Bool codeScanningRequired; // @synthesize codeScanningRequired=_codeScanningRequired;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture; // @synthesize readyToDisplayFuture=_readyToDisplayFuture;
@property(readonly, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didUpdatePairingController:(id)arg1;
@property(readonly, nonatomic) long long setupState;
- (id)initWithAccessoryBrowsingManager:(id)arg1 entitlementContext:(id)arg2 mode:(unsigned long long)arg3 codeScanningRequired:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

