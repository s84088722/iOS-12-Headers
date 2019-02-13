//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalCoding, HKMedicalDate, HKMedicationOrderType, NSArray, NSString;

@interface HKMedicationOrder : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    NSArray *_medicationCodings;
    NSString *_prescriber;
    long long _numberOfFills;
    NSArray *_dosages;
    HKMedicalDate *_earliestDosageDate;
    HKMedicalDate *_writtenDate;
    HKMedicalDate *_endedDate;
    HKMedicalCoding *_statusCoding;
    NSArray *_reasonCodings;
    NSArray *_reasonEndedCodings;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 medicationCodings:(id)arg10 prescriber:(id)arg11 numberOfFills:(long long)arg12 dosages:(id)arg13 earliestDosageDate:(id)arg14 writtenDate:(id)arg15 endedDate:(id)arg16 statusCoding:(id)arg17 reasonCodings:(id)arg18 reasonEndedCodings:(id)arg19;
+ (id)defaultDisplayString;
+ (id)medicationOrderWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 medicationCodings:(id)arg9 prescriber:(id)arg10 numberOfFills:(long long)arg11 dosages:(id)arg12 earliestDosageDate:(id)arg13 writtenDate:(id)arg14 endedDate:(id)arg15 statusCoding:(id)arg16 reasonCodings:(id)arg17 reasonEndedCodings:(id)arg18;
+ (id)statusCodingPreferredSystems;
+ (id)reasonEndedCodingsPreferredSystems;
+ (id)reasonCodingsPreferredSystems;
+ (id)medicationCodingsPreferredSystems;
- (void).cxx_destruct;
@property(readonly, copy) HKMedicationOrderType *medicationOrderType;
- (id)_validateConfiguration;
- (void)_setReasonEndedCodings:(id)arg1;
@property(readonly, copy) NSArray *reasonEndedCodings;
- (void)_setReasonCodings:(id)arg1;
@property(readonly, copy) NSArray *reasonCodings;
- (void)_setStatusCoding:(id)arg1;
@property(readonly, copy) HKMedicalCoding *statusCoding;
- (void)_setEndedDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *endedDate;
- (void)_setWrittenDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *writtenDate;
- (void)_setEarliestDosageDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *earliestDosageDate;
- (void)_setDosages:(id)arg1;
@property(readonly, copy) NSArray *dosages;
- (void)_setNumberOfFills:(long long)arg1;
@property(readonly) long long numberOfFills;
- (void)_setPrescriber:(id)arg1;
@property(readonly, copy) NSString *prescriber;
- (void)_setMedicationCodings:(id)arg1;
@property(readonly, copy) NSArray *medicationCodings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)medicalRecordPreferredSystems;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)statusCodingTasks;
- (id)reasonEndedCodingsTasks;
- (id)reasonCodingsTasks;
- (id)medicationCodingsTasks;

@end

