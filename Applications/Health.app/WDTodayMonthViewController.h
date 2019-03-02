//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import "WDCalendarScrollViewControllerDelegate-Protocol.h"

@class NSDate, NSDateComponents, NSString, UILabel, WDCalendarScrollViewController, WDProfile;
@protocol WDTodayMonthViewControllerDelegate;

@interface WDTodayMonthViewController : HKViewController <WDCalendarScrollViewControllerDelegate>
{
    NSDateComponents *_cachedDateComponents;
    _Bool _wantsShortTitleDate;
    id <WDTodayMonthViewControllerDelegate> _delegate;
    NSDate *_currentDate;
    WDProfile *_profile;
    long long _titleAlignment;
    WDCalendarScrollViewController *_calendarScrollViewController;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WDCalendarScrollViewController *calendarScrollViewController; // @synthesize calendarScrollViewController=_calendarScrollViewController;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) _Bool wantsShortTitleDate; // @synthesize wantsShortTitleDate=_wantsShortTitleDate;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(nonatomic) __weak id <WDTodayMonthViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapBackButton;
- (id)_titleStringForDate:(id)arg1;
- (void)_updateCurrentMonthBarButtonItemWithDate:(id)arg1;
- (void)_updateBackButton;
- (void)calendarScrollViewController:(id)arg1 didUpdateCenteredMonth:(id)arg2;
- (void)calendarScrollViewController:(id)arg1 didSelectDate:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setCurrentDate:(id)arg1;
- (void)setCurrentDate:(id)arg1 animateIfPossible:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)createTitleLabel;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)createCalendarScrollViewController;
- (id)initWithProfile:(id)arg1 date:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
