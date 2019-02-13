//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPEquationLayout.h>

__attribute__((visibility("hidden")))
@interface TSWPEquationInlineLayout : TSWPEquationLayout
{
    _Bool _disableXHeightMatching;
    double _fontSizeAdjustedForXHeight;
}

@property(readonly, nonatomic) double fontSizeAdjustedForXHeight; // @synthesize fontSizeAdjustedForXHeight=_fontSizeAdjustedForXHeight;
@property(nonatomic) _Bool disableXHeightMatching; // @synthesize disableXHeightMatching=_disableXHeightMatching;
- (double)p_fontSizeThatMatchesXHeightForFontName:(id)arg1 fontSize:(double)arg2;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (void)willLayoutInlineWithMaximumSize:(struct CGSize)arg1;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (double)inlineCenteredAlignmentHorizontalOffset;
- (double)descentForInlineLayout;
- (_Bool)wantsRoundedInlinePosition;

@end

