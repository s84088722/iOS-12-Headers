//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIPlayButton.h>

@class CALayer, UIImage, UIView;

@interface SearchUIButton : SKUIPlayButton
{
    _Bool _toggled;
    _Bool _smallSize;
    unsigned long long _type;
    UIView *_containerView;
    UIImage *_overlayImage;
    CALayer *_backgroundLayer;
}

@property(retain) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) _Bool smallSize; // @synthesize smallSize=_smallSize;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic, getter=isToggled) _Bool toggled; // @synthesize toggled=_toggled;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (float)playButtonDefaultAlpha;
- (float)buttonCornerRadius;
- (struct CGSize)buttonSize;
- (void)updateWithType:(unsigned long long)arg1;
- (void)didMoveToSuperview;
- (id)initWithStyle:(unsigned long long)arg1 type:(unsigned long long)arg2;

@end

