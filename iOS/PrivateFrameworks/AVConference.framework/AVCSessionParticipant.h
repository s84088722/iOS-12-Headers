//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/AVCSessionParticipantControlProtocol-Protocol.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, VCXPCClientShared;
@protocol AVCSessionParticipantDelegate, OS_dispatch_queue;

@interface AVCSessionParticipant : NSObject <AVCSessionParticipantControlProtocol>
{
    unsigned long long _idsParticipantID;
    NSString *_participantID;
    NSData *_participantData;
    id _delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    VCXPCClientShared *_connection;
    NSData *_frequencyLevels;
    long long _videoToken;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
    NSMutableDictionary *_participantConfig;
    _Bool _audioMuted;
    _Bool _audioEnabled;
    _Bool _audioPaused;
    _Bool _videoEnabled;
    _Bool _videoPaused;
    float _volume;
    float _audioPosition;
    _Bool _configurationInProgress;
    _Bool _hasPendingChanges;
}

@property(nonatomic) _Bool hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(nonatomic) _Bool configurationInProgress; // @synthesize configurationInProgress=_configurationInProgress;
@property(nonatomic) float audioPosition; // @synthesize audioPosition=_audioPosition;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioPaused) _Bool audioPaused; // @synthesize audioPaused=_audioPaused;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic, getter=isAudioMuted) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(readonly, nonatomic) NSData *frequencyLevels; // @synthesize frequencyLevels=_frequencyLevels;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue; // @synthesize delegateNotificationQueue=_delegateNotificationQueue;
@property(nonatomic) long long videoToken; // @synthesize videoToken=_videoToken;
@property(readonly, nonatomic) NSData *negotiationData; // @synthesize negotiationData=_participantData;
@property(readonly, nonatomic) unsigned long long participantID; // @synthesize participantID=_idsParticipantID;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_participantID;
@property(nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
- (void)setupConfig;
- (void)setupNotificationQueue:(id)arg1;
- (void)deregisterFromNotifications;
- (void)registerBlocksForNotifications;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (id)initWithParticipantID:(unsigned long long)arg1 data:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
@property(readonly, nonatomic) NSDictionary *config;
@property(retain, nonatomic) VCXPCClientShared *sharedXPCConnection;
@property(nonatomic) id <AVCSessionParticipantDelegate> delegate;
- (void)setStateVideoEnabled:(_Bool)arg1;
- (void)setStateAudioEnabled:(_Bool)arg1;
- (void)setStateVideoPaused:(_Bool)arg1;
- (void)setStateAudioPaused:(_Bool)arg1;
- (_Bool)isConnectedToSession;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

