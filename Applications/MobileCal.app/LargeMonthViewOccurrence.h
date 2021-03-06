//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEvent, NSMutableArray, NSString, UIColor, UIFont, UIImage;

@interface LargeMonthViewOccurrence : NSObject
{
    UIColor *_color;
    EKEvent *_occurrence;
    struct CGRect _frame;
    unsigned int _isAllDay:1;
    unsigned int _isBirthday:1;
    unsigned long long _cachedEndRange;
    unsigned int _selected:1;
    unsigned int _drawsBackground:1;
    int _invitationType;
    NSMutableArray *_subOccurrences;
    LargeMonthViewOccurrence *_parent;
    _Bool _drawsEmpty;
    _Bool _splitLeftEdge;
    _Bool _splitRightEdge;
    _Bool _isZoomedDay;
    _Bool _isProposedTime;
    double _firstWidth;
    UIFont *_font;
    UIImage *_dotImage;
    NSString *_occurrenceString;
    NSString *_timeString;
    NSString *_endTimeString;
    struct _NSRange _dayRange;
}

+ (id)_blendColor:(id)arg1 withColor:(id)arg2 alpha:(double)arg3;
+ (id)zoomedDayHourFont;
+ (id)hourFont;
+ (id)zoomedDayTextFont;
+ (id)textFont;
+ (void)clearCachedFonts;
@property(retain, nonatomic) NSString *endTimeString; // @synthesize endTimeString=_endTimeString;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) NSString *occurrenceString; // @synthesize occurrenceString=_occurrenceString;
@property(retain, nonatomic) UIImage *dotImage; // @synthesize dotImage=_dotImage;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool isProposedTime; // @synthesize isProposedTime=_isProposedTime;
@property(nonatomic) _Bool isZoomedDay; // @synthesize isZoomedDay=_isZoomedDay;
@property(nonatomic) struct _NSRange dayRange; // @synthesize dayRange=_dayRange;
@property(nonatomic) double firstWidth; // @synthesize firstWidth=_firstWidth;
@property(nonatomic) _Bool splitRightEdge; // @synthesize splitRightEdge=_splitRightEdge;
@property(nonatomic) _Bool splitLeftEdge; // @synthesize splitLeftEdge=_splitLeftEdge;
@property(nonatomic) _Bool drawsEmpty; // @synthesize drawsEmpty=_drawsEmpty;
- (void).cxx_destruct;
- (_Bool)isDeclined;
- (_Bool)needsReply;
- (_Bool)isTentative;
- (id)subOccurrences;
- (struct CGRect)isPointInView:(struct CGPoint)arg1;
- (struct CGRect)intersectingRect:(struct CGRect)arg1;
- (void)resetSegments;
- (void)addSegmentWithFrame:(struct CGRect)arg1 splitLeftEdge:(_Bool)arg2 splitRightEdge:(_Bool)arg3;
- (id)parent;
- (void)setParent:(id)arg1;
- (double)startTime;
- (unsigned long long)gapBetweenBlock:(id)arg1;
- (unsigned long long)endRange;
- (unsigned long long)startRange;
- (unsigned long long)length;
- (id)lengthForSorting;
- (void)setSplitLeftEdge:(_Bool)arg1 splitRightEdge:(_Bool)arg2;
- (void)updateView;
- (id)occurrence;
- (void)setOccurrence:(id)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setColor:(id)arg1;
- (_Bool)selected;
- (void)setSelected:(_Bool)arg1;
- (void)_updateTimeStrings;
- (void)_updateDotImage;
- (void)_updateOccurrenceBackgroundParameters;
- (void)_updateOccurrence;
- (void)_drawInFrame:(struct CGRect)arg1;
- (void)drawInFrame:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (_Bool)_drawsTimeString;
- (_Bool)_drawsBackground;
- (double)widthDrawingTime:(id)arg1 textRect:(struct CGRect)arg2 color:(id)arg3;
- (id)_timeString:(id)arg1;
- (struct UIEdgeInsets)_textInsets;
- (struct CGPoint)_pointForDotInFrame:(struct CGRect)arg1 withDot:(id)arg2;
- (struct UIEdgeInsets)_backgroundInsets;
- (_Bool)isSingleDay;
- (_Bool)isAllDay;
- (void)_drawBackgroundInFrame:(struct CGRect)arg1;
- (id)_backgroundImage;
- (id)description;
- (id)initWithOccurrence:(id)arg1 forDayRange:(struct _NSRange)arg2;
- (id)initWithOccurrence:(id)arg1 forDayRange:(struct _NSRange)arg2 isZoomedDay:(_Bool)arg3 isProposedTime:(_Bool)arg4;
- (id)_strikeColor;
- (id)_timeColor;
- (id)_titleColor;

@end

