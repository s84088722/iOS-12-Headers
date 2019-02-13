//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RideBookingApplicationFinder-Protocol.h"
#import "_MXExtensionManagerDelegate-Protocol.h"

@class NSArray, NSString, _MXExtensionManager;
@protocol OS_dispatch_queue, RideBookingApplicationFinderDelegate;

__attribute__((visibility("hidden")))
@interface RideBookingApplicationFinder : NSObject <_MXExtensionManagerDelegate, RideBookingApplicationFinder>
{
    _Bool _waitingForExtensionManagerToLoad;
    id <RideBookingApplicationFinderDelegate> delegate;
    _MXExtensionManager *_extensionManager;
    NSArray *_applications;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(nonatomic) _Bool waitingForExtensionManagerToLoad; // @synthesize waitingForExtensionManagerToLoad=_waitingForExtensionManagerToLoad;
@property(retain, nonatomic) _MXExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
@property(nonatomic) __weak id <RideBookingApplicationFinderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)readyToLoadApps;
- (void)extensionManager:(id)arg1 didFailWithError:(id)arg2;
- (void)extensionManager:(id)arg1 didUpdateAvailableExtensions:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

