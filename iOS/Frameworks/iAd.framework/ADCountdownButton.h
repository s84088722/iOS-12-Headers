//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIImage, UIImageView, UIView;

@interface ADCountdownButton : UIControl
{
    _Bool _dimmed;
    UIImage *_iconImage;
    UIImage *_dimmedIconImage;
    UIImageView *_backgroundView;
    UIImageView *_iconView;
    UIView *_outlineView;
    CAShapeLayer *_outlineProgressLayer;
}

+ (id)_inactiveCloseBoxImage;
+ (id)_closeBoxImage;
@property(retain, nonatomic) CAShapeLayer *outlineProgressLayer; // @synthesize outlineProgressLayer=_outlineProgressLayer;
@property(retain, nonatomic) UIView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImage *dimmedIconImage; // @synthesize dimmedIconImage=_dimmedIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)startEnablingButtonWithCountdownDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setCountdownProgress:(double)arg1;
- (double)countdownProgress;
- (struct CGSize)intrinsicContentSize;
- (id)init;
- (void)dealloc;

@end
