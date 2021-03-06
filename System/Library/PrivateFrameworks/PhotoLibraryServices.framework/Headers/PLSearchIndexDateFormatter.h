//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSString, PLDateRangeFormatter;
@protocol OS_dispatch_queue;

@interface PLSearchIndexDateFormatter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_dateFormatter;
    PLDateRangeFormatter *_dateRangeFormatter;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_displayFormat;
    NSString *_parseFormat;
    NSArray *_monthSymbols;
    _Bool _localeDidChange;
}

- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2;
- (id)newLocalizedStringFromDate:(id)arg1;
- (id)_inqNewLocalizedStringFromDate:(id)arg1;
- (id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(_Bool)arg2;
- (id)localizedMonthStringsFromDate:(id)arg1;
- (id)localizedSeasonNameFromDate:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_inqUpdateDateFormat:(id)arg1;
- (void)_inqSetupDateFormatter;
- (id)_arrangedMonthSymbols;
- (void)dealloc;
- (id)init;

@end

