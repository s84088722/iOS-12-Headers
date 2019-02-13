//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKAnimation.h>

@interface VKDynamicAnimation : VKAnimation
{
    CDUnknownBlockType _dynamicStepHandler;
    double _lastTimestamp;
    _Bool _resuming;
}

@property(copy, nonatomic) CDUnknownBlockType dynamicStepHandler; // @synthesize dynamicStepHandler=_dynamicStepHandler;
- (void)onTimerFired:(double)arg1;
- (void)resume;
- (void)pause;
- (void)stopAnimation:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (void)setRunsForever:(_Bool)arg1;
- (_Bool)runsForever;

@end

