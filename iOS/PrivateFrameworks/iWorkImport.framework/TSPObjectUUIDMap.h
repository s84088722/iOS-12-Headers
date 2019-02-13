//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, TSPObjectContext, TSPPersistedObjectUUIDMap;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPObjectUUIDMap : NSObject
{
    // Error parsing type: Ai, name: _assertOnReadCount
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_inMemoryUUIDDictionary;
    NSMutableSet *_UUIDsWithSuppressedAssertions;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
}

- (void).cxx_destruct;
- (void)endAssertOnRead;
- (void)beginAssertOnRead;
- (void)object:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3;
- (id)objectWithUUID:(id)arg1 onlyIfLoaded:(_Bool)arg2 validateNewObjects:(_Bool)arg3 identifier:(long long *)arg4;
- (_Bool)hasObjectUUID:(id)arg1;
- (void)objectWillBeRemovedFromDocument:(id)arg1;
- (void)objectWasAddedToDocument:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)shouldSuppressAssertionForObjectUUID:(id)arg1;
- (_Bool)objectUUIDIsInDocument:(id)arg1;
- (void)setPersistedUUIDMap:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

