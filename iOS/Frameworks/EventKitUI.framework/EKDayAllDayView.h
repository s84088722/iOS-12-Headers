//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <EventKitUI/EKDayOccurrenceViewDelegate-Protocol.h>
#import <EventKitUI/EKUITintColorUpdateDelegate-Protocol.h>

@class EKDayOccurrenceView, EKEvent, EKUIVisualEffectView, NSMutableArray, UIColor, UILabel, UIScrollView;
@protocol EKDayAllDayViewDelegate;

__attribute__((visibility("hidden")))
@interface EKDayAllDayView : UIView <EKDayOccurrenceViewDelegate, EKUITintColorUpdateDelegate>
{
    long long _orientation;
    NSMutableArray *_occurrenceViews;
    UILabel *_allDay;
    _Bool _allDayLabelHighlighted;
    UIScrollView *_scroller;
    double _occurrenceInset;
    _Bool _allowSelection;
    _Bool _showSelection;
    EKEvent *_selectedEvent;
    _Bool _usesSmallText;
    _Bool _showBirthdayCount;
    long long _birthdayCount;
    UIView *_dividerLineViewTop;
    UIView *_dividerLineViewBottom;
    EKUIVisualEffectView *_dividerLineSuperview;
    UIColor *_dividerLineVisualEffectColor;
    EKDayOccurrenceView *_birthdayCountOccurrenceView;
    _Bool _showsBorderLines;
    _Bool _showsLabel;
    _Bool _hideOccurrenceBackground;
    _Bool _forceSingleColumnLayout;
    int _maxVisibleRows;
    id <EKDayAllDayViewDelegate> _delegate;
    double _fixedHeight;
    EKEvent *_dimmedOccurrence;
}

+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;
+ (id)unscaledAllDayFont;
@property(retain, nonatomic) EKEvent *dimmedOccurrence; // @synthesize dimmedOccurrence=_dimmedOccurrence;
@property(nonatomic) int maxVisibleRows; // @synthesize maxVisibleRows=_maxVisibleRows;
@property(nonatomic) double fixedHeight; // @synthesize fixedHeight=_fixedHeight;
@property(nonatomic) _Bool forceSingleColumnLayout; // @synthesize forceSingleColumnLayout=_forceSingleColumnLayout;
@property(nonatomic) _Bool hideOccurrenceBackground; // @synthesize hideOccurrenceBackground=_hideOccurrenceBackground;
@property(nonatomic) _Bool showsLabel; // @synthesize showsLabel=_showsLabel;
@property(nonatomic) _Bool showsBorderLines; // @synthesize showsBorderLines=_showsBorderLines;
@property(nonatomic) __weak id <EKDayAllDayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;
- (void)setDividerLineVisualEffect:(id)arg1;
- (void)updateLabelFont;
- (void)setTopBorderLineHidden:(_Bool)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setAllDayLabelColor:(id)arg1;
- (_Bool)isAllDayLabelHighlighted;
- (void)setAllDayLabelHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) double naturalHeight;
- (double)_height;
- (void)dayOccurrenceViewSelected:(id)arg1 atPoint:(struct CGPoint)arg2 wasTapped:(_Bool)arg3;
@property(nonatomic) _Bool showsSelection;
@property(nonatomic) _Bool allowsOccurrenceSelection;
- (id)occurrenceViews;
@property(nonatomic) _Bool showBirthdayCountInsteadOfEvents;
- (void)_setUpBirthdayCountViewIfNeeded;
- (void)setOccurrences:(id)arg1;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (double)_borderLineWidth;
- (double)_allDayAreaHeightForEventCount:(long long)arg1;
- (void)removeAllOccurrenceViews;
- (void)setOrientation:(long long)arg1;
- (void)setOccurrenceInset:(double)arg1 labelInset:(double)arg2;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (_Bool)containsEvent:(id)arg1;
- (void)addViewToScroller:(id)arg1;
- (double)nextAvailableOccurrenceViewYOrigin;
- (id)occurrenceViewForEvent:(id)arg1;
- (double)firstEventYOffset;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)_findSelectedCopySubviewOfView:(id)arg1;
- (id)_selectedCopyView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

