//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVMIDIPlayer : NSObject
{
    void *_impl;
}

@property(nonatomic) double currentPosition;
@property(readonly, nonatomic) double duration;
@property(nonatomic) float rate;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stop;
- (void)play:(CDUnknownBlockType)arg1;
- (void)prepareToPlay;
- (double)beatsForHostTime:(unsigned long long)arg1;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)finalize;
- (void)destroyBase;
- (id)initBase;
- (struct MIDIPlayerImpl *)impl;

@end

