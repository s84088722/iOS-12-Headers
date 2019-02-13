//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UIVisualEffectView, _TVProgressBarView;

@interface _TVProgressView : UIView
{
    UIVisualEffectView *_materialView;
    _TVProgressBarView *_progressBarView;
    _Bool _useMaterial;
    long long _style;
    double _cornerRadius;
    double _progress;
    UIColor *_progressTintColor;
    UIColor *_completeTintColor;
    UIImageView *_shadowImageView;
}

@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(nonatomic) _Bool useMaterial; // @synthesize useMaterial=_useMaterial;
@property(retain, nonatomic) UIColor *completeTintColor; // @synthesize completeTintColor=_completeTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_updateForStyleChange;
- (id)_maskImageForProgressBar;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

