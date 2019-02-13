//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationImageView-Protocol.h>

@class CLKImageProvider, NSString, UIColor, UIImageView;

@interface NTKWorkoutComplicationAnimatedWrapperView : UIView <NTKComplicationImageView>
{
    UIImageView *_imageView;
    UIColor *_color;
    _Bool _usesLegibility;
    CLKImageProvider *_imageProvider;
    UIColor *_overrideColor;
}

@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) _Bool usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateState;
- (void)_applyAnimationForPauseState:(_Bool)arg1;
- (void)_updateTint;
- (id)initWithAnimationImages:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIColor *contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

