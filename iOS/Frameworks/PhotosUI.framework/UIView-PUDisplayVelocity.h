//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (PUDisplayVelocity)
+ (void)_pu_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withInitialVelocity:(struct PUDisplayVelocity)arg5 usingSpringAnimation:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)pu_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 usingSpringWithDuration:(double)arg5 delay:(double)arg6 options:(unsigned long long)arg7 mass:(double)arg8 stiffness:(double)arg9 damping:(double)arg10 initialVelocity:(struct PUDisplayVelocity)arg11 completion:(CDUnknownBlockType)arg12;
+ (void)pu_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 usingDefaultDampedSpringWithDelay:(double)arg5 initialVelocity:(struct PUDisplayVelocity)arg6 options:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)pu_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct PUDisplayVelocity)arg8 options:(unsigned long long)arg9 completion:(CDUnknownBlockType)arg10;
@end

