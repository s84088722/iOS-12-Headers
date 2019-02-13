//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMActivityAlarm : NSObject
{
    _Bool fIsValid;
    struct __CFRunLoop *fRunLoop;
    NSObject<OS_dispatch_queue> *fQueue;
    CDUnknownBlockType fHandler;
    unsigned int _trigger;
    double _duration;
}

+ (id)activityAlarmInfo;
+ (_Bool)activityAlarmAvailable;
@property(nonatomic) unsigned int trigger; // @synthesize trigger=_trigger;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)fire;
- (_Bool)isValid;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onRunLoop:(struct __CFRunLoop *)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithTrigger:(unsigned int)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end

