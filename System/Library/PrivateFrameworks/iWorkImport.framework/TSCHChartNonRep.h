//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHSupportsRendering-Protocol.h>

@class NSArray, NSString, TSCHChartInfo, TSCHChartLayout;

__attribute__((visibility("hidden")))
@interface TSCHChartNonRep : NSObject <TSCHSupportsRendering>
{
    TSCHChartInfo *mChartInfo;
    NSArray *mRenderers;
    TSCHChartLayout *mChartLayout;
}

@property(retain, nonatomic) TSCHChartLayout *chartLayout; // @synthesize chartLayout=mChartLayout;
@property(retain, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)requireSeparateLabelLayer;
- (_Bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (struct CGRect)outerShadowFrame;
- (struct CGRect)convertNaturalRectToLayerRelative:(struct CGRect)arg1;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (_Bool)shouldShowLegendHighlight;
- (_Bool)renderElementsShadowOnly;
- (_Bool)renderElementsWithoutShadows;
- (_Bool)renderLabels;
- (_Bool)renderReferenceLines;
- (_Bool)renderGrid;
- (_Bool)renderElements;
- (id)renderValueIndexSetForSeries:(unsigned long long)arg1;
- (id)renderSeriesIndexSet;
- (_Bool)isDrawingIntoPDF;
- (_Bool)is2DRepFor3DChartRep;
- (_Bool)forceRenderBlankBackground;
- (id)commandController;
- (double)viewScale;
- (id)geometry;
- (_Bool)shadowsEnabled;
- (void)clearRenderers;
- (id)renderers;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
