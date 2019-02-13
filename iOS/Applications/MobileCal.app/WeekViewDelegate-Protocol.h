//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EKCalendarDate, EKEvent, WeekView;

@protocol WeekViewDelegate <NSObject>

@optional
- (WeekView *)weekViewForWeekAfter:(WeekView *)arg1;
- (WeekView *)weekViewForWeekBefore:(WeekView *)arg1;
- (void)weekViewAllDaySectionDidScroll:(WeekView *)arg1;
- (void)weekView:(WeekView *)arg1 receivedTapInAllDayAreaOnDate:(EKCalendarDate *)arg2;
- (void)emptySpaceClickedOnDate:(EKCalendarDate *)arg1;
- (void)emptySpaceClick;
- (void)weekView:(WeekView *)arg1 didSelectEvent:(EKEvent *)arg2;
- (void)weekViewDidEndDecelerating:(WeekView *)arg1;
- (void)weekViewDidEndDragging:(WeekView *)arg1 willDecelerate:(_Bool)arg2;
- (void)weekViewDidScroll:(WeekView *)arg1;
- (void)weekViewDidBeginDragging:(WeekView *)arg1;
- (void)weekViewDidLayout:(WeekView *)arg1;
@end

