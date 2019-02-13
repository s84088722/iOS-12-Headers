//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload
{
    NSNumber *_isSimplePasscodeAllowed;
    NSNumber *_isPasscodeRequired;
    NSNumber *_isAlphanumericPasscodeRequired;
    NSNumber *_isManualFetchingWhenRoaming;
    NSNumber *_minLength;
    NSNumber *_maxFailedAttempts;
    NSNumber *_maxGracePeriodMinutes;
    NSNumber *_maxInactivityMinutes;
    NSNumber *_maxPasscodeAgeDays;
    NSNumber *_passcodeHistoryCount;
    NSNumber *_minComplexCharacters;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, retain, nonatomic) NSNumber *minComplexCharacters; // @synthesize minComplexCharacters=_minComplexCharacters;
@property(readonly, retain, nonatomic) NSNumber *maxPasscodeAgeDays; // @synthesize maxPasscodeAgeDays=_maxPasscodeAgeDays;
@property(readonly, retain, nonatomic) NSNumber *passcodeHistoryCount; // @synthesize passcodeHistoryCount=_passcodeHistoryCount;
@property(readonly, retain, nonatomic) NSNumber *maxInactivityMinutes; // @synthesize maxInactivityMinutes=_maxInactivityMinutes;
@property(readonly, retain, nonatomic) NSNumber *maxGracePeriodMinutes; // @synthesize maxGracePeriodMinutes=_maxGracePeriodMinutes;
@property(readonly, retain, nonatomic) NSNumber *maxFailedAttempts; // @synthesize maxFailedAttempts=_maxFailedAttempts;
@property(readonly, retain, nonatomic) NSNumber *minLength; // @synthesize minLength=_minLength;
@property(readonly, retain, nonatomic) NSNumber *isManualFetchingWhenRoaming; // @synthesize isManualFetchingWhenRoaming=_isManualFetchingWhenRoaming;
@property(readonly, retain, nonatomic) NSNumber *isAlphanumericPasscodeRequired; // @synthesize isAlphanumericPasscodeRequired=_isAlphanumericPasscodeRequired;
@property(readonly, retain, nonatomic) NSNumber *isPasscodeRequired; // @synthesize isPasscodeRequired=_isPasscodeRequired;
@property(readonly, retain, nonatomic) NSNumber *isSimplePasscodeAllowed; // @synthesize isSimplePasscodeAllowed=_isSimplePasscodeAllowed;
- (void).cxx_destruct;
- (id)restrictions;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)title;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

