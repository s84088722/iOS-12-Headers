//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface TabOverviewInterpolatedValue : NSObject
{
    NSHashTable *_dependants;
    NSHashTable *_dependencies;
    double _instantaneousTargetValue;
    double _lastRenderedValue;
    double _value;
    double _targetValue;
    double _epsilon;
    double _decelerationFactor;
}

@property(nonatomic) double decelerationFactor; // @synthesize decelerationFactor=_decelerationFactor;
@property(nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) double targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (_Bool)isSteadyAtTargetValue:(double)arg1;
- (id)description;
- (void)addDependency:(id)arg1;
- (void)_recursivelyRemoveDependency:(id)arg1;
- (void)_removeDependency:(id)arg1;
- (void)_addDependant:(id)arg1;
- (void)_removeFromDependants;
- (void)resetLastRenderedValue;
- (void)resetToValue:(double)arg1;
- (_Bool)interpolateByTimeInterval:(double)arg1;
- (_Bool)_dependenciesAreInSteadyState;
@property(readonly, nonatomic, getter=isInSteadyState) _Bool inSteadyState;
- (id)initWithValue:(double)arg1 decelerationFactor:(double)arg2;

@end

