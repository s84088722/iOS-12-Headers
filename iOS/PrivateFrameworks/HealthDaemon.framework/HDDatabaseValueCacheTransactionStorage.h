//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HDDatabaseValueCacheTransactionStorage : NSObject
{
    _Bool _didRemoveAllObjects;
    NSMutableDictionary *_cache;
    long long _cacheScope;
}

@property(nonatomic) _Bool didRemoveAllObjects; // @synthesize didRemoveAllObjects=_didRemoveAllObjects;
@property(nonatomic) long long cacheScope; // @synthesize cacheScope=_cacheScope;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)init;

@end

