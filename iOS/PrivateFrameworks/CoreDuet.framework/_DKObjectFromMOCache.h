//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _DKObjectFromMOCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cacheEntries;
    NSMutableDictionary *_cacheHits;
    NSMutableDictionary *_cacheMisses;
}

@property(retain) NSMutableDictionary *cacheMisses; // @synthesize cacheMisses=_cacheMisses;
@property(retain) NSMutableDictionary *cacheHits; // @synthesize cacheHits=_cacheHits;
@property(retain) NSMutableDictionary *cacheEntries; // @synthesize cacheEntries=_cacheEntries;
@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)deduplicateString:(id)arg1;
- (id)objectForKey:(id)arg1 type:(id)arg2 setIfMissingWithBlock:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (void)removeObjectForKey:(id)arg1 type:(id)arg2;
- (id)objectForKey:(id)arg1 type:(id)arg2;
- (void)reportMetrics;
- (id)initWithReporting;
- (id)init;

@end

