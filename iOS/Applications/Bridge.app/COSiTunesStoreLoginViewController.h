//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COSAppleIDLoginViewController.h"

#import "COSWaitScreenBuddyController-Protocol.h"
#import "PBAutomationDocumentation-Protocol.h"

@class ACAccount, NSString;

@interface COSiTunesStoreLoginViewController : COSAppleIDLoginViewController <PBAutomationDocumentation, COSWaitScreenBuddyController>
{
    ACAccount *_account;
}

+ (_Bool)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)followUpActions;
- (id)localizedInformativeText;
- (id)localizedTitle;
- (id)followUpIdentifier;
- (id)localizedDescription;
- (double)waitScreenPushGracePeriod;
- (_Bool)holdWithWaitScreen;
- (void)signInFailedWithError:(id)arg1;
- (void)loggedInSuccessfullyWithBuddyControllerDoneBlock:(CDUnknownBlockType)arg1;
- (void)checkIfCanReleaseHold;
- (void)silentSignInStateChanged:(id)arg1;
- (void)finishedActivating;
- (void)didEstablishHold;
- (_Bool)holdBeforeDisplaying;
- (id)activationHoldActivityIdentifier;
- (id)holdActivityIdentifier;
- (unsigned long long)performanceMonitorAggTiming;
- (id)performanceMonitorActivityName;
- (void)tappedSkipButton:(id)arg1;
- (_Bool)allowSkipping;
- (_Bool)controllerAllowsNavigatingBackTo;
- (id)detailText;
- (id)titleString;
- (id)username;
- (id)account;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

