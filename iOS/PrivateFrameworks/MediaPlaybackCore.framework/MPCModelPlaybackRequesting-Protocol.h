//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPSectionedCollection, NSArray;

@protocol MPCModelPlaybackRequesting <NSObject>

@optional
@property(readonly, nonatomic) MPSectionedCollection *playbackSourceModelObjects;
- (void)setAllowsPlaybackResponseBatching:(_Bool)arg1;
- (void)setPlaybackPrioritizedIndexPaths:(NSArray *)arg1;
- (void)setShouldExcludeNonShuffleItems:(_Bool)arg1;
@end

