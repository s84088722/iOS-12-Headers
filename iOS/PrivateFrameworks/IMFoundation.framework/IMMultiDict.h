//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface IMMultiDict : NSObject
{
    NSMutableDictionary *_dictionary;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) NSArray *allKeys;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countForKey:(id)arg1;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectsForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (id)dequeueObjectForKey:(id)arg1;
- (id)headObjectForKey:(id)arg1;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (id)popObjectForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)init;
- (void)dealloc;

@end

