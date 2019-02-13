//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GuidanceManeuverView, SignStyle, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SimpleSignView : UIView
{
    UIImageView *_backgroundView;
    GuidanceManeuverView *_maneuverView;
    struct UIEdgeInsets _maneuverViewEdgeInsets;
    UIImageView *_shieldView;
    SignStyle *_style;
}

@property(retain, nonatomic) SignStyle *style; // @synthesize style=_style;
@property(nonatomic) struct UIEdgeInsets maneuverViewEdgeInsets; // @synthesize maneuverViewEdgeInsets=_maneuverViewEdgeInsets;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *shieldImage; // @dynamic shieldImage;
- (void)layoutSubviews;
- (id)shieldImageView;
@property(readonly, nonatomic) GuidanceManeuverView *maneuverView;
- (void)updateStyleForTheme;
- (id)initWithFrame:(struct CGRect)arg1;

@end

