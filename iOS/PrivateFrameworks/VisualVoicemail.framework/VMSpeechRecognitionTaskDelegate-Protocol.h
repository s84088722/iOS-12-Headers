//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualVoicemail/NSObject-Protocol.h>

@class SFTranscription;
@protocol VMSpeechRecognitionResult, VMSpeechRecognitionTask;

@protocol VMSpeechRecognitionTaskDelegate <NSObject>

@optional
- (void)speechRecognitionTask:(id <VMSpeechRecognitionTask>)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)speechRecognitionTaskWasCancelled:(id <VMSpeechRecognitionTask>)arg1;
- (void)speechRecognitionTaskFinishedReadingAudio:(id <VMSpeechRecognitionTask>)arg1;
- (void)speechRecognitionTask:(id <VMSpeechRecognitionTask>)arg1 didFinishRecognition:(id <VMSpeechRecognitionResult>)arg2;
- (void)speechRecognitionTask:(id <VMSpeechRecognitionTask>)arg1 didHypothesizeTranscription:(SFTranscription *)arg2;
- (void)speechRecognitionDidDetectSpeech:(id <VMSpeechRecognitionTask>)arg1;
@end
