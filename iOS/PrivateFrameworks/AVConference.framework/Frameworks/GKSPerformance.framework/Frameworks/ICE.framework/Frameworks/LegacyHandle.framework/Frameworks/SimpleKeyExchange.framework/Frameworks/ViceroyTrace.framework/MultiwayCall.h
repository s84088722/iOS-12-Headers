//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MultiwayCall : NSObject
{
    NSString *_remoteParticipantID;
    NSMutableDictionary *_streams;
    _Bool _isAudioEnabled;
    _Bool _isVideoEnabled;
    _Bool _live;
    _Bool _isFullSize;
    int _duration;
    int _adjustedDuration;
    int _interval;
    int _frequency;
    unsigned long long _downlinkRateSum;
    unsigned int _downlinkRateUpdateCounter;
    unsigned long long _actualBitrateSum;
    unsigned int _actualBitrateUpdateCounter;
    unsigned int _videoStreamSwitchCount;
    unsigned int _audioStreamSwitchCount;
    unsigned int _downlinkTargetBitrateSwitchCount;
    unsigned int _timeToSeeFirstRemoteVideoFrame;
    unsigned int _timeToHearFirstRemoteAudioFrame;
    unsigned int _averageReceiveFramerate;
    unsigned int _averageJitterbufferLength;
    double _connectionTime;
    unsigned int _firstVideoFrameReceivedDelta;
    unsigned int _firstMKIReceivedDelta;
    unsigned int _firstDecodableVideoFrameDelta;
    _Bool _isVideoDegraded;
    unsigned int _videoDegradedTotalCounter;
    double _videoDegradedTotalTime;
    double _videoDegradedStartTime;
}

@property unsigned int videoDegradedTotalCounter; // @synthesize videoDegradedTotalCounter=_videoDegradedTotalCounter;
@property _Bool isVideoDegraded; // @synthesize isVideoDegraded=_isVideoDegraded;
@property double videoDegradedStartTime; // @synthesize videoDegradedStartTime=_videoDegradedStartTime;
@property double videoDegradedTotalTime; // @synthesize videoDegradedTotalTime=_videoDegradedTotalTime;
@property unsigned int firstDecodableVideoFrameDelta; // @synthesize firstDecodableVideoFrameDelta=_firstDecodableVideoFrameDelta;
@property unsigned int firstMKIReceivedDelta; // @synthesize firstMKIReceivedDelta=_firstMKIReceivedDelta;
@property unsigned int firstVideoFrameReceivedDelta; // @synthesize firstVideoFrameReceivedDelta=_firstVideoFrameReceivedDelta;
@property double connectionTime; // @synthesize connectionTime=_connectionTime;
@property unsigned int averageJitterbufferLength; // @synthesize averageJitterbufferLength=_averageJitterbufferLength;
@property unsigned int timeToHearFirstRemoteAudioFrame; // @synthesize timeToHearFirstRemoteAudioFrame=_timeToHearFirstRemoteAudioFrame;
@property unsigned int timeToSeeFirstRemoteVideoFrame; // @synthesize timeToSeeFirstRemoteVideoFrame=_timeToSeeFirstRemoteVideoFrame;
@property unsigned int downlinkTargetBitrateSwitchCount; // @synthesize downlinkTargetBitrateSwitchCount=_downlinkTargetBitrateSwitchCount;
@property unsigned int audioStreamSwitchCount; // @synthesize audioStreamSwitchCount=_audioStreamSwitchCount;
@property unsigned int videoStreamSwitchCount; // @synthesize videoStreamSwitchCount=_videoStreamSwitchCount;
@property(readonly) NSMutableDictionary *streams; // @synthesize streams=_streams;
@property int adjustedDuration; // @synthesize adjustedDuration=_adjustedDuration;
@property int duration; // @synthesize duration=_duration;
@property _Bool isFullSize; // @synthesize isFullSize=_isFullSize;
@property _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property _Bool isVideoEnabled; // @synthesize isVideoEnabled=_isVideoEnabled;
@property(readonly, getter=isLive) _Bool live; // @synthesize live=_live;
@property(readonly) NSString *remoteParticipantID; // @synthesize remoteParticipantID=_remoteParticipantID;
- (void)processVideoDegraded:(_Bool)arg1;
- (double)audioErasureTotalTime;
- (unsigned short)audioErasureCount;
- (double)significantVideoStallTotalTime;
- (unsigned short)significantVideoStallCount;
- (unsigned int)actualBitrateUpdateCounter;
- (unsigned long long)actualBitrateSum;
- (unsigned int)downlinkRateUpdateCounter;
- (unsigned long long)downlinkRateSum;
- (void)processActualBitrateRateChange:(unsigned int)arg1;
- (void)processDownlinkRateChange:(unsigned int)arg1;
- (void)finalize;
- (unsigned int)RTPeriod;
- (void)dealloc;
- (id)initCallWithRemoteParticipantID:(id)arg1;

@end

