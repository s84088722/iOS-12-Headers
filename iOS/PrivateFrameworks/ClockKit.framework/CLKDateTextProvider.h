//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKTextProvider.h>

@class NSArray, NSDate, NSDateFormatter, NSString, NSTimeZone;

@interface CLKDateTextProvider : CLKTextProvider
{
    NSDateFormatter *_dateFormatter;
    NSArray *_templateSeries;
    _Bool _shortUnits;
    _Bool _allowsNarrowUnits;
    _Bool _narrowStandaloneWeekdayDay;
    NSDate *_date;
    unsigned long long _calendarUnits;
    NSTimeZone *_timeZone;
    NSString *_alternateCalendarLocaleID;
    long long _formattingContext;
}

+ (_Bool)supportsSecureCoding;
+ (id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;
+ (id)textProviderWithDate:(id)arg1 units:(unsigned long long)arg2;
@property(nonatomic) long long formattingContext; // @synthesize formattingContext=_formattingContext;
@property(copy, nonatomic) NSString *alternateCalendarLocaleID; // @synthesize alternateCalendarLocaleID=_alternateCalendarLocaleID;
@property(nonatomic) _Bool narrowStandaloneWeekdayDay; // @synthesize narrowStandaloneWeekdayDay=_narrowStandaloneWeekdayDay;
@property(nonatomic) _Bool allowsNarrowUnits; // @synthesize allowsNarrowUnits=_allowsNarrowUnits;
@property(nonatomic) _Bool shortUnits; // @synthesize shortUnits=_shortUnits;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) unsigned long long calendarUnits; // @synthesize calendarUnits=_calendarUnits;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1;
- (id)_completeDateTemplateSeries;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)_validate;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;

@end

