//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpringBoardServerInstance/AVSpeechSynthesizerDelegate-Protocol.h>
#import <AXSpringBoardServerInstance/AXSBVoiceOverSwipeDetectorDelegate-Protocol.h>
#import <AXSpringBoardServerInstance/BBObserverDelegate-Protocol.h>

@class AXAccessQueueTimer, AXDispatchTimer, NSString, UIWindow;

@interface AXSpringBoardSettingsLoader : NSObject <AXSBVoiceOverSwipeDetectorDelegate, BBObserverDelegate, AVSpeechSynthesizerDelegate>
{
    UIWindow *_voiceOverVibrateWindow;
    AXAccessQueueTimer *_voiceOverActivationCanceler;
    AXDispatchTimer *_managedConfigurationNotificationCoalesceTimer;
}

+ (void)bootstrapGuidedAccessIfNeeded;
+ (void)_registerForHomeButtonBreakage;
+ (void)_checkForHomeButtonBreakage:(_Bool)arg1;
+ (void)_startAssistiveTouchForBrokenHomeButton;
+ (void)_gracefulRebootForBrokenHomeButton;
+ (void)_setRebootedGracefullyOnce;
+ (_Bool)_alreadyRebootedGracefullyOnce;
+ (void)_registerForHomeButtonBreakageNotification;
+ (void)_performValidations;
+ (void)initialize;
+ (void)_findNoteFromLoginSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_registerForNotifications;
+ (void)_updateAXSettings;
+ (void)_updateSpringBoardHelper;
+ (void)_checkAccessibilityOptionsSetByiTunes;
+ (void)checkAccessibilityOptions;
+ (void)checkScreenContrast;
+ (void)_checkContrastSetting;
+ (void)_checkSpeakAutofillSetByiTunes;
+ (void)_checkClosedCaptioningSetByiTunes;
+ (void)_checkMonoAudioSetByiTunes;
+ (void)_checkAssistiveTouchSetByiTunes;
+ (void)_checkInvertColorsSetByiTunes;
+ (void)_checkZoomTouchSetByiTunes;
+ (void)_checkVoiceOverTouchSetByiTunes;
+ (void)_setVoiceOverTouchSettings:(unsigned char)arg1;
- (void).cxx_destruct;
- (void)_remoteAccessibilitySettingsChanged:(id)arg1;
- (void)_updateRemoteAccessibilitySettings;
- (void)_registerReachability;
- (void)_reachabilityChanged:(id)arg1;
- (_Bool)_isDeviceAffectedByVOActivationWorkaround;
- (void)_showVibrationVoiceOverEnablerView;
- (void)_showSwipeDetectionEnablerView;
- (void)swipeDetectorDetectedSwipe;
- (void)swipeDetectorCanceled;
- (void)_playVOActivationSoundStarted;
- (void)_playVOActivationSoundEnded;
- (void)_makeVoiceOverVibrateWindow;
- (void)_hideVoiceOverEnabler;
- (void)_voiceOverEnabled:(id)arg1;
- (void)_initializeRemoteSettingsListener;
- (void)dealloc;
- (id)init;
- (void)_handleGuidedAccessManagedConfigurationDidChange:(id)arg1;
- (void)_updateAXSettings;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)_registerForSpokenNotes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

