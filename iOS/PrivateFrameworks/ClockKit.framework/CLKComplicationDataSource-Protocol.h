//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/NSObject-Protocol.h>

@class CLKComplication, NSDate;

@protocol CLKComplicationDataSource <NSObject>
- (void)getCurrentTimelineEntryForComplication:(CLKComplication *)arg1 withHandler:(void (^)(CLKComplicationTimelineEntry *))arg2;
- (void)getSupportedTimeTravelDirectionsForComplication:(CLKComplication *)arg1 withHandler:(void (^)(unsigned long long))arg2;

@optional
- (void)getPlaceholderTemplateForComplication:(CLKComplication *)arg1 withHandler:(void (^)(CLKComplicationTemplate *))arg2;
- (void)getLocalizableSampleTemplateForComplication:(CLKComplication *)arg1 withHandler:(void (^)(CLKComplicationTemplate *))arg2;
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;
- (void)getNextRequestedUpdateDateWithHandler:(void (^)(NSDate *))arg1;
- (void)getTimelineEntriesForComplication:(CLKComplication *)arg1 afterDate:(NSDate *)arg2 limit:(unsigned long long)arg3 withHandler:(void (^)(NSArray *))arg4;
- (void)getTimelineEntriesForComplication:(CLKComplication *)arg1 beforeDate:(NSDate *)arg2 limit:(unsigned long long)arg3 withHandler:(void (^)(NSArray *))arg4;
- (void)getTimelineAnimationBehaviorForComplication:(CLKComplication *)arg1 withHandler:(void (^)(unsigned long long))arg2;
- (void)getPrivacyBehaviorForComplication:(CLKComplication *)arg1 withHandler:(void (^)(unsigned long long))arg2;
- (void)getTimelineEndDateForComplication:(CLKComplication *)arg1 withHandler:(void (^)(NSDate *))arg2;
- (void)getTimelineStartDateForComplication:(CLKComplication *)arg1 withHandler:(void (^)(NSDate *))arg2;
@end

