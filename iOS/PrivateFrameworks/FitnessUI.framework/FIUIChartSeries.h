//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FIUIChartDataSet, NSDate, NSNumber;
@protocol FIUIChartSeriesDataSource;

@interface FIUIChartSeries : UIView
{
    NSDate *_minXValue;
    NSDate *_maxXValue;
    _Bool _displayAboveAxisLabels;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    id <FIUIChartSeriesDataSource> _dataSource;
    FIUIChartDataSet *_dataSet;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) _Bool displayAboveAxisLabels; // @synthesize displayAboveAxisLabels=_displayAboveAxisLabels;
@property(retain, nonatomic) FIUIChartDataSet *dataSet; // @synthesize dataSet=_dataSet;
@property(nonatomic) __weak id <FIUIChartSeriesDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) NSNumber *maxYValue; // @synthesize maxYValue=_maxYValue;
@property(retain, nonatomic) NSNumber *minYValue; // @synthesize minYValue=_minYValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect insetBounds;
- (double)yValueForPointFromChartPointValue:(id)arg1;
- (double)xValueForPointFromChartPoint:(id)arg1;
- (float)_relativePositionForYPlaneValue:(id)arg1;
- (float)_relativePositionForXPlaneValue:(id)arg1;
- (void)_reloadMinMaxValues;
- (id)labelsFromDataSet;
- (void)layoutSubviews;
- (id)init;

@end

