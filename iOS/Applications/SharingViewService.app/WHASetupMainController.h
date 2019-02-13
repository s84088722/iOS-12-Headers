//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSBaseMainController.h"

@class SFDeviceSetupWHASession, SVSCommonNavController, UIStoryboard, WHASetupAuthViewController, WHASetupDoneViewController, WHASetupHomePickerViewController, WHASetupProgressViewController, WHASetupRoomPickerViewController, WHASetupStartViewController;

@interface WHASetupMainController : SVSBaseMainController
{
    _Bool _dismissed;
    int _dismissNotifyToken;
    _Bool _homePressed;
    _Bool _loggedUsageStart;
    _Bool _loggedUsageDone;
    SFDeviceSetupWHASession *_setupSession;
    UIStoryboard *_storyboard;
    WHASetupAuthViewController *_vcAuth;
    SVSCommonNavController *_vcNav;
    WHASetupDoneViewController *_vcDone;
    WHASetupProgressViewController *_vcProgress;
    WHASetupHomePickerViewController *_vcHomePicker;
    WHASetupRoomPickerViewController *_vcRoomPicker;
    WHASetupStartViewController *_vcStart;
    unsigned long long _viewAppearedTicks;
    _Bool _placeholderUI;
    unsigned int _badPINCount;
    int _testMode;
}

+ (_Bool)_isSecureForRemoteViewService;
@property(nonatomic) int testMode; // @synthesize testMode=_testMode;
@property(nonatomic) _Bool placeholderUI; // @synthesize placeholderUI=_placeholderUI;
@property(nonatomic) unsigned int badPINCount; // @synthesize badPINCount=_badPINCount;
- (void).cxx_destruct;
- (void)_pairSetupTryPIN:(id)arg1;
- (void)showProgressUI;
- (void)chooseRoom:(id)arg1;
- (void)showRoomPickerUI:(id)arg1 firstSuggestedIndex:(long long)arg2;
- (void)chooseHome:(id)arg1;
- (void)showHomePickerUI:(id)arg1 defaultIndex:(long long)arg2;
- (void)showDoneUI:(int)arg1 error:(id)arg2;
- (void)showDoneUI:(int)arg1;
- (void)showAuthUIWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)_sessionHandleProgress:(unsigned int)arg1 info:(id)arg2;
- (void)_sessionStart;
- (void)logUsageDone:(int)arg1;
- (void)logUsageStart:(int)arg1;
- (void)_handleHomeButtonPressed;
- (void)handleButtonActions:(id)arg1;
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

