//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface MPSwipeGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startLocation;
    double _startTime;
    UITouch *_trackingTouch;
    long long _swipeDirection;
}

@property(readonly, nonatomic) long long swipeDirection; // @synthesize swipeDirection=_swipeDirection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

