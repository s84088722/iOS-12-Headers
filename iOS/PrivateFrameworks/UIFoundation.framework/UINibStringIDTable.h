//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UINibStringIDTable : NSObject
{
    struct UIStringIDTableBucket **table;
    struct UIStringIDTableBucket *buckets;
    unsigned long long hashMask;
    unsigned long long count;
}

- (long long)count;
- (_Bool)lookupKey:(id)arg1 identifier:(long long *)arg2;
- (void)dealloc;
- (id)initWithKeysTransferingOwnership:(id *)arg1 count:(unsigned long long)arg2;

@end

