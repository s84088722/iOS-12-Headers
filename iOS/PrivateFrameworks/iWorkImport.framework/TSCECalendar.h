//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar;

__attribute__((visibility("hidden")))
@interface TSCECalendar : NSObject
{
    NSCalendar *_calendar;
}

- (void).cxx_destruct;
- (void)extractComponentsFromDate:(id)arg1 year:(long long *)arg2 month:(long long *)arg3 day:(long long *)arg4;
- (void)extractComponentsFromDate:(id)arg1 year:(long long *)arg2 month:(long long *)arg3 day:(long long *)arg4 hour:(long long *)arg5 minute:(long long *)arg6 second:(long long *)arg7;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (id)initWithCalendarIdentifier:(id)arg1 timeZone:(id)arg2;
- (id)init;

@end
