//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface HUQuickControlCircleButton : UIButton
{
    UIColor *_selectedColor;
    UIView *_backgroundView;
    UIColor *_standardBackgroundColor;
}

@property(retain, nonatomic) UIColor *standardBackgroundColor; // @synthesize standardBackgroundColor=_standardBackgroundColor;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_controlStateChanged;
- (void)_adjustTitleColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
@property(nonatomic) double fontSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

