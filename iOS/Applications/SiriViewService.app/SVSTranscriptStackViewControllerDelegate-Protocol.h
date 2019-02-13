//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFUserUtterance, AFUserUtteranceSelectionResults, AceObject, NSArray, NSBundle, NSDate, NSIndexPath, NSString, NSURL, NSUUID, SASSpeechRecognized, SVSTranscriptStackViewController, UIView, UIViewController;
@protocol SAAceCommand;

@protocol SVSTranscriptStackViewControllerDelegate <NSObject>
- (void)willSendStartRequestForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerDidResignFirstResponder:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didFinishTest:(NSString *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 willStartTest:(NSString *)arg2;
- (_Bool)inTextInputModeForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 requestPasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (AFUserUtterance *)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 updatedUserUtteranceForRefId:(NSString *)arg2;
- (NSArray *)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 additionalSpeechInterpretationsForRefId:(NSString *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didShowGuideStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didShowTipWithIdentifier:(NSUUID *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 flowID:(NSString *)arg5;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didShowAceViewWithIdentifier:(NSUUID *)arg2 aceViewClass:(Class)arg3 metricsContext:(NSString *)arg4 forInterval:(double)arg5;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didScrollForInterval:(double)arg2 metricsContext:(NSString *)arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didEditSpeechRecognized:(SASSpeechRecognized *)arg2 forInterval:(double)arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 setStatusViewHidden:(_Bool)arg2;
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 openURL:(NSURL *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (NSBundle *)effectiveCoreLocationBundleForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 synthesizeSpeechWithPhoneticText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)stopSpeakingForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 speakText:(NSString *)arg2 isPhonetic:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)cancelRequestForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(NSIndexPath *)arg4 userSelectionResults:(AFUserUtteranceSelectionResults *)arg5;
- (void)transcriptStackViewControllerDidEndEditing:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerWillBeginEditing:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didDelayPresentationOfItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 willDiscardConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didPresentConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptStackViewController:(SVSTranscriptStackViewController *)arg1 didHideVibrantView:(UIView *)arg2;
- (void)transcriptStackViewControllerDidShowSuggestions:(SVSTranscriptStackViewController *)arg1;
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(SVSTranscriptStackViewController *)arg1;
- (_Bool)transcriptStackViewControllerShouldDelaySuggestions:(SVSTranscriptStackViewController *)arg1;
- (long long)initialDisplayTypeForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (double)statusViewHeightForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerDidExitSiriland:(SVSTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerWillEnterSiriland:(SVSTranscriptStackViewController *)arg1;
- (double)contentWidthForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
@end

