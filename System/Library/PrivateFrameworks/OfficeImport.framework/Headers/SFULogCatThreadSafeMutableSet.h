//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFULogCatThreadSafeMutableSet : NSObject
{
    NSMutableSet *mObjects;
}

- (id)description;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)immutableSet;
- (id)allObjects;
- (unsigned long long)count;
- (_Bool)containsObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithArray:(id)arg1;

@end

