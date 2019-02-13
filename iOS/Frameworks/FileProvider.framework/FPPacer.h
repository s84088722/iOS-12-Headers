//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPPacer : NSObject
{
    double _lastFireTime;
    double _minFireInterval;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    // Error parsing type: Ai, name: _sourceResumed
    CDUnknownBlockType _eventBlock;
}

@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
- (void).cxx_destruct;
- (void)_fire;
- (void)_scheduleNextFire;
- (double)_computeNextTime;
- (void)suspend;
- (void)resume;
- (void)signal;
- (void)dealloc;
- (id)initWithName:(id)arg1 queue:(id)arg2 minFireInterval:(double)arg3;

@end

