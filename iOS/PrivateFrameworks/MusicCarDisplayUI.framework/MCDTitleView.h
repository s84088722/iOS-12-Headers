//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface MCDTitleView : UIView
{
    UIImageView *_explicitImageView;
    NSLayoutConstraint *_explicitImageViewWidthConstraint;
    NSLayoutConstraint *_titlePaddingConstraint;
    _Bool _explicitTrack;
    UILabel *_titleLabel;
}

@property(nonatomic, getter=isExplicitTrack) _Bool explicitTrack; // @synthesize explicitTrack=_explicitTrack;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)_addLabelWithFont:(id)arg1;
- (void)_addConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

