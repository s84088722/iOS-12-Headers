//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsThemeView.h"

@class MapsThemeLabel, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface TrafficIncidentDetailsView : MapsThemeView
{
    unsigned long long _layoutStyle;
    MapsThemeLabel *_primaryLabel;
    MapsThemeLabel *_secondaryLabel;
    NSLayoutConstraint *_topToPrimaryLabelVerticalConstraint;
    NSLayoutConstraint *_primaryLabelToSecondaryLabelVerticalConstraint;
    NSLayoutConstraint *_secondaryLabelToBottomVerticalConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *secondaryLabelToBottomVerticalConstraint; // @synthesize secondaryLabelToBottomVerticalConstraint=_secondaryLabelToBottomVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryLabelToSecondaryLabelVerticalConstraint; // @synthesize primaryLabelToSecondaryLabelVerticalConstraint=_primaryLabelToSecondaryLabelVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topToPrimaryLabelVerticalConstraint; // @synthesize topToPrimaryLabelVerticalConstraint=_topToPrimaryLabelVerticalConstraint;
@property(retain, nonatomic) MapsThemeLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) MapsThemeLabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *secondaryLabelText;
@property(retain, nonatomic) NSString *primaryLabelText;
- (void)_setupViewsForLayoutStyle:(unsigned long long)arg1;
- (id)_initialConstraints;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
