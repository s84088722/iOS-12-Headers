//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewControllerTransition.h>

@class UINavigationController;

@interface PUNavigationTransition : PUViewControllerTransition
{
    _Bool _wasStatusBarHiddenBeforeTransition;
    double _pushDuration;
    double _popDuration;
    UINavigationController *_navigationController;
    long long __operation;
}

+ (_Bool)shouldCrossFadeBottomBarsForNavigationController:(id)arg1;
+ (id)animationControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 inNavigationController:(id)arg4;
@property(nonatomic, setter=_setOperation:) long long _operation; // @synthesize _operation=__operation;
@property(nonatomic) _Bool wasStatusBarHiddenBeforeTransition; // @synthesize wasStatusBarHiddenBeforeTransition=_wasStatusBarHiddenBeforeTransition;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) double popDuration; // @synthesize popDuration=_popDuration;
@property(readonly, nonatomic) double pushDuration; // @synthesize pushDuration=_pushDuration;
- (void).cxx_destruct;
- (void)completeInteractiveOperation:(long long)arg1 finished:(_Bool)arg2;
- (void)transitionWillAnimateOperation:(long long)arg1 interactive:(_Bool)arg2;
- (void)transitionDidStartOperation:(long long)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)transitionWillStartOperation:(long long)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)didCompleteTransitionAnimation;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)imageModulationIntensityDidChange;
- (id)initWithPushDuration:(double)arg1 popDuration:(double)arg2;
- (id)initWithDuration:(double)arg1;

@end

