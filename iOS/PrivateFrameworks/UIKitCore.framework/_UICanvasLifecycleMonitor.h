//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _UICanvas;
@protocol _UICanvasUILifecycleStateMonitoring;

__attribute__((visibility("hidden")))
@interface _UICanvasLifecycleMonitor : NSObject
{
    _UICanvas<_UICanvasUILifecycleStateMonitoring> *_canvas;
}

+ (id)compatabilityLifecycleMonitorForCanvas:(id)arg1;
+ (id)lifecycleMonitorForCanvas:(id)arg1;
@property(nonatomic) __weak _UICanvas<_UICanvasUILifecycleStateMonitoring> *canvas; // @synthesize canvas=_canvas;
- (void).cxx_destruct;
- (void)didResumeUnderLock;
- (void)willSuspendUnderLock;
- (void)didResumeForEventsOnly;
- (void)willSuspendForEventsOnly;
- (void)deactivateEventsOnly:(_Bool)arg1 withContext:(id)arg2 forceExit:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activateEventsOnly:(_Bool)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCanvas:(id)arg1;

@end

