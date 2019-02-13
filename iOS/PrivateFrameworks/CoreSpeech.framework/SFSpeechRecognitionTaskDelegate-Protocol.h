//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class SFSpeechRecognitionResult, SFSpeechRecognitionTask, SFTranscription;

@protocol SFSpeechRecognitionTaskDelegate <NSObject>

@optional
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didFinishSuccessfully:(_Bool)arg2;
- (void)speechRecognitionTaskWasCancelled:(SFSpeechRecognitionTask *)arg1;
- (void)speechRecognitionTaskFinishedReadingAudio:(SFSpeechRecognitionTask *)arg1;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didFinishRecognition:(SFSpeechRecognitionResult *)arg2;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didHypothesizeTranscription:(SFTranscription *)arg2;
- (void)speechRecognitionDidDetectSpeech:(SFSpeechRecognitionTask *)arg1;
@end

