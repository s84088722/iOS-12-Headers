//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _CDPeriodicSchedulerJob : NSObject
{
    long long _period;
    double _interval;
    NSString *_jobName;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    NSObject<OS_xpc_object> *_executionCriteria;
    NSObject<OS_xpc_object> *_activity;
}

+ (id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)jobWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(retain) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(readonly) NSObject<OS_xpc_object> *executionCriteria; // @synthesize executionCriteria=_executionCriteria;
@property(readonly) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) NSString *jobName; // @synthesize jobName=_jobName;
@property(readonly) double interval; // @synthesize interval=_interval;
@property(readonly) long long period; // @synthesize period=_period;
- (void).cxx_destruct;
- (void)setExecutionCriteria:(id)arg1;
- (id)initWithPeriod:(long long)arg1 interval:(double)arg2 schedulerJobName:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)init;

@end

