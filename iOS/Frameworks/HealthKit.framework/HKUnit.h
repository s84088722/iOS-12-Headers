//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString, _HKDimension, _HKFactorization;

@interface HKUnit : NSObject <NSSecureCoding, NSCopying>
{
    _HKFactorization *_dimensionReduction;
    _HKFactorization *_baseUnitReduction;
    struct os_unfair_lock_s _dimensionReductionLock;
    double _reducedProportionalSize;
    double _scaleOffset;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isValidUnitString:(id)arg1;
+ (id)_nullUnit;
+ (long long)energyFormatterUnitFromUnit:(id)arg1;
+ (id)unitFromEnergyFormatterUnit:(long long)arg1;
+ (long long)lengthFormatterUnitFromUnit:(id)arg1;
+ (id)unitFromLengthFormatterUnit:(long long)arg1;
+ (long long)massFormatterUnitFromUnit:(id)arg1;
+ (id)unitFromMassFormatterUnit:(long long)arg1;
+ (id)unitFromString:(id)arg1;
+ (id)_foundationBaseUnits;
+ (id)_countPerMinuteUnit;
+ (id)_countPerSecondUnit;
+ (id)equivalentsUnitWithMolarMass:(double)arg1 valence:(long long)arg2;
+ (id)equivalentsUnit;
+ (id)internationalUnit;
+ (id)_internationalUnitWithVolumeEquivalent;
+ (id)_internationalUnitWithVolumeEquivalent:(double)arg1;
+ (id)_internationalUnitWithMetricPrefix:(long long)arg1 volumeEquivalent:(double)arg2;
+ (id)_internationalUnitWithMassEquivalent;
+ (id)_internationalUnitWithMassEquivalent:(double)arg1;
+ (id)_internationalUnitWithMetricPrefix:(long long)arg1 massEquivalent:(double)arg2;
+ (id)titerUnit;
+ (id)perMilleUnit;
+ (id)percentUnit;
+ (id)countUnit;
+ (id)decibelHearingLevelUnit;
+ (id)hertzUnit;
+ (id)hertzUnitWithMetricPrefix:(long long)arg1;
+ (id)siemenUnit;
+ (id)siemenUnitWithMetricPrefix:(long long)arg1;
+ (id)degreeFahrenheitUnit;
+ (id)degreeCelsiusUnit;
+ (id)kelvinUnit;
+ (id)largeCalorieUnit;
+ (id)smallCalorieUnit;
+ (id)kilocalorieUnit;
+ (id)calorieUnit;
+ (id)kilojoulesUnit;
+ (id)jouleUnit;
+ (id)jouleUnitWithMetricPrefix:(long long)arg1;
+ (id)dayUnit;
+ (id)hourUnit;
+ (id)minuteUnit;
+ (id)milliseconds;
+ (id)secondUnit;
+ (id)secondUnitWithMetricPrefix:(long long)arg1;
+ (id)decibelSPLUnit;
+ (id)atmosphereUnit;
+ (id)centimeterOfWaterUnit;
+ (id)millimeterOfMercuryUnit;
+ (id)pascalUnit;
+ (id)pascalUnitWithMetricPrefix:(long long)arg1;
+ (id)cupImperialUnit;
+ (id)cupUSUnit;
+ (id)pintImperialUnit;
+ (id)pintUSUnit;
+ (id)fluidOunceImperialUnit;
+ (id)fluidOunceUSUnit;
+ (id)literUnit;
+ (id)literUnitWithMetricPrefix:(long long)arg1;
+ (id)inchUnit;
+ (id)yardUnit;
+ (id)footUnit;
+ (id)mileUnit;
+ (id)meterUnit;
+ (id)meterUnitWithMetricPrefix:(long long)arg1;
+ (id)moles;
+ (id)moleUnitWithMolarMass:(double)arg1;
+ (id)moleUnitWithMetricPrefix:(long long)arg1 molarMass:(double)arg2;
+ (id)stoneUnit;
+ (id)ounceUnit;
+ (id)poundUnit;
+ (id)gramUnit;
+ (id)gramUnitWithMetricPrefix:(long long)arg1;
+ (id)_prefixStringForMetricPrefix:(long long)arg1;
+ (id)_foodEnergyUnitForLocale:(id)arg1;
+ (id)_temperatureUnitForLocale:(id)arg1;
+ (id)_personMassUnitForLocale:(id)arg1;
+ (id)_distanceUnitForLocale:(id)arg1;
+ (id)_heightUnitForLocale:(id)arg1;
@property(readonly, nonatomic) double scaleOffset; // @synthesize scaleOffset=_scaleOffset;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)_convertFromBaseUnit:(double)arg1;
- (double)_convertToBaseUnit:(double)arg1;
- (double)_reducedProportionalSize;
- (id)_baseUnitReduction;
- (id)_baseUnitReductionAndProportionalSize:(out double *)arg1 withCycleSet:(id)arg2;
- (void)_reduceIfNecessaryWithCycleSet:(id)arg1;
- (id)_computeBaseUnitReductionAndProportionalSize:(out double *)arg1 withCycleSet:(id)arg2;
@property(readonly, nonatomic) _HKFactorization *_baseUnits;
- (id)_dimensionReduction;
- (_Bool)_isCompatibleWithDimension:(id)arg1;
- (_Bool)_isCompatibleWithUnit:(id)arg1;
- (double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2;
- (_Bool)_isMetricDistance;
- (_Bool)isNull;
- (id)_foundationUnit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _HKDimension *dimension;
@property(readonly) NSString *unitString;
- (id)reciprocalUnit;
- (id)unitRaisedToPower:(long long)arg1;
- (id)unitDividedByUnit:(id)arg1;
- (id)unitMultipliedByUnit:(id)arg1;
- (id)_init;
- (id)init;

@end
