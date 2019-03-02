//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSSpeechTaskProtocol-Protocol.h"

@class VSInstrumentMetrics, VSSpeechRequest;
@protocol AFAudioPowerProviding;

@protocol VSSpeechSpeakableProtocol <VSSpeechTaskProtocol>
- (_Bool)isSpeaking;

@optional
- (id <AFAudioPowerProviding>)audioPowerProvider;
- (VSInstrumentMetrics *)instrumentMetrics;
- (VSSpeechRequest *)request;
- (void)reportTimingInfo;
- (void)reportSpeechStart;
- (void)reportInstrumentMetrics;
@end
