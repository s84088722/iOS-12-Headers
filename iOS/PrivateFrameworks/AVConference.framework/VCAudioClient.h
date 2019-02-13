//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioDevice, VCAudioIO;

__attribute__((visibility("hidden")))
@interface VCAudioClient : NSObject
{
    int _processId;
    VCAudioIO *_audioIO;
    _Bool _muted;
    unsigned int _state;
    struct _opaque_pthread_mutex_t _stateMutex;
    double _lastAudioSessionStart;
    _Bool _isOnHold;
    struct VCAudioClientSettings _selectedSettings;
    struct VCAudioClientSettings _requestedSettings;
}

@property(retain, nonatomic) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) _Bool isMuted; // @synthesize isMuted=_muted;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
@property(retain, nonatomic) AVAudioDevice *outputDevice;
@property(retain, nonatomic) AVAudioDevice *inputDevice;
- (_Bool)setCurrentAudioDevice:(id)arg1 type:(_Bool)arg2;
- (id)getCurrentAudioDeviceWithType:(_Bool)arg1;
- (void)stopAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)stopAudioSessionWithError:(id *)arg1;
- (_Bool)startAudioSessionWithError:(id *)arg1;
- (_Bool)stopWithError:(id *)arg1;
- (_Bool)startWithError:(id *)arg1;
- (void)setAudioSessionProperties:(id)arg1;
- (_Bool)resetAudioSessionOutputPortOverride:(id *)arg1;
- (_Bool)unmuteWithError:(id *)arg1;
- (_Bool)muteWithError:(id *)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)initWithProcessId:(int)arg1;

@end

