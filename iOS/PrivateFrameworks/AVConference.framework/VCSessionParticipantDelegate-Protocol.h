//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSError, NSString, VCSessionParticipant;

@protocol VCSessionParticipantDelegate <NSObject>
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didDetectError:(NSError *)arg2;
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeReceivingStreams:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeSendingStreams:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didRequestVideoRedundancy:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateAudio:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateVideo:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didChangeProminence:(unsigned char)arg2 description:(NSString *)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoPausedDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioPausedDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoEnabledDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioEnabledDidChange:(_Bool)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(NSError *)arg4;
@end

