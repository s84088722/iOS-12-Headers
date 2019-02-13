//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface RCBlockScheduler : NSObject
{
    NSMutableArray *_blocks;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _start;
    CDUnknownBlockType _schedulerBlock;
    _Bool _suspended;
    double _interval;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_date;
}

@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)suspend;
- (id)init;

@end

