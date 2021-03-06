//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKUIPreviewViewController.h>

@class CalendarModel, CompactDayViewController, DayNavigationViewController, EKCalendarDate, PaletteView, UIView;

@interface EKUIPreviewDayViewController : EKUIPreviewViewController
{
    CompactDayViewController *_dayViewController;
    DayNavigationViewController *_dayScrubberViewController;
    PaletteView *_paletteView;
    UIView *_lineView;
    EKCalendarDate *_displayedDate;
    CalendarModel *_model;
}

@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(retain, nonatomic) EKCalendarDate *displayedDate; // @synthesize displayedDate=_displayedDate;
- (void).cxx_destruct;
- (id)_paletteView;
- (id)_dayView;
- (id)_currentDateComponents;
- (id)_now;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 displayedDate:(id)arg2;

@end

