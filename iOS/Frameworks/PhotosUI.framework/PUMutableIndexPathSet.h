//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUIndexPathSet.h>

@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet
{
    NSMutableSet *_indexPaths;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeAllIndexPaths;
- (void)setIndexPathSet:(id)arg1;
- (_Bool)containsIndexPath:(id)arg1;
- (void)removeIndexPath:(id)arg1;
- (void)addIndexPath:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)enumerateIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)count;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

