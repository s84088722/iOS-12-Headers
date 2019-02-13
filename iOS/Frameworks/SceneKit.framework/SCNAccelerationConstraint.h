//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@interface SCNAccelerationConstraint : SCNConstraint
{
    float _maximumLinearVelocity;
    float _maximumLinearAcceleration;
    float _decelerationDistance;
    float _damping;
}

+ (_Bool)supportsSecureCoding;
+ (id)accelerationConstraint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) double damping;
@property(nonatomic) double decelerationDistance;
@property(nonatomic) double maximumLinearAcceleration;
@property(nonatomic) double maximumLinearVelocity;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

