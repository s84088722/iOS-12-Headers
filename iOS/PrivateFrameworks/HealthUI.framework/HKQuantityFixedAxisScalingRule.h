//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKAbstractFixedAxisScalingRule.h>

@class HKUnit, HKValueRange, NSDictionary;

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule
{
    HKValueRange *_defaultQuantityBounds;
    NSDictionary *_quantityBoundsOverrides;
    HKUnit *_unit;
}

+ (id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2;
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (id)_numberRangeFromQuantityRangeForUnit:(id)arg1 quantityRange:(id)arg2;
- (void)_convertQuantityRanges;
- (_Bool)isCompatibleWithQuantityType:(id)arg1;

@end

