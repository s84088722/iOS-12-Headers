//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIMovieScrubberTrackView;

@protocol UIMovieScrubberTrackViewDelegate <NSObject>

@optional
- (double)movieScrubberTrackViewZoomAnimationDelay:(UIMovieScrubberTrackView *)arg1;
- (double)movieScrubberTrackViewZoomAnimationDuration:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewDidCollapse:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackViewDidExpand:(UIMovieScrubberTrackView *)arg1;
- (void)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
@end

