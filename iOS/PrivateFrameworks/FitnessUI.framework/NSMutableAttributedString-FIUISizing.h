//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (FIUISizing)
- (struct CGSize)scaleFontAndKerningToFitSize:(struct CGSize)arg1 minimumFontSize:(double)arg2 minimumKerning:(double)arg3 stillDidntFit:(_Bool *)arg4;
- (void)scaleToFitWidth:(double)arg1;
- (double)scaleNumericAttribute:(id)arg1 byAmount:(double)arg2;
- (double)scaleFontSizeByAmount:(double)arg1 minimumFontSize:(double)arg2;
@end

