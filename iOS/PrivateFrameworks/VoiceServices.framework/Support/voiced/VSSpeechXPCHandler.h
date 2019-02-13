//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VSSpeechServiceDelegate-Protocol.h"
#import "VSSpeechXPCServiceProtocol-Protocol.h"

@class AFAudioPowerUpdater, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface VSSpeechXPCHandler : NSObject <VSSpeechXPCServiceProtocol, VSSpeechServiceDelegate>
{
    NSXPCConnection *_connection;
    NSString *_connectionIdentifier;
    NSObject<OS_dispatch_queue> *_audioPowerUpdateQueue;
    AFAudioPowerUpdater *_audioPowerUpdater;
}

+ (id)sharedCurrentSpeakingTaskQueue;
@property(retain, nonatomic) AFAudioPowerUpdater *audioPowerUpdater; // @synthesize audioPowerUpdater=_audioPowerUpdater;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioPowerUpdateQueue; // @synthesize audioPowerUpdateQueue=_audioPowerUpdateQueue;
@property(retain, nonatomic) NSString *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
- (void).cxx_destruct;
- (oneway void)getTTSServerVoicesWithFilter:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getLogToFile:(CDUnknownBlockType)arg1;
- (oneway void)setLogToFile:(_Bool)arg1;
- (oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (oneway void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
- (oneway void)setAutoDownloadedVoiceAssets:(id)arg1;
- (oneway void)getLocalVoiceResourcesReply:(CDUnknownBlockType)arg1;
- (oneway void)getLocalVoicesReply:(CDUnknownBlockType)arg1;
- (oneway void)cleanUnusedAssets:(CDUnknownBlockType)arg1;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(_Bool)arg1 error:(id)arg2;
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2;
- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1;
- (oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;
- (oneway void)speechRequestDidReceiveTimingInfo:(id)arg1;
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;
- (id)_delegate;
- (oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)endAudioPowerUpdate;
- (oneway void)beginAudioPowerUpdateWithReply:(CDUnknownBlockType)arg1;
- (oneway void)getSpeechIsActiveForConnectionReply:(CDUnknownBlockType)arg1;
- (oneway void)getSpeechIsActiveReply:(CDUnknownBlockType)arg1;
- (oneway void)stopSpeechRequestAtMark:(long long)arg1;
- (oneway void)continueSpeechRequest;
- (oneway void)pauseSpeechRequestAtMark:(long long)arg1;
- (oneway void)startSynthesisRequest:(id)arg1;
- (oneway void)stopPresynthesizedAudioRequest;
- (oneway void)cachePresynthesizedAudioRequest:(id)arg1;
- (oneway void)startPresynthesizedAudioRequest:(id)arg1;
- (oneway void)startSpeechRequest:(id)arg1;
- (oneway void)prewarmIfNeededWithRequest:(id)arg1;
- (oneway void)updateWithConnectionIdentifier:(id)arg1;
- (void)performLanguageFallBackIfNeededWithRequest:(id)arg1;
- (_Bool)isSpeaking;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

