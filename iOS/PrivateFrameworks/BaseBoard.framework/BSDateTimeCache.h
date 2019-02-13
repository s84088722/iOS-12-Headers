//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BSDateTimeCache : NSObject
{
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
}

+ (id)sharedInstance;
- (id)description;
- (void)_resetAndConfigureAndPostNotification:(_Bool)arg1;
- (void)_resetAndConfigure;
- (void)_resetAndConfigureIfNecessary;
- (_Bool)isWithinNextWeek:(double)arg1;
- (_Bool)isWithinPrevWeek:(double)arg1 includeToday:(_Bool)arg2;
- (_Bool)isWithinPrevWeek:(double)arg1;
- (_Bool)isYesterday:(double)arg1;
- (_Bool)isTomorrow:(double)arg1;
- (_Bool)_isToday:(double)arg1;
- (_Bool)isToday:(double)arg1;
- (double)nextWeek;
- (double)prevWeek;
- (double)yesterday;
- (double)tomorrow;
- (double)today;
- (void)dealloc;
- (id)init;

@end

