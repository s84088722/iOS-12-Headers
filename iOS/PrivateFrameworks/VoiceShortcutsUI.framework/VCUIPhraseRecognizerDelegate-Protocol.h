//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceShortcutsUI/NSObject-Protocol.h>

@class NSArray, NSError, NSString, VCUIPhraseRecognizer;

@protocol VCUIPhraseRecognizerDelegate <NSObject>

@optional
- (void)phraseRecognizerDidFailToStartRecording:(VCUIPhraseRecognizer *)arg1;
- (void)phraseRecognizer:(VCUIPhraseRecognizer *)arg1 didReceiveFinalTranscription:(NSString *)arg2 alternativeTranscriptions:(NSArray *)arg3;
- (void)phraseRecognizer:(VCUIPhraseRecognizer *)arg1 didReceiveHypothesizedTranscription:(NSString *)arg2;
- (void)phraseRecognizer:(VCUIPhraseRecognizer *)arg1 availabilityDidChange:(_Bool)arg2;
- (void)phraseRecognizerDidStopRecording:(VCUIPhraseRecognizer *)arg1 withError:(NSError *)arg2;
- (void)phraseRecognizerDidStartRecording:(VCUIPhraseRecognizer *)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
@end
