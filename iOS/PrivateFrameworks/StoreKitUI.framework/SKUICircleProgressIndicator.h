//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIColor, UIImage, UIImageView;

@interface SKUICircleProgressIndicator : UIView
{
    double _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    double _animationStartValue;
    UIImage *_borderImage;
    UIImage *_centerImage;
    struct UIEdgeInsets _centerImageInsets;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    _Bool _highlighted;
    UIImageView *_indeterminateView;
    _Bool _isAnimating;
    double _progress;
    UIColor *_unhighlightedBackgroundColor;
}

+ (id)_indeterminateImage;
+ (id)_fillImage;
+ (id)_borderImage;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_centerImageInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_centerImage;
- (void).cxx_destruct;
- (void)_startIndeterminateAnimation;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (void)_setHidesBorderView:(_Bool)arg1;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isIndeterminate) _Bool indeterminate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

