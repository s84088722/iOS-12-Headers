//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKUnit.h>

@class _HKDimension, _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKCompoundUnit : HKUnit
{
    _HKFactorization *_baseUnits;
    _HKDimension *_dimension;
    struct os_unfair_lock_s _dimensionLock;
}

+ (_Bool)supportsSecureCoding;
+ (id)unitWithBaseUnits:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_computeBaseUnitReductionAndProportionalSize:(out double *)arg1 withCycleSet:(id)arg2;
- (id)_baseUnits;
- (id)dimension;
- (id)unitString;
- (id)_initWithBaseUnits:(id)arg1;

@end

