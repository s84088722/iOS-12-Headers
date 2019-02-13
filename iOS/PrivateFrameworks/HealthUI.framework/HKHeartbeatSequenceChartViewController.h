//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKScalarGraphViewController.h>

@class HKAxis, HKUIInteractiveChartDateLabelSlider, NSDate, NSMutableArray;

@interface HKHeartbeatSequenceChartViewController : HKScalarGraphViewController
{
    NSDate *_startDate;
    NSMutableArray *_sequenceDataSources;
    NSMutableArray *_graphSeries;
    HKAxis *_commonVerticalAxis;
    double _initialXAxisOffset;
    HKUIInteractiveChartDateLabelSlider *_dateLabelSlider;
}

@property(retain, nonatomic) HKUIInteractiveChartDateLabelSlider *dateLabelSlider; // @synthesize dateLabelSlider=_dateLabelSlider;
@property(nonatomic) double initialXAxisOffset; // @synthesize initialXAxisOffset=_initialXAxisOffset;
@property(retain, nonatomic) HKAxis *commonVerticalAxis; // @synthesize commonVerticalAxis=_commonVerticalAxis;
@property(retain, nonatomic) NSMutableArray *graphSeries; // @synthesize graphSeries=_graphSeries;
@property(retain, nonatomic) NSMutableArray *sequenceDataSources; // @synthesize sequenceDataSources=_sequenceDataSources;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphViewSizeChanged:(id)arg1;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (long long)stackCountForGraphView:(id)arg1;
- (void)_createDateLabelSlider;
- (id)_verticalNumericalAxis;
- (id)_heartbeatSequenceSeriesForSource:(id)arg1 axis:(id)arg2 color:(id)arg3 lineWidth:(double)arg4 markerRadius:(double)arg5 dashStyle:(long long)arg6 annotate:(_Bool)arg7;
- (void)_resizeDateLabelSlider:(struct CGSize)arg1;
- (void)_recomputeAxisRanges;
- (void)_synchronizeVerticalAxes;
- (void)_adjustGraphViewOptions;
- (void)addSequenceData:(id)arg1 color:(id)arg2 lineWidth:(double)arg3 markerRadius:(double)arg4 dashStyle:(long long)arg5 annotate:(_Bool)arg6;
- (void)addSequenceData:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMinimumHeight:(double)arg1 startDate:(id)arg2;
- (id)initWithMinimumHeight:(double)arg1;

@end

