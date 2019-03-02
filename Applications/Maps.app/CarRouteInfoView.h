//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

#import "CarDarkening-Protocol.h"

@class GuidanceETA, MapsAutoLayoutContext, NSString, TwoPartDistanceLabel, TwoPartETALabel, TwoPartTimeLabel;

__attribute__((visibility("hidden")))
@interface CarRouteInfoView : UIStackView <CarDarkening>
{
    TwoPartETALabel *_ETALabel;
    TwoPartTimeLabel *_timeLabel;
    TwoPartDistanceLabel *_distanceLabel;
    MapsAutoLayoutContext *_layoutContext;
    _Bool _useNightMode;
    GuidanceETA *_latestETA;
}

@property(nonatomic, getter=shouldUseNightMode) _Bool useNightMode; // @synthesize useNightMode=_useNightMode;
@property(retain, nonatomic) GuidanceETA *latestETA; // @synthesize latestETA=_latestETA;
- (void).cxx_destruct;
- (double)totalRemainingTime;
- (double)totalRemainingDistance;
- (void)_updateLabelStyle;
- (void)setUseNightMode:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
