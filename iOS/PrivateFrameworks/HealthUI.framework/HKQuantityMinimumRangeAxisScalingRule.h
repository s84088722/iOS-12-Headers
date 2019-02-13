//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKAbstractMinimumRangeScalingRule.h>

@class HKQuantity, HKUnit, NSDictionary;

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule
{
    HKQuantity *_defaultYAxisRangeQuantity;
    NSDictionary *_axisRangeQuantityOverrides;
    HKUnit *_unit;
}

+ (id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2;
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (void)_convertQuantities;
- (_Bool)isCompatibleWithQuantityType:(id)arg1;

@end

