//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OITSUIntegerKeyDictionary;

__attribute__((visibility("hidden")))
@interface ECTwoIntegerKeyCache : NSObject
{
    OITSUIntegerKeyDictionary *mCache;
    _Bool _assertForCollisions;
}

@property(nonatomic) _Bool assertForCollisions; // @synthesize assertForCollisions=_assertForCollisions;
- (void)setObject:(id)arg1 forKey1:(long long)arg2 key2:(long long)arg3;
- (id)objectForKey1:(long long)arg1 key2:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

