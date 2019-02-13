//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/FBSDisplayObserving-Protocol.h>

@class AXMDisplay, FBSDisplayMonitor, NSString;
@protocol OS_dispatch_queue;

@interface AXMDisplayManager : NSObject <FBSDisplayObserving>
{
    NSObject<OS_dispatch_queue> *_queue;
    AXMDisplay *_queue_CoreAnimationMainDisplay;
    AXMDisplay *_queue_FrontBoardMainDisplay;
    _Bool _initialized;
    FBSDisplayMonitor *_displayMonitor;
    double _mobileGestaltOrientation;
}

@property(nonatomic) double mobileGestaltOrientation; // @synthesize mobileGestaltOrientation=_mobileGestaltOrientation;
@property(retain, nonatomic) FBSDisplayMonitor *displayMonitor; // @synthesize displayMonitor=_displayMonitor;
- (void).cxx_destruct;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)_updateDisplayPropertiesWithConfiguration:(id)arg1;
- (void)_updateDisplay:(id)arg1 withConfiguration:(id)arg2;
- (long long)_discreteOrientationForOrientation:(double)arg1;
- (void)_updateDisplay:(id)arg1 withCADisplay:(id)arg2;
- (id)_displayPropertiesFromMobileGestalt;
@property(readonly, nonatomic) AXMDisplay *coreAnimationMainDisplay;
@property(readonly, nonatomic) AXMDisplay *frontBoardMainDisplay;
@property(readonly, nonatomic) _Bool isInitialized;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initAndWaitForMainDisplayConfiguration;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

