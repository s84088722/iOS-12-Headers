//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilitySmallRingComplicationView.h>

@class NTKColoringLabel;

@interface NTKUtilitySmallRingTextComplicationView : NTKUtilitySmallRingComplicationView
{
    NTKColoringLabel *_label;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
@property(readonly, nonatomic) NTKColoringLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setLabelText:(id)arg1;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

