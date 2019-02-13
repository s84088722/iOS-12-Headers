//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRSRankingSpanCalculator : NSObject
{
    float _unordered;
    float _ordered;
    float _firstTermPosition;
    float _normCount;
    float _pairDist;
}

+ (void)minimumAnyOrderSpanWithStartingIndex:(long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentAnyOrderSpan:(long long)arg5 minimumSpan:(long long *)arg6 minimumDistancePair:(long long *)arg7 currentMinimumIndex:(long long)arg8 currentMaximumIndex:(long long)arg9;
+ (_Bool)doesOrderedSpanExistWithStartingIndex:(unsigned long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentOrderedSpan:(long long *)arg5;
@property(nonatomic) float pairDist; // @synthesize pairDist=_pairDist;
@property(nonatomic) float normCount; // @synthesize normCount=_normCount;
@property(nonatomic) float firstTermPosition; // @synthesize firstTermPosition=_firstTermPosition;
@property(nonatomic) float ordered; // @synthesize ordered=_ordered;
@property(nonatomic) float unordered; // @synthesize unordered=_unordered;
- (id)description;
- (void)updateWithTermPositions:(id)arg1 queryTermCount:(unsigned long long)arg2;
- (void)reset;

@end

