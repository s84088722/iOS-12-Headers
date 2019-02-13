//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIColor, UIFont, UIImage;

@protocol EKStyleProvider <NSObject>

@optional
- (double)cellSpinnerAnimationDuration;
- (long long)actionSheetStyle;
- (_Bool)usesBlackDatePicker;
- (_Bool)usesKeyboardForDatePicker;
- (NSArray *)cellSpinnerImages;
- (UIImage *)cellLocationArrow;
- (UIImage *)cellAccessoryCheckmark;
- (UIImage *)cellAccessoryDisclosureIndicator;
- (double)calendarGroupFooterHeight;
- (double)calendarSourceMinimumHeight;
- (double)calendarSourceLeftPadding;
- (double)calendarSourceBottomPadding;
- (double)calendarSourceTopPadding;
- (double)editorNotesVerticalPadding;
- (double)editorTitleVerticalPadding;
- (double)editorTableViewBottomMargin;
- (double)editorTableViewTopMargin;
- (double)editorTableViewHorizontalMargin;
- (Class)cellSelectedBackgroundViewClass;
- (Class)cellBackgroundViewClass;
- (UIFont *)calendarSourceFont;
- (UIFont *)editorSubtitleFont;
- (UIFont *)editorLabelFont;
- (UIFont *)editorTitleFont;
- (UIFont *)defaultTextFont;
- (UIColor *)navigationBarColor;
- (UIColor *)cellAccessoryDisclosureButtonColor;
- (UIColor *)cellSeparatorColor;
- (UIColor *)cellBackgroundColor;
- (UIColor *)calendarSourceShadowColor;
- (UIColor *)calendarSourceColor;
- (UIColor *)editorSubtitleColor;
- (UIColor *)editorTitleColor;
- (UIColor *)editorLabelColor;
- (UIColor *)disabledTextColor;
- (UIColor *)checkedTextColor;
- (UIColor *)defaultHighlightedTextColor;
- (UIColor *)defaultTextColor;
- (UIColor *)backgroundColorOpaque;
- (UIColor *)backgroundColor;
@end

