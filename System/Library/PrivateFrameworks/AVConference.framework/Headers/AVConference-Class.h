/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:37:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSDictionary, NSMutableDictionary, NSObject, NSTimer, CALayer;

@interface AVConference : NSObject {

	AVConferenceXPCClient* connection;
	id opaqueConf;
	BOOL useServer;
	id _delegate;
	NSDictionary* serverBag;
	BOOL _isUsingFrontCamera;
	BOOL _microphoneMuted;
	NSMutableDictionary* _stateCacheForCallID;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	long long _inputAudioPowerSpectrumToken;
	long long _outputAudioPowerSpectrumToken;
	BOOL shouldDisplayNetworkQualityGraph_;
	NSTimer* networkQualityUpdateTimer_;
	CALayer* networkQualityGraphLayer_;

}

@property (retain) CALayer * networkQualityGraphLayer; 
@property (retain) NSTimer * networkQualityUpdateTimer; 
@property (assign) BOOL shouldDisplayNetworkQualityGraph; 
@property (getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat; 
@property (assign,nonatomic) NSObject*<AVConferenceDelegate> delegate; 
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted;                                            //@synthesize microphoneMuted=_microphoneMuted - In the implementation block
@property (assign,getter=isInputFrequencyMeteringEnabled,nonatomic) BOOL inputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputFrequencyMeteringEnabled,nonatomic) BOOL outputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputMeteringEnabled,nonatomic) BOOL outputMeteringEnabled; 
@property (assign,getter=isInputMeteringEnabled,nonatomic) BOOL inputMeteringEnabled; 
@property (readonly) float outputMeterLevel; 
@property (readonly) float inputMeterLevel; 
@property (assign,nonatomic) BOOL requiresWifi; 
@property (readonly) long long inputAudioPowerSpectrumToken;                                                           //@synthesize inputAudioPowerSpectrumToken=_inputAudioPowerSpectrumToken - In the implementation block
@property (readonly) long long outputAudioPowerSpectrumToken;                                                          //@synthesize outputAudioPowerSpectrumToken=_outputAudioPowerSpectrumToken - In the implementation block
@property (readonly) int localFrameHeight; 
@property (readonly) int localFrameWidth; 
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone; 
@property (readonly) unsigned natType; 
+(void)stopAudioSession;
+(void)refreshLoggingParameters;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)hasActiveAudioSession;
+(unsigned)doBlockingConnectionCheck:(BOOL)arg1 ;
+(unsigned)doBlockingConnectionCheck;
+(short)addressPointerFromBlob:(id)arg1 ;
+(id)externalAddressForSelfConnectionBlob:(id)arg1 ;
+(void)setAudioSessionProperties:(id)arg1 ;
-(float)networkQuality;
-(BOOL)isInputMeteringEnabled;
-(BOOL)isSpeakerPhoneEnabled;
-(void)handleGKSConnectivitySettingsUpdate:(id)arg1 ;
-(void)updateGKSConnectivitySettings;
-(id)initWithClientUUID:(id)arg1 ;
-(id)initWithClientUUID:(id)arg1 transportType:(unsigned)arg2 ;
-(void)setShouldDisplayNetworkQualityGraph:(BOOL)arg1 ;
-(BOOL)shouldDisplayNetworkQualityGraph;
-(void)serverDied;
-(void)registerBlocksForVCNotifications;
-(void)listenForNotifications;
-(long long)initializeNewCallWithDeviceRole:(int)arg1 ;
-(void)setCallState:(id)arg1 forCallID:(id)arg2 ;
-(void)stopListeningForNotifications;
-(void)deregisterBlocksForVCNotifications;
-(id)newRandomParticipantID;
-(void)startNetworkQualityUpdateTimer;
-(id)callStateForCallID:(id)arg1 ;
-(BOOL)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id*)arg10 ;
-(BOOL)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 error:(id*)arg9 ;
-(BOOL)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 error:(id*)arg8 ;
-(double)networkQualityForCallID:(long long)arg1 ;
-(CALayer *)networkQualityGraphLayer;
-(NSTimer *)networkQualityUpdateTimer;
-(BOOL)updateNetworkQualityGraph;
-(void)setNetworkQualityUpdateTimer:(NSTimer *)arg1 ;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(unsigned)doBlockingConnectionCheck;
-(long long)initializeNewCall;
-(void)warmupForCall;
-(BOOL)isUsingViceroyBlobFormat;
-(void)setUseViceroyBlobFormat:(BOOL)arg1 ;
-(void)setSetSessionID:(id)arg1 forCallID:(long long)arg2 ;
-(void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2 ;
-(void)sendARPLData:(id)arg1 toCallID:(long long)arg2 ;
-(void)sendData:(id)arg1 forCallID:(long long)arg2 encrypted:(BOOL)arg3 ;
-(void)inviteDictionaryForCallID:(long long)arg1 remoteInviteDictionary:(id)arg2 nonCellularCandidateTimeout:(double)arg3 block:(/*^block*/id)arg4 queue:(id)arg5 ;
-(id)callMetadataForCallID:(long long)arg1 ;
-(void)setPeerCN:(id)arg1 callID:(long long)arg2 ;
-(void)setPeerReportingIdentifier:(id)arg1 sessionIdentifier:(id)arg2 forCallID:(long long)arg3 ;
-(void)setSessionID:(id)arg1 callID:(long long)arg2 ;
-(BOOL)requiresWifi;
-(void)setRequiresWifi:(BOOL)arg1 ;
-(id)convertBlobtoOldBlob:(id)arg1 ;
-(id)convertBlobtoNewBlob:(id)arg1 ;
-(BOOL)startConnectionWithCallID:(long long)arg1 inviteData:(id)arg2 isCaller:(BOOL)arg3 capabilities:(id)arg4 destination:(id)arg5 error:(id*)arg6 ;
-(BOOL)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 error:(id*)arg8 ;
-(BOOL)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 error:(id*)arg7 ;
-(void)stopCallID:(long long)arg1 ;
-(void)cancelCallID:(long long)arg1 ;
-(void)remoteCancelledCallID:(long long)arg1 ;
-(void)sendProtobuf:(id)arg1 withType:(long long)arg2 forCallID:(long long)arg3 ;
-(void)setCallReport:(long long)arg1 withReport:(id)arg2 ;
-(long long)lastActiveCallID;
-(void)setLastActiveCallID:(long long)arg1 ;
-(void)processRemoteIPChange:(id)arg1 callID:(long long)arg2 ;
-(BOOL)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(BOOL)arg1 ;
-(void)setInputMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isInputFrequencyMeteringEnabled;
-(void)setInputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isOutputFrequencyMeteringEnabled;
-(void)setOutputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(float)outputMeterLevel;
-(BOOL)getIsSendingAudio:(BOOL*)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)getIsAudioPaused:(BOOL*)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)getIsVideoPaused:(BOOL*)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(float)inputMeterLevel;
-(id)currentAudioInputDevice;
-(id)currentAudioOutputDevice;
-(BOOL)setAudioInputDevice:(id)arg1 ;
-(BOOL)setAudioOutputDevice:(id)arg1 ;
-(void)stopNetworkQualityUpdateTimer;
-(void*)remoteVideoLayer;
-(void*)remoteVideoBackLayer;
-(void)setRemoteVideoLayer:(void*)arg1 ;
-(void)setRemoteVideoBackLayer:(void*)arg1 ;
-(long long)videoStreamTokenForCallID:(long long)arg1 ;
-(double)localFramerateForCallID:(long long)arg1 ;
-(double)localBitrateForCallID:(long long)arg1 ;
-(double)remoteFramerateForCallID:(long long)arg1 ;
-(double)remoteBitrateForCallID:(long long)arg1 ;
-(int)localFrameHeight;
-(int)localFrameWidth;
-(int)remoteFrameHeightForCallID:(long long)arg1 ;
-(int)remoteFrameWidthForCallID:(long long)arg1 ;
-(double)remotePacketLossRateForCallID:(long long)arg1 ;
-(double)localPacketLossRateForCallID:(long long)arg1 ;
-(double)roundTripTimeForCallID:(long long)arg1 ;
-(id)statsForCallID:(long long)arg1 ;
-(void)setEnableSpeakerPhone:(BOOL)arg1 ;
-(unsigned)natType;
-(BOOL)setSendingAudio:(BOOL)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setPauseAudio:(BOOL)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setPauseVideo:(BOOL)arg1 callID:(long long)arg2 error:(id*)arg3 ;
-(void)updateCapabilities:(id)arg1 forCallID:(long long)arg2 ;
-(id)capabilitiesForCallID:(long long)arg1 ;
-(BOOL)setServerInfo:(id)arg1 ;
-(void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned)arg3 withUserInfo:(id)arg4 error:(id)arg5 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3 ;
-(void)videoConference:(id)arg1 withCallID:(long long)arg2 isSendingAudio:(BOOL)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(BOOL)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 withCallID:(long long)arg2 didPauseVideo:(BOOL)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3 callMetadata:(id)arg4 ;
-(void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned)arg2 ;
-(void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2 ;
-(void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2 ;
-(void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(BOOL)arg2 ;
-(void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 sendRelayUpdate:(unsigned)arg2 updateDict:(id)arg3 ;
-(void)videoConference:(id)arg1 cancelRelayRequest:(unsigned)arg2 requestDict:(id)arg3 ;
-(void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4 ;
-(void)videoConference:(id)arg1 withCallID:(unsigned)arg2 networkHint:(BOOL)arg3 ;
-(void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned)arg2 ;
-(void)videoConference:(id)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned)arg2 forCallID:(unsigned)arg3 ;
-(void)videoConference:(id)arg1 reinitializeCallForCallID:(unsigned)arg2 ;
-(void)videoConference:(id)arg1 closeConnectionForCallID:(long long)arg2 ;
-(void)processRelayRequestResponse:(long long)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3 ;
-(void)processRelayUpdate:(long long)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3 ;
-(void)processCancelRelayRequest:(long long)arg1 cancelDict:(id)arg2 didOriginateRequest:(BOOL)arg3 ;
-(void)shouldSendBlackFrames:(BOOL)arg1 callID:(long long)arg2 ;
-(void)setConferenceState:(unsigned)arg1 forCallID:(long long)arg2 ;
-(void)setConferenceVisualRectangle:(CGRect)arg1 forCallID:(long long)arg2 ;
-(void)setPeerProtocolVersion:(unsigned)arg1 forCallID:(long long)arg2 ;
-(void)setNetworkQualityGraphLayer:(CALayer *)arg1 ;
-(long long)inputAudioPowerSpectrumToken;
-(long long)outputAudioPowerSpectrumToken;
-(void)serverReconnected;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(BOOL)isMicrophoneMuted;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(NSObject*<AVConferenceDelegate>)arg1 ;
-(BOOL)setActive:(BOOL)arg1 ;
-(NSObject*<AVConferenceDelegate>)delegate;
@end
