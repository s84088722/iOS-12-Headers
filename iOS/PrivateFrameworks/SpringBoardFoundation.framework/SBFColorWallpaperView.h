//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSString, UIColor, UIImage;

@interface SBFColorWallpaperView : SBFWallpaperView
{
    NSString *_cacheGroup;
    UIImage *_cachedSnapshotImage;
}

@property(retain, nonatomic) UIImage *cachedSnapshotImage; // @synthesize cachedSnapshotImage=_cachedSnapshotImage;
- (void).cxx_destruct;
- (id)cacheGroup;
- (id)snapshotImage;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (id)averageColorInRect:(struct CGRect)arg1 withSmudgeRadius:(double)arg2;
- (id)_computeAverageColor;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (long long)wallpaperType;
@property(readonly, nonatomic) UIColor *wallpaperColor;
- (id)initWithFrame:(struct CGRect)arg1 variant:(long long)arg2 wallpaperSettingsProvider:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperColor:(id)arg2 cacheGroup:(id)arg3 variant:(long long)arg4 wallpaperSettingsProvider:(id)arg5;

@end

