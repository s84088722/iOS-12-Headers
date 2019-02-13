//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantUI/BFFSplashController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>

@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanUserConsentViewController : BFFSplashController <TSSetupFlowItem>
{
    _Bool _didReceiveResponse;
    NSString *_name;
    unsigned long long _consentType;
    _Bool _requireAdditionalConsent;
    id <TSSIMSetupFlowDelegate> _delegate;
}

@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long consentType; // @synthesize consentType=_consentType;
- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_declineButtonTapped;
- (void)_acceptButtonTapped;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithName:(id)arg1 consentType:(unsigned long long)arg2 requireAdditionalConsent:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

