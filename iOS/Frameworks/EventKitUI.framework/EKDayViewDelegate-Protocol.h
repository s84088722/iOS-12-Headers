//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKDayView, EKEvent, NSArray, UIScrollView;

@protocol EKDayViewDelegate <NSObject>

@optional
- (void)dayView:(EKDayView *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)dayView:(EKDayView *)arg1 didUpdateScrollPosition:(struct CGPoint)arg2;
- (void)dayView:(EKDayView *)arg1 isPinchingDayViewWithScale:(double)arg2;
- (void)dayView:(EKDayView *)arg1 didScaleDayViewWithScale:(double)arg2;
- (void)dayView:(EKDayView *)arg1 didSelectEvent:(EKEvent *)arg2;
- (void)dayView:(EKDayView *)arg1 didCreateOccurrenceViews:(NSArray *)arg2;
- (void)dayViewDidFinishScrollingToOccurrence:(EKDayView *)arg1;
- (void)dayView:(EKDayView *)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;
- (void)dayViewDidTapEmptySpace:(EKDayView *)arg1;
@end

