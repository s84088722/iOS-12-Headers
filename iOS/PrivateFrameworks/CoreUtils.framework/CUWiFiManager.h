//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CURetrier, NSString;
@protocol OS_dispatch_queue;

@interface CUWiFiManager : NSObject
{
    _Bool _activateCalled;
    _Bool _activated;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    _Bool _updating;
    _Bool _wifiAutoJoinMonitorEnabled;
    _Bool _wifiAutoJoinMonitorSetup;
    CURetrier *_wifiRetrier;
    _Bool _wakeOnWirelessEnabledChanged;
    _Bool _wakeOnWirelessEnabled;
    unsigned int _wifiFlags;
    int _wifiState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _wifiStateChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType wifiStateChangedHandler; // @synthesize wifiStateChangedHandler=_wifiStateChangedHandler;
@property(readonly, nonatomic) int wifiState; // @synthesize wifiState=_wifiState;
@property(readonly, nonatomic) unsigned int wifiFlags; // @synthesize wifiFlags=_wifiFlags;
@property(nonatomic) _Bool wakeOnWirelessEnabled; // @synthesize wakeOnWirelessEnabled=_wakeOnWirelessEnabled;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_wifiEnsureStopped;
- (void)_wifiEnsureStarted;
- (void)_update:(_Bool)arg1;
- (void)_update;
- (void)performUpdate:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_activateSafeInvokeBlock:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activate;
- (void)dealloc;
- (id)init;

@end

