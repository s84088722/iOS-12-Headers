//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Rapport/NSObject-Protocol.h>

@class AVVCAudioBuffer, AVVoiceController, NSDictionary, NSError;

@protocol AVVoiceControllerRecordDelegate <NSObject>

@optional
- (void)voiceControllerLPCMRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerRecordBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)voiceControllerDidSetAudioSessionActive:(AVVoiceController *)arg1 isActivated:(_Bool)arg2;
- (void)voiceControllerWillSetAudioSessionActive:(AVVoiceController *)arg1 willActivate:(_Bool)arg2;
- (void)voiceControllerMediaServicesWereReset:(AVVoiceController *)arg1;
- (void)voiceControllerMediaServicesWereLost:(AVVoiceController *)arg1;
- (void)voiceControllerEndRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerBeginRecordInterruption:(AVVoiceController *)arg1 withContext:(NSDictionary *)arg2;
- (void)voiceControllerBeginRecordInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(AVVoiceController *)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerDidFinishAlertPlayback:(AVVoiceController *)arg1 ofType:(int)arg2 error:(NSError *)arg3;
- (void)voiceControllerEncoderErrorDidOccur:(AVVoiceController *)arg1 error:(NSError *)arg2;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectEndpoint:(AVVoiceController *)arg1 ofType:(int)arg2;
- (void)voiceControllerDidDetectStartpoint:(AVVoiceController *)arg1;
- (void)voiceControllerDidStopRecording:(AVVoiceController *)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
- (void)voiceControllerDidStartRecording:(AVVoiceController *)arg1 successfully:(_Bool)arg2;
@end

