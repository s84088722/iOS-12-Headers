//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPDetailSlider;

@protocol MPDetailSliderDelegate <NSObject>

@optional
- (void)detailSlider:(MPDetailSlider *)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(MPDetailSlider *)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(MPDetailSlider *)arg1;
- (void)detailSliderTrackingDidEnd:(MPDetailSlider *)arg1;
- (void)detailSliderTrackingDidBegin:(MPDetailSlider *)arg1;
@end

