//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKHorizontalTimePeriodSeries.h>

@class NSString, UIColor, UIFont;

@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries
{
    double _markerRadius;
    UIColor *_innerMarkColor;
    UIFont *_categoryLevelFont;
    UIColor *_categoryLevelColor;
    UIColor *_specialMarkColor;
    NSString *_specialMarkLegendLabel;
}

@property(retain, nonatomic) NSString *specialMarkLegendLabel; // @synthesize specialMarkLegendLabel=_specialMarkLegendLabel;
@property(retain, nonatomic) UIColor *specialMarkColor; // @synthesize specialMarkColor=_specialMarkColor;
@property(retain, nonatomic) UIColor *categoryLevelColor; // @synthesize categoryLevelColor=_categoryLevelColor;
@property(retain, nonatomic) UIFont *categoryLevelFont; // @synthesize categoryLevelFont=_categoryLevelFont;
@property(retain, nonatomic) UIColor *innerMarkColor; // @synthesize innerMarkColor=_innerMarkColor;
@property(nonatomic) double markerRadius; // @synthesize markerRadius=_markerRadius;
- (void).cxx_destruct;
- (id)marginsForYAxis:(id)arg1 chartRect:(struct CGRect)arg2;
- (double)offsetForEnumerationRect:(struct CGRect)arg1;
- (void)_drawCategoryLabels:(struct CGContext *)arg1 axisRect:(struct CGRect)arg2;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (_Bool)_interiorCategoryLabels;
- (id)init;

@end

