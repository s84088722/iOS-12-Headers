//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CHDChartType.h>

__attribute__((visibility("hidden")))
@interface CHDBubbleType : CHDChartType
{
    _Bool mShowNegativeBubbles;
    _Bool mSizeRepresentsRadius;
    int mBubbleScale;
}

- (void)setSizeRepresentsRadius:(_Bool)arg1;
- (_Bool)isSizeRepresentingRadius;
- (void)setBubbleScale:(int)arg1;
- (int)bubbleScale;
- (void)setShowNegBubbles:(_Bool)arg1;
- (_Bool)isShowNegBubbles;
- (_Bool)is3DType;
- (int)defaultLabelPosition;
- (id)initWithChart:(id)arg1;

@end

