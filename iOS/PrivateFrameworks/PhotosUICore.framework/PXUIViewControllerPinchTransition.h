//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXUIViewControllerTransition.h>

@class PXPinchTracker, PXRegionOfInterest, UIPinchGestureRecognizer, UIView;
@protocol UIViewControllerContextTransitioning;

@interface PXUIViewControllerPinchTransition : PXUIViewControllerTransition
{
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    long long __state;
    id <UIViewControllerContextTransitioning> __transitionContext;
    UIView *__fromView;
    UIView *__toView;
    UIView *__fromSnapshotView;
    UIView *__toSnapshotView;
    UIView *__dimmingView;
    PXRegionOfInterest *__regionOfInterest;
    PXPinchTracker *__pinchTracker;
}

+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
@property(retain, nonatomic, setter=_setPinchTracker:) PXPinchTracker *_pinchTracker; // @synthesize _pinchTracker=__pinchTracker;
@property(retain, nonatomic, setter=_setRegionOfInterest:) PXRegionOfInterest *_regionOfInterest; // @synthesize _regionOfInterest=__regionOfInterest;
@property(retain, nonatomic, setter=_setDimmingView:) UIView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(retain, nonatomic, setter=_setToSnapshotView:) UIView *_toSnapshotView; // @synthesize _toSnapshotView=__toSnapshotView;
@property(retain, nonatomic, setter=_setFromSnapshotView:) UIView *_fromSnapshotView; // @synthesize _fromSnapshotView=__fromSnapshotView;
@property(retain, nonatomic, setter=_setToView:) UIView *_toView; // @synthesize _toView=__toView;
@property(retain, nonatomic, setter=_setFromView:) UIView *_fromView; // @synthesize _fromView=__fromView;
@property(retain, nonatomic, setter=_setTransitionContext:) id <UIViewControllerContextTransitioning> _transitionContext; // @synthesize _transitionContext=__transitionContext;
@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
- (void).cxx_destruct;
- (void)startInteractiveTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)isInteractive;
- (void)_update;
- (void)pinchGestureRecognizerDidChange;

@end

