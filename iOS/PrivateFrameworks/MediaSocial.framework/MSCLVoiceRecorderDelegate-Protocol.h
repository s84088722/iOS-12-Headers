//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaSocial/NSObject-Protocol.h>

@class MSCLVoiceRecorder;

@protocol MSCLVoiceRecorderDelegate <NSObject>

@optional
- (void)voiceRecorderDidStartRecording:(MSCLVoiceRecorder *)arg1;
- (void)voiceRecorder:(MSCLVoiceRecorder *)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceRecorder:(MSCLVoiceRecorder *)arg1 didFinishWithSuccess:(_Bool)arg2;
@end
