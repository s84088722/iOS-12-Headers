//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexText/STContainerLayout.h>

#import <SilexText/TSWPColumnMetrics-Protocol.h>
#import <SilexText/TSWPLayoutParent-Protocol.h>

@class TSWPPadding;
@protocol STStandaloneTextLayoutDelegate;

@interface STStandaloneTextLayout : STContainerLayout <TSWPLayoutParent, TSWPColumnMetrics>
{
    id <STStandaloneTextLayoutDelegate> _delegate;
}

@property(nonatomic) __weak id <STStandaloneTextLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)p_wpLayoutParent;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
@property(readonly, nonatomic) struct CGSize adjustedInsets;
- (id)styleProviderForLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (id)childInfosForLayout;
- (id)computeLayoutGeometry;
- (Class)repClassOverride;

// Remaining properties
@property(readonly, nonatomic) double textScaleFactor;

@end

