//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "VSSpeechSpeakableProtocol-Protocol.h"

@class NSMutableData, NSString, VSAudioPlaybackService, VSInstrumentMetrics, VSPresynthesizedAudioRequest;
@protocol VSSpeechServiceDelegate;

@interface VSSpeechPresynthesizedTask : NSOperation <VSSpeechSpeakableProtocol>
{
    VSPresynthesizedAudioRequest *_request;
    id <VSSpeechServiceDelegate> _delegate;
    VSAudioPlaybackService *_playbackService;
    VSInstrumentMetrics *_instrumentMetrics;
    NSMutableData *_audioData;
    struct AudioStreamBasicDescription _asbd;
}

@property(nonatomic) struct AudioStreamBasicDescription asbd; // @synthesize asbd=_asbd;
@property(retain, nonatomic) NSMutableData *audioData; // @synthesize audioData=_audioData;
@property(retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // @synthesize instrumentMetrics=_instrumentMetrics;
@property(retain, nonatomic) VSAudioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(nonatomic) __weak id <VSSpeechServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VSPresynthesizedAudioRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)audioPowerProvider;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (id)md5hash;
- (void)reportFinish;
- (void)reportSpeechStart;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (_Bool)isSpeaking;
- (void)main;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1;
- (double)_clockFactor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

