//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

@class NSMutableDictionary, PPNamedEntityStore;

@interface REPortraitPredictor : REPredictor
{
    PPNamedEntityStore *_namedEntityStore;
    NSMutableDictionary *_namedEntityScores;
}

+ (double)updateInterval;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (float)userAffinityToContent:(id)arg1;
- (void)update;
- (void)_loadStoreIfNeeded;
- (void)dealloc;
- (id)init;

@end

