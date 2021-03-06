//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, XCUIAccessibilityInterface;

@interface XCEventGenerator : NSObject
{
    id <XCUIAccessibilityInterface> _accessibilityInterface;
    unsigned long long _generation;
    struct __CFRunLoopObserver *_generationObserver;
    double _implicitConfirmationDelay;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

+ (id)sharedGenerator;
@property(readonly) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property double implicitConfirmationDelay; // @synthesize implicitConfirmationDelay=_implicitConfirmationDelay;
@property(readonly) struct __CFRunLoopObserver *generationObserver; // @synthesize generationObserver=_generationObserver;
@property unsigned long long generation; // @synthesize generation=_generation;
- (void).cxx_destruct;
- (double)rotateInRect:(struct CGRect)arg1 withRotation:(double)arg2 velocity:(double)arg3 orientation:(long long)arg4 handler:(CDUnknownBlockType)arg5;
- (double)pinchInRect:(struct CGRect)arg1 withScale:(double)arg2 velocity:(double)arg3 orientation:(long long)arg4 handler:(CDUnknownBlockType)arg5;
- (double)pressAtPoint:(struct CGPoint)arg1 forDuration:(double)arg2 liftAtPoint:(struct CGPoint)arg3 velocity:(double)arg4 orientation:(long long)arg5 name:(id)arg6 handler:(CDUnknownBlockType)arg7;
- (double)pressAtPoint:(struct CGPoint)arg1 forDuration:(double)arg2 orientation:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (double)tapAtTouchLocations:(id)arg1 numberOfTaps:(unsigned long long)arg2 orientation:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (double)forcePressAtPoint:(struct CGPoint)arg1 orientation:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_startEventSequenceWithSteppingCallback:(CDUnknownBlockType)arg1;
- (void)_scheduleCallback:(CDUnknownBlockType)arg1 afterInterval:(double)arg2;
@property(readonly) id <XCUIAccessibilityInterface> accessibilityInterface; // @synthesize accessibilityInterface=_accessibilityInterface;
- (id)initWithAccessibilityInterface:(id)arg1;
- (void)dealloc;

@end

