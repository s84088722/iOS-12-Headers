//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface COSHealthActivityMoveGoalView : UIView
{
    UILabel *_goalLabel;
    UIButton *_incrementButton;
    UIButton *_decrementButton;
    UILabel *_energyUnitLabel;
}

@property(readonly, nonatomic) UILabel *energyUnitLabel; // @synthesize energyUnitLabel=_energyUnitLabel;
@property(readonly, nonatomic) UIButton *decrementButton; // @synthesize decrementButton=_decrementButton;
@property(readonly, nonatomic) UIButton *incrementButton; // @synthesize incrementButton=_incrementButton;
@property(readonly, nonatomic) UILabel *goalLabel; // @synthesize goalLabel=_goalLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 formattingManager:(id)arg2;

@end

