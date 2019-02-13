//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFAudioPlaybackRequest, AFSpeechInterpretation, AFXPCWrapper, AceObject, INImage, NSArray, NSDictionary, NSError, NSString, NSURL, SASSpeechPartialResult, SASSpeechRecognized;
@protocol SAAceCommand;

@protocol AFClientServiceDelegate <NSObject>
- (oneway void)audioSessionDidBecomeActive:(_Bool)arg1;
- (oneway void)audioSessionWillBecomeActive:(_Bool)arg1;
- (oneway void)startPlaybackDidFail:(long long)arg1;
- (oneway void)willProcessStartPlayback:(long long)arg1;
- (oneway void)audioPlaybackRequestDidStop:(AFAudioPlaybackRequest *)arg1 error:(NSError *)arg2;
- (oneway void)audioPlaybackRequestDidNotStart:(AFAudioPlaybackRequest *)arg1 error:(NSError *)arg2;
- (oneway void)audioPlaybackRequestDidStart:(AFAudioPlaybackRequest *)arg1;
- (oneway void)audioPlaybackRequestWillStart:(AFAudioPlaybackRequest *)arg1;
- (oneway void)audioSessionDidEndInterruption:(_Bool)arg1;
- (oneway void)audioSessionDidBeginInterruption;
- (oneway void)aceConnectionWillRetryOnError:(NSError *)arg1;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(NSString *)arg1;
- (oneway void)speechRecordingDidRecognizePhrases:(NSArray *)arg1 utterances:(NSArray *)arg2;
- (oneway void)speechRecordingDidFinishRecognitionUpdateWithError:(NSError *)arg1;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(NSArray *)arg1 utterances:(NSArray *)arg2 refId:(NSString *)arg3;
- (oneway void)speechRecognitionDidFail:(NSError *)arg1;
- (oneway void)speechRecognizedPartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechRecognizedAdditionalInterpretation:(AFSpeechInterpretation *)arg1 refId:(NSString *)arg2;
- (oneway void)speechRecognized:(SASSpeechRecognized *)arg1;
- (oneway void)speechRecordingDidFail:(NSError *)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(long long)arg1 reply:(void (^)(double, double, NSError *))arg2;
- (oneway void)speechRecordingStartpointDetected;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(NSString *)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg1 audioSessionID:(unsigned int)arg2;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(AFXPCWrapper *)arg1;
- (oneway void)getClockContext:(void (^)(AFClockAlarmSnapshot *, AFClockTimerSnapshot *))arg1;
- (oneway void)getBulletinContext:(void (^)(NSArray *))arg1;
- (oneway void)startUIRequestWithText:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (oneway void)extensionRequestFinishedForApplication:(NSString *)arg1 error:(NSError *)arg2;
- (oneway void)extensionRequestWillStartForApplication:(NSString *)arg1;
- (oneway void)cacheImage:(INImage *)arg1;
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)setUserActivityInfo:(NSDictionary *)arg1 webpageURL:(NSURL *)arg2;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(_Bool)arg1;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenURL:(NSURL *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(NSString *)arg1 URL:(NSURL *)arg2 reply:(void (^)(_Bool))arg3;
- (oneway void)requestHandleCommand:(AceObject<SAAceCommand> *)arg1 reply:(void (^)(AceObject<SAAceCommand> *, NSError *))arg2;
- (oneway void)requestDidReceiveCommand:(AceObject<SAAceCommand> *)arg1 reply:(void (^)(AceObject<SAAceCommand> *))arg2;
- (oneway void)audioSessionIDChanged:(unsigned int)arg1;
- (oneway void)shouldSpeakChanged:(_Bool)arg1;
@end

