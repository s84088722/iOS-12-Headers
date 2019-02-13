//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFAudio/AVAudioUnit.h>

@class NSURL;

@interface AVAudioUnitDSPGraph : AVAudioUnit
{
}

@property(readonly, nonatomic) NSURL *auProcessingStripURL;
@property(readonly, nonatomic) NSURL *dspGraphURL;
- (_Bool)loadAudioUnitProcessingStripAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadDSPGraphAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadAudioDSPManager;
- (id)init;

@end

