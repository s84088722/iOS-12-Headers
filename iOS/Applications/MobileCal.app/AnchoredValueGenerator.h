//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AnchoredValuePair, NSMutableArray;

@interface AnchoredValueGenerator : NSObject
{
    NSMutableArray *_pairs;
    _Bool _needsSorting;
    AnchoredValuePair *_cachedLastResult;
    int _calculationType;
    int _roundingType;
}

@property(nonatomic) int roundingType; // @synthesize roundingType=_roundingType;
@property(nonatomic) int calculationType; // @synthesize calculationType=_calculationType;
- (void).cxx_destruct;
- (void)_sort;
- (double)_roundValue:(double)arg1;
- (double)_nearestValueForSize:(double)arg1;
- (double)_interpolatedValueForSize:(double)arg1;
- (void)_findBoundsForSize:(double)arg1 outLowerBound:(id *)arg2 outUpperBound:(id *)arg3 outExactMatchValue:(double *)arg4 outFoundExactMatch:(_Bool *)arg5;
- (double)valueForWindowSizeHeight:(unsigned long long)arg1;
- (double)valueForWindowSizeWidth:(unsigned long long)arg1;
- (double)valueForSize:(double)arg1;
- (void)addAnchoredValue:(double)arg1 forWindowSizeHeight:(unsigned long long)arg2 layoutShift:(_Bool)arg3;
- (void)addAnchoredValue:(double)arg1 forWindowSizeWidth:(unsigned long long)arg2 layoutShift:(_Bool)arg3;
- (void)addAnchoredValue:(double)arg1 forSize:(double)arg2 layoutShift:(_Bool)arg3;
- (void)addAnchoredValue:(double)arg1 forWindowSizeHeight:(unsigned long long)arg2;
- (void)addAnchoredValue:(double)arg1 forWindowSizeWidth:(unsigned long long)arg2;
- (void)addAnchoredValue:(double)arg1 forSize:(double)arg2;
- (id)description;
- (id)init;

@end

