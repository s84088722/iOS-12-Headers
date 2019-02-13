//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSTimer;

@interface TimerOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    double _timeInterval;
    NSTimer *_timer;
}

+ (id)operationWithTimeInterval:(double)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) _Bool isFinished; // @synthesize isFinished=_finished;
@property(readonly, nonatomic) _Bool isExecuting; // @synthesize isExecuting=_executing;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (void)timerFired:(id)arg1;
- (void)start;
- (void)finish;
- (_Bool)isAsynchronous;
- (id)init;
- (id)initWithTimeInterval:(double)arg1;

@end

