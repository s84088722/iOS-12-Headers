//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFParallaxSettings.h>

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings
{
    double _overhangX;
    double _overhangY;
    double _perspectiveTransform;
}

+ (id)settingsControllerModule;
+ (double)minimumZoomScaleForCurrentDeviceForWallpaperSize:(struct CGSize)arg1 parallaxFactor:(double)arg2;
+ (double)minimumZoomScaleForWallpaperSize:(struct CGSize)arg1 parallaxFactor:(double)arg2 deviceType:(long long)arg3;
+ (struct CGSize)overhangSizeForDeviceType:(long long)arg1;
+ (struct CGSize)overhangSizeForCurrentDevice;
+ (struct CGSize)minimumWallpaperSizeForWallpaperSize:(struct CGSize)arg1 deviceType:(long long)arg2;
+ (struct CGSize)minimumWallpaperSizeForCurrentDevice;
+ (struct CGSize)bestWallpaperSizeForWallpaperSize:(struct CGSize)arg1 deviceType:(long long)arg2 parallaxFactor:(double)arg3 portrait:(_Bool)arg4;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1 portrait:(_Bool)arg2;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1;
+ (struct CGSize)_requiredOverhangSizeForDeviceType:(long long)arg1;
+ (struct CGSize)_requiredOverhangSizeForCurrentDevice;
+ (long long)_currentDeviceType;
@property double perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
@property double overhangY; // @synthesize overhangY=_overhangY;
@property double overhangX; // @synthesize overhangX=_overhangX;
- (void)setDefaultValues;

@end

