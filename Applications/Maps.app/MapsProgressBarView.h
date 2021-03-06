//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsThemeView.h"

@class NSLayoutConstraint, UIView;

__attribute__((visibility("hidden")))
@interface MapsProgressBarView : MapsThemeView
{
    double _progress;
    UIView *_fillView;
    NSLayoutConstraint *_progressFillConstraint;
    unsigned long long _fillStyle;
}

@property(nonatomic) unsigned long long fillStyle; // @synthesize fillStyle=_fillStyle;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)_updateFillTintColor;
- (void)_updateFillConstraint;
- (void)layoutSubviews;
- (void)updateTheme;
- (void)_customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

