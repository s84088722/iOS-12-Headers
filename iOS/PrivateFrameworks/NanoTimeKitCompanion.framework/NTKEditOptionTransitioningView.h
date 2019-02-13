//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NTKEditOption, UIImageView;
@protocol NTKEditOptionTransitioningViewDelegate;

@interface NTKEditOptionTransitioningView : UIView
{
    UIView *_transitionContainer;
    UIView *_transitionDimmingView;
    double _breathScaleModifier;
    double _rubberBandScaleModifier;
    UIImageView *_toTransitionImageView;
    UIImageView *_fromTransitionImageView;
    id <NTKEditOptionTransitioningViewDelegate> _delegate;
    NTKEditOption *_toEditOption;
    NTKEditOption *_fromEditOption;
}

@property(retain, nonatomic) NTKEditOption *fromEditOption; // @synthesize fromEditOption=_fromEditOption;
@property(retain, nonatomic) NTKEditOption *toEditOption; // @synthesize toEditOption=_toEditOption;
@property(nonatomic) __weak id <NTKEditOptionTransitioningViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resetTransitionImageView:(id)arg1;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3;
- (void)setOption:(id)arg1;
- (void)setDimmingAlpha:(double)arg1;
- (void)_updateUnifiedScaleTransform;
- (void)setRubberBandingFraction:(double)arg1;
- (void)setBreatheFraction:(double)arg1;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

