//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VKAnimationRunner;

@interface VKAnimation : NSObject
{
    CDUnknownBlockType _completionHandler;
    NSString *_name;
    long long _priority;
    id <VKAnimationRunner> _runner;
    long long _state;
    float _frequency;
    _Bool _runsForever;
}

@property(nonatomic) float frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool runsForever; // @synthesize runsForever=_runsForever;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)onTimerFired:(double)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)stopAnimation:(_Bool)arg1;
- (void)transferToRunner:(id)arg1;
- (void)startWithRunner:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPriority:(long long)arg1;
- (id)initWithPriority:(long long)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
@property(readonly, nonatomic) _Bool timed;
@property(readonly, nonatomic) _Bool hasFrequency;
@property(nonatomic) double duration;
@property(readonly, nonatomic) _Bool running;

@end

