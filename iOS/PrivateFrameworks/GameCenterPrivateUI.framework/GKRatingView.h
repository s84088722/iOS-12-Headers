//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView;

@interface GKRatingView : UIView
{
    double _value;
    UIImageView *_backgroundImageView;
    UIImageView *_foregroundImageView;
    NSLayoutConstraint *_foregroundWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *foregroundWidthConstraint; // @synthesize foregroundWidthConstraint=_foregroundWidthConstraint;
@property(retain, nonatomic) UIImageView *foregroundImageView; // @synthesize foregroundImageView=_foregroundImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) double value; // @synthesize value=_value;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (void)commonSetup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

