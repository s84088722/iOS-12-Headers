//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "HKCalendarWeekViewDelegate-Protocol.h"

@class HKCalendarDayCell, HKDateCache, NSDate, WDMonthWeekView;
@protocol WDTodayPaletteScrollViewDelegate;

@interface WDTodayPaletteScrollView : UIScrollView <HKCalendarWeekViewDelegate>
{
    HKDateCache *_dateCache;
    WDMonthWeekView *_scrollLeftWeekView;
    WDMonthWeekView *_currentWeekView;
    WDMonthWeekView *_scrollRightWeekView;
    HKCalendarDayCell *_selectedCell;
    _Bool _isRTL;
    NSDate *_currentDate;
}

+ (double)preferredHeight;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
- (void).cxx_destruct;
- (void)_centerOnCurrentWeekView;
- (void)_loadWeeks;
- (void)week:(id)arg1 cellSelected:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)reloadWeeksIfNeeded;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <WDTodayPaletteScrollViewDelegate> delegate;
- (void)layoutSubviews;
- (id)initWithCurrentDate:(id)arg1 dateCache:(id)arg2;

@end

