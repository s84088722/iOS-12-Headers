//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ApplicationTest.h"

@class NSDate, UIScrollView;

@interface ScrollViewTest : ApplicationTest
{
    double _totalScrollDistance;
    double _scrollDistanceInterval;
    double _scrollAccumulator;
    unsigned long long _iterations;
    NSDate *_startDate;
    _Bool _inputInvalid;
    _Bool _horizontal;
    _Bool _legacy;
    _Bool _simulateScroll;
}

- (void).cxx_destruct;
- (void)_scrollView:(id)arg1;
- (void)runTest;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)navigateToScrollView;
- (id)initWithApplication:(id)arg1 model:(id)arg2 options:(id)arg3;

@end
