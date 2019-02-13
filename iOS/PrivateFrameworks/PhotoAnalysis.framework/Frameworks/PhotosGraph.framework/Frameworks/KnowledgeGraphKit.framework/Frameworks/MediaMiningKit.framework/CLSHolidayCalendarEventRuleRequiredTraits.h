//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSHolidayCalendarEventRuleTraits.h>

@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits
{
    _Bool _mustContainMePerson;
    _Bool _allowSceneClassificationBasedEvaluation;
    unsigned long long _type;
    unsigned long long _category;
    struct _NSRange _peopleRange;
}

+ (id)_peopleTraitDebugStringForTrait:(unsigned long long)arg1;
+ (id)_locationTraitDebugStringForTrait:(unsigned long long)arg1;
@property(nonatomic) _Bool allowSceneClassificationBasedEvaluation; // @synthesize allowSceneClassificationBasedEvaluation=_allowSceneClassificationBasedEvaluation;
@property(nonatomic) struct _NSRange peopleRange; // @synthesize peopleRange=_peopleRange;
@property(nonatomic) _Bool mustContainMePerson; // @synthesize mustContainMePerson=_mustContainMePerson;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
@property(readonly, nonatomic) _Bool isCelebration;
- (_Bool)peopleCountRangeIsRequired;
- (_Bool)evaluateWithTraits:(id)arg1;
- (id)initWithDescription:(id)arg1;

@end

