//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (TSDAdditions)
+ (id)randomColor;
+ (id)colorInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (_Bool)isOpaque;
- (double)luminance;
- (id)invertedColor;
- (id)grayscaleColor;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
@end

