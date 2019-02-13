//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFMetrics, AFUIRequestOptions, AFUserUtteranceSelectionResults, AceObject, NSString, SABaseClientBoundCommand;
@protocol SAAceCommand;

@protocol AFUISiriSession <NSObject>
- (void)audioRoutePickerWillDismiss;
- (void)audioRoutePickerWillShow;
- (void)recordMetricsContext:(NSString *)arg1 forDisambiguatedAppWIthBundleIdentifier:(NSString *)arg2;
- (void)recordRequestMetricEvent:(NSString *)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(AFMetrics *)arg1;
- (void)requestDidPresentViewForErrorCommand:(SABaseClientBoundCommand *)arg1;
- (void)requestDidPresentViewForUICommand:(SABaseClientBoundCommand *)arg1;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1 conflictHandler:(void (^)(void))arg2;
- (void)startCorrectedRequestWithText:(NSString *)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(AFUserUtteranceSelectionResults *)arg3;
- (void)cancelSpeechRequest;
- (void)stopRecordingSpeech;
- (void)telephonyRequestCompleted;
- (void)sendReplyCommand:(AceObject<SAAceCommand> *)arg1;
- (void)end;
- (void)updateRequestOptions:(AFUIRequestOptions *)arg1;
- (void)stopRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)startRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)setApplicationContext;
- (void)setAlertContext;
- (void)rollbackClearContext;
- (void)resetContextTypes:(long long)arg1;
- (void)clearContext;
- (void)resumeInterruptedAudioPlaybackIfNeeded;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionActiveForReason:(long long)arg1;
- (void)forceAudioSessionActive;
- (void)preheat;
- (void)setLockState:(unsigned long long)arg1;
- (void)setCarDNDActive:(_Bool)arg1;
- (void)setDeviceInStarkMode:(_Bool)arg1;
@end

