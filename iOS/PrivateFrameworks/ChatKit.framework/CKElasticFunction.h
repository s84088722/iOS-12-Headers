//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKElasticFunction : NSObject
{
    double _currentValue;
    double _elastic;
    double _oldForce;
    double _velocity;
    double _friction;
    double _tension;
}

+ (id)functionWithTension:(double)arg1 friction:(double)arg2 initialValue:(double)arg3;
@property(nonatomic) double tension; // @synthesize tension=_tension;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double input; // @synthesize input=_currentValue;
- (void)step;
@property(readonly, nonatomic) double velocity;
@property(readonly, nonatomic) double output;
- (id)init;

@end

