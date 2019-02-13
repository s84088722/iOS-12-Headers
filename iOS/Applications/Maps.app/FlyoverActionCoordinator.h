//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FlyoverActionCoordination-Protocol.h"

@class AppCoordinator, FlyoverContainerViewController, FlyoverTrayContaineeViewController, NSString;

__attribute__((visibility("hidden")))
@interface FlyoverActionCoordinator : NSObject <FlyoverActionCoordination>
{
    _Bool _flyoverRunning;
    AppCoordinator *_appCoordinator;
    FlyoverContainerViewController *_containerViewController;
    FlyoverTrayContaineeViewController *_trayContaineeViewController;
}

@property(nonatomic, getter=isFlyoverRunning) _Bool flyoverRunning; // @synthesize flyoverRunning=_flyoverRunning;
@property(retain, nonatomic) FlyoverTrayContaineeViewController *trayContaineeViewController; // @synthesize trayContaineeViewController=_trayContaineeViewController;
@property(nonatomic) __weak FlyoverContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
- (void).cxx_destruct;
- (void)flyoverTourCompleted;
- (void)flyoverTourResume;
- (void)flyoverTourPause;
- (void)flyoverTourPlay;
- (unsigned long long)originalLayoutForViewController:(id)arg1;
- (void)updateViewMode:(long long)arg1 animated:(_Bool)arg2;
- (long long)displayedViewMode;
- (void)viewControllerPresentTray:(id)arg1;
- (void)viewControllerEndFlyover:(id)arg1;
- (void)viewControllerDidEndFlyover:(id)arg1;
- (void)viewControllerDidStartFlyover:(id)arg1;
- (id)initWithContainerViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

