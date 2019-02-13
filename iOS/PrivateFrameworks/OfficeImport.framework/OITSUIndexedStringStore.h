//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUIndexedStringStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (unsigned long long)count;
- (id)stringForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

