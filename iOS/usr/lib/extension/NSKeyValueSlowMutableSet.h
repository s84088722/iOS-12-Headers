//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSKeyValueMutableSet.h>

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet
{
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    _Bool _treatNilValuesLikeEmptySets;
    char _padding[3];
}

- (void)unionSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeAllObjects;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)_createMutableSetValueWithSelector:(SEL)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)_setValueWithSelector:(SEL)arg1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end

