//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeShuffleModeCommand : MPRemoteCommand
{
    NSArray *_supportedShuffleTypes;
    long long _currentShuffleType;
}

@property(nonatomic) long long currentShuffleType; // @synthesize currentShuffleType=_currentShuffleType;
- (void).cxx_destruct;
- (id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(_Bool)arg2;
- (id)newCommandEventWithType:(long long)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setSupportedShuffleTypes:(id)arg1;

@end

