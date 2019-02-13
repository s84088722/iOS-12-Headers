//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantUI/AFUISiriSessionListener-Protocol.h>

@class AFSpeechInterpretation, AFUIRequestOptions, AceObject, INImage, NSArray, NSError, NSString, NSURL, SACardShowNextCard, SAGuidanceGuideUpdate, SAPhonePlayVoiceMail, SAPreSynthesizeTTS, SASSpeechPartialResult, SASSpeechRecognized, SASettingSetUIGuidedAccess, SASmsPlayAudio, SAUIAddContentToView, SAUIAddViews, SAUIAppPunchOut, SAUIChangePrimaryUtterance, SAUIClearScreen, SAUICloseAssistant, SAUIDisambiguationItemSelected, SAUIGetResponseAlternativesPlayback, SAUIHideSiriOverlay, SAUIListenForPronunciation, SAUIOpenLink, SAUIRepeatIt, SAUISayIt, SAUISetSuggestedUtterances, SAUIShowHelp, SAUIShowSpeechAlternatives, SAUIUpdateViews, SAVCSPlayContent;
@protocol SAAceCommand;

@protocol AFUISiriSessionDelegate <AFUISiriSessionListener>
- (void)siriSessionFailTest:(NSString *)arg1 withReason:(NSString *)arg2;
- (void)siriSessionDidFinishTest:(NSString *)arg1;
- (void)siriSessionWillStartTest:(NSString *)arg1;
- (void)siriSessionWillDismissAudioRoutePicker;
- (void)siriSessionWillShowAudioRoutePicker;
- (void)siriSessionSpeechRecordingDidFailWithError:(NSError *)arg1;
- (void)siriSessionSpeechRecordingDidCancel;
- (void)siriSessionSpeechRecordingDidEnd;
- (void)siriSessionSpeechRecordingDidChangeAVRecordRoute:(NSString *)arg1;
- (void)siriSessionDidReceivePlayContentCommand:(SAVCSPlayContent *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveDisambiguationItemSelected:(SAUIDisambiguationItemSelected *)arg1;
- (void)siriSessionDidReceivePreSynthesizeTTSCommand:(SAPreSynthesizeTTS *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveShowNextCardCommand:(SACardShowNextCard *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveAddContentToViewCommand:(SAUIAddContentToView *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveGuideUpdateCommand:(SAGuidanceGuideUpdate *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveHideSiriOverlayCommand:(SAUIHideSiriOverlay *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveSetUIGuidedAccessCommand:(SASettingSetUIGuidedAccess *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveSAUIShowSpeechAlternativesCommand:(SAUIShowSpeechAlternatives *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveSAUIChangePrimaryUtteranceCommand:(SAUIChangePrimaryUtterance *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveSetSuggestedUtterancesCommand:(SAUISetSuggestedUtterances *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveGetResponseAlternativesPlaybackCommand:(SAUIGetResponseAlternativesPlayback *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveListenForPronunciationCommand:(SAUIListenForPronunciation *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveCloseAssistantCommand:(SAUICloseAssistant *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveAppPunchOutCommand:(SAUIAppPunchOut *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveUpdateViewsCommand:(SAUIUpdateViews *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveShowHelpCommand:(SAUIShowHelp *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveRepeatItCommand:(SAUIRepeatIt *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveSayItCommand:(SAUISayIt *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveSmsPlayAudioCommand:(SASmsPlayAudio *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceivePlayVoicemailCommand:(SAPhonePlayVoiceMail *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveClearScreenCommand:(SAUIClearScreen *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveOpenLinkCommand:(SAUIOpenLink *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveAddViewsCommand:(SAUIAddViews *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidUpdateRecognitionWithPhrases:(NSArray *)arg1 utterances:(NSArray *)arg2 refId:(NSString *)arg3;
- (void)siriSessionDidRecognizedAdditionalSpeechInterpretation:(AFSpeechInterpretation *)arg1 refId:(NSString *)arg2;
- (void)siriSessionDidReceiveSpeechPartialResultCommand:(SASSpeechPartialResult *)arg1;
- (void)siriSessionDidReceiveSpeechRecognizedCommand:(SASSpeechRecognized *)arg1;
- (void)siriSessionDidDetectSpeechStartpoint;
- (void)siriSessionDidDetectMusic;
- (void)siriSessionGetRequestContextWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)siriSessionSupportsSpeechSynthesis:(_Bool)arg1;
- (void)siriSessionIsPresentingApplePaySheet;
- (void)siriSessionIsPresentingLocalAuthenticationUI;
- (void)siriSessionWantsToCacheImage:(INImage *)arg1;
- (void)siriSessionRequestsDismissal;
- (void)siriSessionOpenURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)siriSessionDidChangeLockState:(unsigned long long)arg1;
- (void)siriSessionDidChangeNetworkAvailability;
- (void)siriSessionDidFinishRequestWithError:(NSError *)arg1;
- (void)siriSessionDidFinishAcousticIDRequestWithSuccess:(_Bool)arg1;
- (void)siriSessionAudioRecordingDidChangePowerLevel:(float)arg1;
- (void)siriSessionDidFailToStartStarkNotificationRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)siriSessionWillStartUIRequestWithText:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)siriSessionWillCancelRequest;
- (void)siriSessionWillStartRequest;
- (void)siriSessionWillStartRequestWithOptions:(AFUIRequestOptions *)arg1 completion:(void (^)(AFUIRequestOptions *))arg2;
- (void)siriSessionDidTransitionFromState:(long long)arg1 toState:(long long)arg2 event:(long long)arg3;
- (void)siriSessionResultForAceCommand:(AceObject<SAAceCommand> *)arg1 completion:(void (^)(long long))arg2;
@end

