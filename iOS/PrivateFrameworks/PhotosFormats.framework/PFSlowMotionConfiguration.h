//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PFSlowMotionRampConfiguration;

@interface PFSlowMotionConfiguration : NSObject
{
    float _volumeDuringSlowMotion;
    float _volumeDuringRampToSlowMotion;
    PFSlowMotionRampConfiguration *_rampDown;
    PFSlowMotionRampConfiguration *_rampUp;
}

@property(readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampUp; // @synthesize rampUp=_rampUp;
@property(readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampDown; // @synthesize rampDown=_rampDown;
@property(readonly, nonatomic) float volumeDuringRampToSlowMotion; // @synthesize volumeDuringRampToSlowMotion=_volumeDuringRampToSlowMotion;
@property(readonly, nonatomic) float volumeDuringSlowMotion; // @synthesize volumeDuringSlowMotion=_volumeDuringSlowMotion;
- (void).cxx_destruct;
- (id)init;

@end

