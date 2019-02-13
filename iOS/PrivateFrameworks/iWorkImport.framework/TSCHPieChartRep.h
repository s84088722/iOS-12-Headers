//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHChartRep.h>

@class NSArray, NSDictionary, TSCHChartRadialElementsRenderer;

__attribute__((visibility("hidden")))
@interface TSCHPieChartRep : TSCHChartRep
{
    TSCHChartRadialElementsRenderer *mPieElementRenderer;
    NSArray *mWedgeKnobs;
    NSDictionary *mSeriesIndexedPieWedgeDraggingLayers;
    _Bool mHasDrawnSinceWedgeKnobTrackerCreated;
}

- (void).cxx_destruct;
- (void)renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (double)p_radius;
- (double)dragTravelAlongBisectorBetweenStartPoint:(struct CGPoint)arg1 andEndingPoint:(struct CGPoint)arg2 forSeries:(unsigned long long)arg3;
- (void)clearRenderers;
- (id)pieElementRenderer;
- (_Bool)forceRenderBlankBackground;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

