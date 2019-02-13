//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlControllableView-Protocol.h>

@class HUDynamicFormattingLabel, HUIconView, HUQuickControlSwitchViewProfile, NSString;

@interface HUQuickControlSwitchView : UIView <HUQuickControlControllableView>
{
    HUQuickControlSwitchViewProfile *_profile;
    UIView *_wellView;
    UIView *_knobView;
    HUDynamicFormattingLabel *_supplementaryValueLabel;
    HUIconView *_decorationIconView;
    double _switchValue;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) double switchValue; // @synthesize switchValue=_switchValue;
@property(retain, nonatomic) HUIconView *decorationIconView; // @synthesize decorationIconView=_decorationIconView;
@property(retain, nonatomic) HUDynamicFormattingLabel *supplementaryValueLabel; // @synthesize supplementaryValueLabel=_supplementaryValueLabel;
@property(retain, nonatomic) UIView *knobView; // @synthesize knobView=_knobView;
@property(retain, nonatomic) UIView *wellView; // @synthesize wellView=_wellView;
@property(copy, nonatomic) HUQuickControlSwitchViewProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (void)_createSupplementaryValueLabelIfNecessary;
- (_Bool)_createDecorationIconViewIfNecessary;
- (void)_updateSupplementaryValueLabelAnimated:(_Bool)arg1;
- (void)_updateDecorationIconDescriptorAnimated:(_Bool)arg1;
@property(retain, nonatomic) id value;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (struct CGPoint)_knobCenterForMetrics:(CDStruct_2418a849)arg1 switchValue:(double)arg2;
- (struct CGSize)_knobSizeForMetrics:(CDStruct_2418a849)arg1;
- (struct CGRect)_knobFrameForMetrics:(CDStruct_2418a849)arg1 switchValue:(double)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id secondaryValue;
@property(readonly) Class superclass;

@end

