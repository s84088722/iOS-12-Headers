//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MonthViewController.h"

@interface CompactMonthViewController : MonthViewController
{
    _Bool _applicationResuming;
    _Bool _needsPaletteLayout;
}

+ (double)topOfMonthNameLabelToGrayLineDistance;
+ (id)monthNameFont;
+ (double)scrubbingMinimumPressDuration;
- (void)contentSizeCategoryChanged;
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;
- (void)setShouldRespondToApplicationDidBecomeActiveStateChange:(_Bool)arg1;
- (void)_updateDayHeaderFrames;
- (double)palleteViewXOffset;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updatePalette:(id)arg1;
- (void)weekNumbersPrefChanged;

@end

