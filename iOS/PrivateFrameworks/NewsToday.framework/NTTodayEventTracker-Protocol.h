//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsToday/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol NTHeadlineAnalyticsElementProviding;

@protocol NTTodayEventTracker <NSObject>
- (void)userDidReadHeadlineWithAnalyticsElement:(id <NTHeadlineAnalyticsElementProviding>)arg1 atDate:(NSDate *)arg2;
- (void)userDidSeeHeadlinesWithAnalyticsElements:(NSArray *)arg1 atDate:(NSDate *)arg2;
@end

