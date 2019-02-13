//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IKViewElement, NSString, UIColor, UILabel, _TVImageView;

@interface _TVButton : UIControl
{
    UIColor *__backgroundColor;
    _Bool _isFocused;
    _Bool _blurEnabled;
    _Bool _imageTrailsTextContent;
    long long _backdropStyle;
    double _cornerRadius;
    NSString *_groupName;
    _TVImageView *_imageView;
    UILabel *_textContentView;
    _TVImageView *_accessoryView;
    UIColor *_highlightColor;
    IKViewElement *_viewElement;
}

@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(copy, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) _TVImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UILabel *textContentView; // @synthesize textContentView=_textContentView;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool imageTrailsTextContent; // @synthesize imageTrailsTextContent=_imageTrailsTextContent;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) _Bool blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(readonly, nonatomic) long long backdropStyle; // @synthesize backdropStyle=_backdropStyle;
- (void).cxx_destruct;
- (void)_updateFocusStateWithCoordinator:(id)arg1;
- (void)_setFocused:(_Bool)arg1 animationCoordinator:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (double)_imageMarginFromText;
- (void)_playButtonAction:(id)arg1;
- (void)_selectButtonAction:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setContentMotionRotation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateBackgroundColorForState:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
@property(nonatomic, getter=isDisabled) _Bool disabled;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(_Bool)arg3;

@end

