//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CompactWidthMonthViewController, CrossFadeView, UIViewController, YearMonthTransitionMonthView;

@interface YearMonthTransitionView : UIView
{
    UIView *_backgroundView;
    UIView *_monthTransitionViewInYearState;
    UIView *_monthTransitionViewInMonthState;
    UIView *_monthTopSlidingPiece;
    UIView *_monthBottomSlidingPiece;
    UIView *_monthBottomSlidingPiece2;
    CrossFadeView *_monthLabel;
    UIViewController *_yearViewController;
    CompactWidthMonthViewController *_monthViewController;
    struct CGRect _monthInYearViewFrame;
    struct CGRect _monthInMonthViewFrame;
    YearMonthTransitionMonthView *_monthViewInMonthView;
    UIView *_monthViewInYearView;
    struct CGRect _topSlidingStartFrame;
    struct CGRect _bottomSlidingStartFrame;
    struct CGRect _bottomSliding2StartFrame;
    double _monthHeaderHeight;
    _Bool _yearToMonth;
    struct CGRect _yearViewOriginalFrame;
    UIView *_yearInMonthCoveringView;
    UIView *_monthListView;
    double _backgroundViewMonthAlpha;
    double _monthWeekViewExtent;
}

+ (double)_monthHeaderHeight;
- (void).cxx_destruct;
- (id)_getWeekContainingDate:(id)arg1 prevDate:(id)arg2;
- (id)_getMonthViewMonthContainingDate:(id)arg1;
- (struct CGRect)_monthFrameForMonthAfter:(id)arg1 anchorMonth:(id)arg2;
- (struct CGRect)_monthFrameForMonthBefore:(id)arg1 anchorMonth:(id)arg2;
- (_Bool)_canFastSnapshotMonth;
- (_Bool)_canFastSnapshotYear;
- (void)_basicAnimateView:(id)arg1 toAlpha:(double)arg2 duration:(double)arg3;
- (void)_animateView:(id)arg1 toAlpha:(double)arg2;
- (void)_animateView:(id)arg1 toBounds:(struct CGRect)arg2;
- (void)_animateView:(id)arg1 toPosition:(struct CGPoint)arg2;
- (void)_animateView:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)_haltAnimations;
- (void)_captureImagesForSlidingPiecesFromMonthViewController:(id)arg1 selectedDate:(id)arg2 calendar:(id)arg3;
- (id)_captureImageOfMonthInYearView;
- (id)_setUpMonthViewInMonthViewFrame;
- (struct CGRect)_calculateYearFrameForYearViewZoom;
- (struct CGRect)_calculateMonthFrameForYearViewZoom;
- (void)_animateZoomToMonthState;
- (void)_animateZoomToYearState;
- (void)_setToMonthState;
- (void)_setToYearState;
- (void)_animationComplete;
- (double)animationDuration;
- (void)animateToYearViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToMonthViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareWithYearViewController:(id)arg1 monthViewController:(id)arg2 selectedDate:(id)arg3 calendar:(id)arg4 yearToMonth:(_Bool)arg5;
- (id)_createLabelWithFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

