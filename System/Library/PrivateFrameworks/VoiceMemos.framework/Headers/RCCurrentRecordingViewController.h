//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceMemos/RCCurrentRecordingViewControllerDelegate-Protocol.h>
#import <VoiceMemos/RCUIServiceCurrentRecordingViewController-Protocol.h>

@class NSString, RCAVState, RCCurrentRecordingRemoteViewController, UIColor;
@protocol RCCurrentRecordingViewControllerDelegate;

@interface RCCurrentRecordingViewController : UIViewController <RCCurrentRecordingViewControllerDelegate, RCUIServiceCurrentRecordingViewController>
{
    _Bool _screenUpdatesDisabled;
    _Bool _isDisplayingLockscreenInterface;
    UIColor *_presentationBackgroundColor;
    UIColor *_waveformForegroundColor;
    UIColor *_waveformBackgroundColor;
    RCCurrentRecordingRemoteViewController *_remoteViewController;
    id <RCCurrentRecordingViewControllerDelegate> _delegate;
    RCAVState *_AVState;
}

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;
@property(retain, nonatomic) RCAVState *AVState; // @synthesize AVState=_AVState;
@property(nonatomic) __weak id <RCCurrentRecordingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_failedToBecomeReadyWithMessage:(id)arg1;
- (void)currentRecordingViewController:(id)arg1 didChangeAVState:(id)arg2;
- (void)currentRecordingViewControllerRecordingDidEnd:(id)arg1;
- (void)currentRecordingViewController:(id)arg1 didDeterminteAvailability:(_Bool)arg2;
- (void)loadCaptureStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissLockscreenInterface;
- (void)presentLockscreenInterfaceWithBackgroundColor:(id)arg1 waveformForegroundColor:(id)arg2 waveformBackgroundColor:(id)arg3;
- (void)setScreenUpdatesDisabled:(_Bool)arg1;
- (void)insertRemoteViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

