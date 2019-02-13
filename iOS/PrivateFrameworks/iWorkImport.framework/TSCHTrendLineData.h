//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSString, TSCHChartSeries, TSUBezierPath, TSURegressionModel;

__attribute__((visibility("hidden")))
@interface TSCHTrendLineData : NSObject <TSCHUnretainedParent>
{
    TSCHChartSeries *mSeries;
    int mLineType;
    _Bool mShowTrendLine;
    TSURegressionModel *mRegression;
    double mMaxYValue;
    double mMinYValue;
    double mMaxXValue;
    double mMinXValue;
    int mInputAxisType;
    int mOutputAxisType;
    _Bool mTrendLineInvalid;
    TSUBezierPath *mCachedTrendLinePath;
    struct CGRect mCachedChartFrame;
    double mOffsetInBody;
    _Bool mCachedChartVertical;
}

@property(readonly, nonatomic) _Bool showTrendLine; // @synthesize showTrendLine=mShowTrendLine;
- (void).cxx_destruct;
- (void)p_releaseCache;
- (void)p_updateTrendLineData;
- (void)p_generateRegression;
- (unsigned long long)p_fillArrayX:(double *)arg1 andY:(double *)arg2 fromPoints:(id)arg3 hasNegativeX:(_Bool *)arg4;
- (unsigned long long)p_fillArrayX:(id)arg1 andY:(id)arg2 fromPoints:(id)arg3;
- (void)p_calcMARegression:(unsigned long long)arg1 xData:(id)arg2 yData:(id)arg3;
- (void)p_calcBoundsForMovingAverage;
- (void)p_calcRegression:(unsigned long long)arg1 xData:(double *)arg2 yData:(double *)arg3;
- (void)p_calcBounds;
- (id)p_dataPointValues;
- (int)p_getTrendLineType;
- (id)trendLinePathForChartRect:(struct CGRect)arg1 offsetInBody:(double)arg2 vertical:(_Bool)arg3;
- (void)p_addPathToTrendLinePathWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 curved:(_Bool)arg3 curveFitter:(id)arg4;
- (id)p_linePathFromPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (CDStruct_c3b9c2ee)p_unitPoint:(CDStruct_c3b9c2ee)arg1 toScreenFrame:(struct CGRect)arg2 offset:(double)arg3 vertical:(_Bool)arg4;
- (struct __CFAttributedString *)newEquationAttributedString;
- (void)trendLineUnitSpacePoints:(CDStruct_183601bc **)arg1 count:(unsigned long long *)arg2 drawCurve:(_Bool *)arg3 maxPoints:(unsigned long long)arg4;
- (double)maxValueForAxisID:(id)arg1;
- (double)minValueForAxisID:(id)arg1;
- (void)updateIfNeeded;
- (void)invalidateData;
- (_Bool)showTrendLineForAxisID:(id)arg1;
@property(readonly, nonatomic) float rSquaredTextOpacity;
@property(readonly, nonatomic) float equationTextOpacity;
@property(readonly, nonatomic) NSString *trendLineLegendText;
@property(readonly, nonatomic) NSString *rSquaredText;
@property(readonly, nonatomic) _Bool showRSquared;
@property(readonly, nonatomic) _Bool showEquation;
@property(readonly, nonatomic) _Bool showTrendLineLegendText;
- (void)clearParent;
- (void)dealloc;
- (id)initWithSeries:(id)arg1;

@end

