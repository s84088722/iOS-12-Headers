//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKLineSeries.h>

@interface WDTestingLineSeries : HKLineSeries
{
    double _referenceLineOffset;
}

@property(nonatomic) double referenceLineOffset; // @synthesize referenceLineOffset=_referenceLineOffset;
- (void)drawWithChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 zoomLevelConfiguration:(id)arg5 xAxisTransform:(struct CGAffineTransform)arg6 inContext:(struct CGContext *)arg7 secondaryRenderContext:(id)arg8;
- (id)init;

@end
