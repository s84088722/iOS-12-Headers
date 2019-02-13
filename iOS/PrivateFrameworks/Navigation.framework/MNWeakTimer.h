//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface MNWeakTimer : NSObject
{
    id _target;
    SEL _selector;
    NSTimer *_timer;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;
@property(readonly) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)_timerDidFire;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

