//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFAudio/AVAudioUnit.h>

#import <AVFAudio/AVAudioMixing-Protocol.h>

@class NSString;

@interface AVAudioUnitGenerator : AVAudioUnit <AVAudioMixing>
{
}

@property(nonatomic) _Bool bypass;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) float volume;

@end

