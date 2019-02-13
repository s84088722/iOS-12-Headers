//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSIndexSet, NSMutableArray, UIColor, UIFont;

@interface TSKSegmentedControl : UIControl
{
    NSMutableArray *mItems;
    NSMutableArray *mButtonSegments;
    NSIndexSet *mSelectedSegmentIndices;
    _Bool mAllowsMultipleSelection;
    _Bool mAllowsEmptySelection;
    long long mLastPressedSegmentIndex;
    void *mUserData;
    UIFont *mFont;
    int mStyle;
    int _segmentedControlStyle;
    UIColor *mSelectedTintColor;
}

@property(readonly, nonatomic) int segmentedControlStyle; // @synthesize segmentedControlStyle=_segmentedControlStyle;
@property(nonatomic) void *userData; // @synthesize userData=mUserData;
@property(readonly, nonatomic) long long lastPressedSegmentIndex; // @synthesize lastPressedSegmentIndex=mLastPressedSegmentIndex;
@property(nonatomic) _Bool allowsEmptySelection; // @synthesize allowsEmptySelection=mAllowsEmptySelection;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=mAllowsMultipleSelection;
@property(copy, nonatomic) NSIndexSet *selectedSegmentIndices; // @synthesize selectedSegmentIndices=mSelectedSegmentIndices;
@property(retain, nonatomic) UIFont *font; // @synthesize font=mFont;
- (void)tappedSegment:(id)arg1;
- (void)p_updateSegmentProperties;
- (void)p_setButtonAttributedTitle:(id)arg1 color:(id)arg2 forState:(unsigned long long)arg3 button:(id)arg4;
- (id)p_backgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (id)p_losengeBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (id)p_fullBleedBackgroundImageForButton:(id)arg1 item:(id)arg2 fillColor:(id)arg3;
- (unsigned long long)segmentWithTag:(long long)arg1;
- (long long)tagForSegment:(unsigned long long)arg1;
- (void)setTag:(long long)arg1 forSegment:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 forSegment:(unsigned long long)arg3;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setEnabled:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (void)sizeToFitWidth:(float)arg1;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSegmentedControlStyle:(int)arg1;
- (void)p_setSegmentedControlStyle:(int)arg1;
@property(retain, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=mSelectedTintColor;
- (void)p_setSelectedTintColor:(id)arg1;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)initWithItems:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithItems:(id)arg1 style:(int)arg2;
- (id)initWithItems:(id)arg1;

@end

