//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDTimeScopeControl.h"

@class UISegmentedControl;

@interface _WDTimeScopeControlBar : WDTimeScopeControl
{
    UISegmentedControl *_segments;
}

- (void).cxx_destruct;
- (void)_segmentValueChanged:(id)arg1;
- (void)setSelectedTimeScope:(long long)arg1;
- (long long)selectedTimeScope;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 timeScopes:(id)arg2 shortTextStyle:(_Bool)arg3;

@end

