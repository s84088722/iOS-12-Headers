//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EKCalendarDate, UILabel;

@interface MonthTitleView : UIView
{
    UILabel *_titleLabel;
    EKCalendarDate *_calendarDate;
}

@property(retain, nonatomic) EKCalendarDate *calendarDate; // @synthesize calendarDate=_calendarDate;
- (void).cxx_destruct;
- (void)animateVisible:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)backgroundImage;
- (void)setFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

