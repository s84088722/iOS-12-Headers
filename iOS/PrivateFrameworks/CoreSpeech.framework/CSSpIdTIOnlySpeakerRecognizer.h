//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSSpIdSpeakerRecognizer-Protocol.h>

@class NSDictionary, NSString;

@interface CSSpIdTIOnlySpeakerRecognizer : NSObject <CSSpIdSpeakerRecognizer>
{
}

- (void)processMyriadDecision:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDictionary *lastSpeakerIdInfo;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)processAudioChunk:(id)arg1;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

