//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _LSConcurrentQueuesList : NSObject
{
    NSMutableArray *_identifiers;
    NSMutableArray *_queues;
}

- (void)removeIdentifier:(id)arg1 fromIndex:(unsigned long long)arg2;
- (void)addIdentifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)getQueueAndIndexForIdentifier:(id)arg1 outIndex:(unsigned long long *)arg2;
- (id)initWithWidth:(long long)arg1;

@end

