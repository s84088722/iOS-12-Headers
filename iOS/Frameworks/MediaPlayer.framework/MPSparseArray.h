//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface MPSparseArray : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _maximumIndex;
    NSMutableArray *_nodes;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_removeObjectAtIndex:(unsigned long long)arg1 shouldSlide:(_Bool)arg2;
- (void)_enumerateNodesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1 returningRemovedObject:(id *)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
@property(readonly, nonatomic) unsigned long long maximumIndex;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 returningExistingObject:(id *)arg3;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long firstEmptyIndex;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

