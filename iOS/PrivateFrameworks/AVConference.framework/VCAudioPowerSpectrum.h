//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOSink-Protocol.h>

@class NSString;
@protocol VCAudioPowerSpectrumDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrum : NSObject <VCAudioIOSink>
{
    struct _VCRange _frequencyRange;
    unsigned int _sampleRate;
    unsigned int _fftSampleCount;
    struct AudioStreamBasicDescription _format;
    struct opaqueVCAudioBufferList *_sampleBuffer;
    float *_hanningWindow;
    unsigned int *_octave2IndexTable6;
    unsigned int _octave2IndexTable6Count;
    float _fftNormFactor;
    struct _VCAudioPowerSpectrumChannel *_channelSettings;
    float *_lerpIdxs;
    unsigned int _outputBinCount;
    // Error parsing type: AB, name: _powerSpectrumConfigured
    id <VCAudioPowerSpectrumDelegate> _delegate;
    long long _streamToken;
}

@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(readonly, nonatomic) struct _VCRange frequencyRange; // @synthesize frequencyRange=_frequencyRange;
- (void)computeSpectrumForChannelIndex:(unsigned int)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)cleanupBinsForChannel:(struct _VCAudioPowerSpectrumChannel *)arg1;
- (_Bool)setupBinsForChannel:(struct _VCAudioPowerSpectrumChannel *)arg1;
- (void)cleanupFFTForChannel:(struct _VCAudioPowerSpectrumChannel *)arg1;
- (_Bool)setupFFTForChannel:(struct _VCAudioPowerSpectrumChannel *)arg1;
- (void)cleanupOctave2IndexTableForChannel:(struct _VCAudioPowerSpectrumChannel *)arg1;
- (_Bool)setupOctave2IndexTableForChannel:(struct _VCAudioPowerSpectrumChannel *)arg1;
- (void)cleanupHanningWindow;
- (_Bool)setupHanningWindow;
- (void)cleanupBinInterpolation;
- (_Bool)setupBinInterpolationWithBinCount:(unsigned int)arg1;
- (void)cleanupOctave2IndexTable;
- (_Bool)setupOctave2IndexTableWithBinCount:(unsigned int)arg1;
- (void)cleanupChannel:(struct _VCAudioPowerSpectrumChannel *)arg1;
- (_Bool)setupChannel:(struct _VCAudioPowerSpectrumChannel *)arg1;
- (_Bool)setupAudioPowerSpectrumWithBinCount:(unsigned int)arg1 format:(const struct AudioStreamBasicDescription *)arg2;
- (unsigned int)getNumChannels;
- (id)frequencyBinsForChannelIndex:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <VCAudioPowerSpectrumDelegate> delegate;
- (void)cleanUp;
- (void)dealloc;
- (id)initWithBinCount:(unsigned int)arg1 streamToken:(long long)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

