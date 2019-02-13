//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCHElementBuilder.h>

__attribute__((visibility("hidden")))
@interface TSCHBarColumnElementBuilder : TSCHElementBuilder
{
    _Bool mVertical;
}

+ (void)calculateGapsForChartModel:(id)arg1 forTotalWidth:(float)arg2 outBarWidth:(float *)arg3 outBarGroupGap:(float *)arg4 outBarGap:(float *)arg5;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(_Bool *)arg3 outOffsetInBody:(double *)arg4;
- (void)p_nudgeBarElementFrame:(struct CGRect *)arg1 inPlotAreaFrame:(struct CGRect)arg2 usingBarModelCache:(id)arg3 unitSpaceValueBegin:(double)arg4 unitSpaceValueEnd:(double)arg5 withViewScale:(double)arg6;
- (unsigned long long)p_logicalSeriesIndexForSeries:(id)arg1;
- (struct CGRect)p_createBarRectInFrame:(struct CGRect)arg1 forSeries:(id)arg2 valueIndex:(unsigned long long)arg3 valueAxis:(id)arg4 groupAxis:(id)arg5 barWidth:(float)arg6 barGroupGap:(float)arg7 barGap:(float)arg8;
- (double)p_beginValueForSeries:(id)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(_Bool)arg4 valueAxis:(id)arg5;
- (void)p_calcGapsForBodyLayout:(id)arg1 outBarWidth:(float *)arg2 outBarGroupGap:(float *)arg3 outBarGap:(float *)arg4;
- (unsigned long long)p_numberOfSeriesForGapCalcInModel:(id)arg1;
- (unsigned long long)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect *)arg5 outNewErrorBarDescriptors:(CDStruct_183601bc **)arg6;
- (struct CGRect)nudgeBarElementFrame:(struct CGRect)arg1 inPlotAreaFrame:(struct CGRect)arg2 usingBarModelCache:(id)arg3 unitSpaceValueBegin:(double)arg4 unitSpaceValueEnd:(double)arg5 withViewScale:(double)arg6;
- (unsigned long long)countOfBarRectsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewGroupIndexArray:(unsigned long long **)arg4 outNewElementRectsArray:(struct CGRect **)arg5 outNewClipRectsArray:(struct CGRect **)arg6;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRect:(struct CGRect **)arg6 outNewStrings:(id *)arg7;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7 forHighlightPath:(_Bool)arg8;
- (struct CGPath *)newRoundedRectPathWithRect:(struct CGRect)arg1 chartInfo:(id)arg2 series:(id)arg3 groupIndex:(unsigned long long)arg4 isVertical:(_Bool)arg5 forGroups:(id)arg6 forBodyLayout:(id)arg7;
- (id)initWithVertical:(_Bool)arg1;
- (id)init;

@end

