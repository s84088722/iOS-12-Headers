//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SearchBarSearchResults : NSObject
{
    NSArray *_cachedFavorites;
    NSArray *_resultSets;
}

@property(copy, nonatomic) NSArray *resultSets; // @synthesize resultSets=_resultSets;
- (void).cxx_destruct;
- (id)copy;
- (void)addResultSet:(id)arg1 withMaxCount:(unsigned long long)arg2;
- (id)filteredResultsWithBackfill:(long long)arg1;
- (id)init;

@end
