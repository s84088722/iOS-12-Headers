//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIButtonBarAppearanceDelegate-Protocol.h>

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIBarContentView : UIView <_UIButtonBarAppearanceDelegate>
{
    _Bool _barWantsLetterpress;
    _Bool _centerTextButtons;
    Class _appearanceGuideClass;
    id _appearanceStorage;
    UIImage *_backIndicatorMaskImage;
}

@property(retain, nonatomic) UIImage *backIndicatorMaskImage; // @synthesize backIndicatorMaskImage=_backIndicatorMaskImage;
@property(readonly, nonatomic) id appearanceStorage; // @synthesize appearanceStorage=_appearanceStorage;
@property(nonatomic) _Bool centerTextButtons; // @synthesize centerTextButtons=_centerTextButtons;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic) _Bool barWantsLetterpress; // @synthesize barWantsLetterpress=_barWantsLetterpress;
- (void).cxx_destruct;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
@property(retain, nonatomic) UIImage *backIndicatorImage; // @dynamic backIndicatorImage;
- (id)defaultFontDescriptor;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_appearanceChanged;
@property(readonly, nonatomic) double backButtonMaximumWidth;
@property(readonly, nonatomic) double backButtonMargin; // @dynamic backButtonMargin;
- (double)absorptionForItem:(id)arg1;
@property(readonly, nonatomic) double defaultTextPadding;
@property(readonly, nonatomic) double defaultEdgeSpacing;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
@property(readonly, nonatomic) _Bool isRTL;
@property(readonly, nonatomic) long long barMetrics; // @dynamic barMetrics;
@property(readonly, nonatomic) long long barType;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIColor *tintColor; // @dynamic tintColor;

@end

