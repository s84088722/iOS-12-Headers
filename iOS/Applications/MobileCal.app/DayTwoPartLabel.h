//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, UIFont, UILabel;

@interface DayTwoPartLabel : UIView
{
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    UILabel *_entireString;
    UILabel *_overlayLabel;
    NSDate *_date;
    _Bool _useSeparateFormat;
    _Bool _dayNameOnLeft;
    _Bool _showOverlayDate;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool showOverlayDate; // @synthesize showOverlayDate=_showOverlayDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) double baselineOffsetFromBoundsTop;
- (void)_copyLabelParametersFrom:(id)arg1 to:(id)arg2;
- (id)createCopy;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIFont *font;
- (void)_updateOverlayLabel;
- (void)setDateYearString:(id)arg1;
- (id)dateYearString;
- (void)setDayOfWeekString:(id)arg1;
- (id)dayOfWeekString;
- (void)_resetUI;
- (void)localeChanged;
- (void)_createSubviews;
- (id)init;

@end

