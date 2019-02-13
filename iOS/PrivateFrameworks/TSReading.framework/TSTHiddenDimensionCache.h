//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSIndexSet, NSMutableIndexSet;

@interface TSTHiddenDimensionCache : NSObject <NSCopying>
{
    unsigned long long mCount;
    NSMutableIndexSet *mCachedVisible;
    NSMutableIndexSet *mCachedUserVisible;
    NSMutableIndexSet *mInvalidRanges;
    unsigned long long mMarkIndex;
}

@property(readonly, nonatomic) NSIndexSet *visibleIndices; // @synthesize visibleIndices=mCachedVisible;
- (id)description;
- (void)insertRange:(struct _NSRange)arg1;
- (void)deleteRange:(struct _NSRange)arg1;
- (void)moveRangeFrom:(struct _NSRange)arg1 toIndex:(unsigned long long)arg2;
- (void)setAllInvalidValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)setAllValuesToZero;
- (unsigned short)numberOfVisibleIndicesToMarkIndexFrom:(unsigned long long)arg1;
- (void)setMarkIndex:(unsigned long long)arg1;
- (unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)findNextVisibleIndex:(unsigned long long)arg1;
- (unsigned long long)findPreviousVisibleIndex:(unsigned long long)arg1;
- (_Bool)anyUserHiddenIndicesInRange:(struct _NSRange)arg1;
- (_Bool)anyHiddenIndicesInRange:(struct _NSRange)arg1;
- (unsigned long long)numberUserHiddenIndicesInRange:(struct _NSRange)arg1;
- (unsigned long long)numberHiddenIndicesInRange:(struct _NSRange)arg1;
- (_Bool)isIndexUserHidden:(unsigned long long)arg1;
- (_Bool)isIndexHidden:(unsigned long long)arg1;
- (void)invalidate:(struct _NSRange)arg1;
- (void)setCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithUserHiddenInformation:(_Bool)arg1;

@end

