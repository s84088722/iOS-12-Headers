//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DayViewController.h"

@interface CompactDayViewController : DayViewController
{
}

- (_Bool)eventViewControllerShouldHideInlineEditButton;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updatePalette:(id)arg1;
- (int)supportedToggleMode;
- (long long)presentationStyleOverrideForChildViewControllers;
- (void)showEditViewController:(id)arg1;
- (id)showDetailViewControllerForEvent:(id)arg1 context:(struct NSDictionary *)arg2 animated:(_Bool)arg3;
- (void)dayViewController:(id)arg1 didStartDeceleratingTargettingDate:(id)arg2;
- (_Bool)showWeekdayLabel;
- (void)_receivedSelectedDateChangeNotification:(id)arg1;
- (void)_updateBackButtonOnBackViewControllerToDate:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithDay:(id)arg1 model:(id)arg2;
- (id)cellFactory;

@end

