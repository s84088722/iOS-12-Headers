//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUI/NSObject-Protocol.h>

@class _UIActionSlider;

@protocol _UIActionSliderDelegate <NSObject>

@optional
- (void)actionSliderDidCancelSlide:(_UIActionSlider *)arg1;
- (void)actionSliderDidCompleteSlide:(_UIActionSlider *)arg1;
- (void)actionSlider:(_UIActionSlider *)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(_UIActionSlider *)arg1;
@end

