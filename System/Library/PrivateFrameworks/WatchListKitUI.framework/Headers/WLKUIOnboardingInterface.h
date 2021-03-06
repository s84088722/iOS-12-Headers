//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <WatchListKitUI/WLKUIOnboardingInterface-Protocol.h>

@class NSArray, NSNumber, NSObject, WLKUIOnboardingController;
@protocol OS_dispatch_queue;

@interface WLKUIOnboardingInterface : IKJSObject <WLKUIOnboardingInterface>
{
    WLKUIOnboardingController *_controller;
    _Bool _hasSynced;
    NSNumber *_lastReportedOptedInValue;
    _Bool _isShowing;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dismiss;
- (void)showForBids:(id)arg1:(id)arg2:(id)arg3;
- (void)show:(id)arg1;
@property(readonly, nonatomic) _Bool isShowing;
- (void)fetchEligibleBids:(id)arg1;
@property(readonly, nonatomic) NSArray *eligibleBids;
@property(readonly, nonatomic, getter=isOptedInCached) NSNumber *optedInCached;
- (void)setOptedIn:(_Bool)arg1:(id)arg2;
- (void)fetchOptedIn:(id)arg1;
@property(readonly, nonatomic, getter=isOptedIn) _Bool optedIn;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end

