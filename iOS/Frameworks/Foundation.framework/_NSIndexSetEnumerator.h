//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface _NSIndexSetEnumerator : NSEnumerator
{
    NSIndexSet *_indexSet;
    unsigned long long _index;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithIndexSet:(id)arg1;

@end

