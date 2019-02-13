//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COSOptinViewController.h"

#import "AAUISignInControllerDelegate-Protocol.h"
#import "COSBuddyController-Protocol.h"

@class NSString;

@interface COSAppleIDSkippedBenefitsViewController : COSOptinViewController <AAUISignInControllerDelegate, COSBuddyController>
{
    _Bool _iCloudAppleIDLoggedIn;
    _Bool _iMessageAppleIDLoggedIn;
    _Bool _iCloudAppleIDSuccess;
    _Bool _iMessageAppleIDSuccess;
    _Bool _autoTryToLoginToMessages;
    _Bool _usesDarkTheme;
}

+ (id)radarComponent;
+ (id)documentationDescription;
+ (id)subViews;
+ (id)viewsAndActions;
+ (id)sharedAccountStore;
+ (_Bool)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(readonly, nonatomic) _Bool autoTryToLoginToMessages; // @synthesize autoTryToLoginToMessages=_autoTryToLoginToMessages;
@property(readonly, nonatomic) _Bool iMessageAppleIDSuccess; // @synthesize iMessageAppleIDSuccess=_iMessageAppleIDSuccess;
@property(readonly, nonatomic) _Bool iCloudAppleIDSuccess; // @synthesize iCloudAppleIDSuccess=_iCloudAppleIDSuccess;
@property(readonly, nonatomic) _Bool iMessageAppleIDLoggedIn; // @synthesize iMessageAppleIDLoggedIn=_iMessageAppleIDLoggedIn;
@property(readonly, nonatomic) _Bool iCloudAppleIDLoggedIn; // @synthesize iCloudAppleIDLoggedIn=_iCloudAppleIDLoggedIn;
- (void)signInControllerDidCancel:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)learnMoreButtonPressed:(id)arg1;
- (void)presentLoginViewController;
- (void)suggestedButtonPressed:(id)arg1;
- (id)detailTitleString;
- (id)learnMoreButtonTitle;
- (id)suggestedButtonTitle;
- (id)imageResource;
- (id)detailString;
- (id)titleString;
- (void)updateUIFromLoginStatus;
- (void)updateLoginStatus;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

