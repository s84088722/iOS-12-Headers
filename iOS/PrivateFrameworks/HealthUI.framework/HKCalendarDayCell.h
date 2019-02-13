//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class HKDateCache, NSDate, UIColor, UIFont;

@interface HKCalendarDayCell : CALayer
{
    long long _dayOfMonth;
    _Bool _selected;
    _Bool _representsToday;
    HKDateCache *_dateCache;
    CALayer *_circle;
    CALayer *_dayLabel;
    UIColor *_textColor;
    UIFont *_font;
    UIFont *_boldFont;
    double _dayDiameter;
    NSDate *_date;
}

+ (void)clearImageCache;
@property(readonly, nonatomic) _Bool representsToday; // @synthesize representsToday=_representsToday;
@property(readonly, nonatomic) long long dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) double dayDiameter; // @synthesize dayDiameter=_dayDiameter;
@property(retain, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) CALayer *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(readonly, nonatomic) CALayer *circle; // @synthesize circle=_circle;
@property(readonly, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
- (void).cxx_destruct;
- (id)debugDescription;
- (struct CGSize)_roundedRectSizeForDayNumberString:(id)arg1;
- (struct CGSize)circleSize;
- (double)_roundedRectCornerRadius;
- (void)layoutOnce;
- (void)updateDateTextForDayNumber:(long long)arg1 textColor:(id)arg2;
- (void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2;
- (id)_reusedImageForDateIndex:(long long)arg1 color:(id)arg2;
- (id)_integerNumberFormatter;
- (id)init;
- (id)initWithDateCache:(id)arg1;

@end

