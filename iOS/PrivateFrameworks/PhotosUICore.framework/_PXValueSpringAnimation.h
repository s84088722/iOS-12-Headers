//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/_PXValueAnimation.h>

@interface _PXValueSpringAnimation : _PXValueAnimation
{
    double _A;
    double _B;
    double _omega0;
}

+ (double)durationOfSpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5;
- (double)currentValue;
- (id)initWithFromValue:(double)arg1 spec:(struct _PXValueAnimationSpec)arg2;
- (id)initWithDuration:(double)arg1 spec:(struct _PXValueAnimationSpec)arg2;

@end

