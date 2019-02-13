//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface VSInstrumentMetrics : NSObject <NSSecureCoding>
{
    _Bool _isWarmStart;
    _Bool _isServerTTS;
    _Bool _isServerTimeout;
    _Bool _isServerTTSRacing;
    _Bool _canUseServerTTS;
    _Bool _isSpeechRequest;
    _Bool _isCacheHitFromDisk;
    _Bool _isCacheHitFromMemory;
    NSString *_utterance;
    NSString *_voiceAssetKey;
    NSString *_voiceResourceAssetKey;
    long long _requestCreatedTimestamp;
    long long _eagerRequestCreatedTimeStampDiffs;
    long long _synthesisBeginTimestamp;
    long long _synthesisEndTimestamp;
    long long _speechBeginTimestamp;
    long long _speechEndTimestamp;
    long long _audioStartTimestampDiffs;
    double _audioDuration;
    long long _promptCount;
    long long _synthesisToSpeechTimeGap;
    long long _waitForSynthesisToFinishTimeDelay;
}

+ (_Bool)supportsSecureCoding;
@property _Bool isCacheHitFromMemory; // @synthesize isCacheHitFromMemory=_isCacheHitFromMemory;
@property _Bool isCacheHitFromDisk; // @synthesize isCacheHitFromDisk=_isCacheHitFromDisk;
@property long long waitForSynthesisToFinishTimeDelay; // @synthesize waitForSynthesisToFinishTimeDelay=_waitForSynthesisToFinishTimeDelay;
@property long long synthesisToSpeechTimeGap; // @synthesize synthesisToSpeechTimeGap=_synthesisToSpeechTimeGap;
@property _Bool isSpeechRequest; // @synthesize isSpeechRequest=_isSpeechRequest;
@property long long promptCount; // @synthesize promptCount=_promptCount;
@property _Bool canUseServerTTS; // @synthesize canUseServerTTS=_canUseServerTTS;
@property _Bool isServerTTSRacing; // @synthesize isServerTTSRacing=_isServerTTSRacing;
@property _Bool isServerTimeout; // @synthesize isServerTimeout=_isServerTimeout;
@property _Bool isServerTTS; // @synthesize isServerTTS=_isServerTTS;
@property _Bool isWarmStart; // @synthesize isWarmStart=_isWarmStart;
@property double audioDuration; // @synthesize audioDuration=_audioDuration;
@property long long audioStartTimestampDiffs; // @synthesize audioStartTimestampDiffs=_audioStartTimestampDiffs;
@property long long speechEndTimestamp; // @synthesize speechEndTimestamp=_speechEndTimestamp;
@property long long speechBeginTimestamp; // @synthesize speechBeginTimestamp=_speechBeginTimestamp;
@property long long synthesisEndTimestamp; // @synthesize synthesisEndTimestamp=_synthesisEndTimestamp;
@property long long synthesisBeginTimestamp; // @synthesize synthesisBeginTimestamp=_synthesisBeginTimestamp;
@property long long eagerRequestCreatedTimeStampDiffs; // @synthesize eagerRequestCreatedTimeStampDiffs=_eagerRequestCreatedTimeStampDiffs;
@property long long requestCreatedTimestamp; // @synthesize requestCreatedTimestamp=_requestCreatedTimestamp;
@property(copy) NSString *voiceResourceAssetKey; // @synthesize voiceResourceAssetKey=_voiceResourceAssetKey;
@property(copy) NSString *voiceAssetKey; // @synthesize voiceAssetKey=_voiceAssetKey;
@property(copy) NSString *utterance; // @synthesize utterance=_utterance;
- (void).cxx_destruct;
- (double)synthesisToSpeechTime;
- (double)waitForSynthesisToFinishTime;
- (double)ttsTotalLatency;
- (double)synthesisLatency;
- (id)dictionaryMetrics;
- (double)eagerRequestTimeGap;
- (_Bool)isSynthesisCached;
- (double)ttsSynthesisLatency;
- (double)audioQueueLatency;
- (double)timeToSpeakLatency;
- (double)_clockFactor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

