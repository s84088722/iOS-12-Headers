//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHome, HMFTimer, NSMutableSet, NSString, NSUUID;

@interface HMDDeviceNotificationHandler : HMFObject <HMFTimerDelegate>
{
    _Bool _delaySupported;
    HMDHome *_home;
    NSString *_destination;
    NSString *_requestIdentifier;
    NSMutableSet *_updatedCharacteristics;
    NSMutableSet *_updatedMediaProperties;
    HMFTimer *_coalesceTimer;
    HMFTimer *_delayTimer;
    NSUUID *_notificationUpdateIdentifier;
}

@property(retain, nonatomic) NSUUID *notificationUpdateIdentifier; // @synthesize notificationUpdateIdentifier=_notificationUpdateIdentifier;
@property(nonatomic) _Bool delaySupported; // @synthesize delaySupported=_delaySupported;
@property(retain, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(retain, nonatomic) HMFTimer *coalesceTimer; // @synthesize coalesceTimer=_coalesceTimer;
@property(retain, nonatomic) NSMutableSet *updatedMediaProperties; // @synthesize updatedMediaProperties=_updatedMediaProperties;
@property(retain, nonatomic) NSMutableSet *updatedCharacteristics; // @synthesize updatedCharacteristics=_updatedCharacteristics;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (id)_dispatchNotification;
- (id)_beginCoalesce:(_Bool)arg1;
- (id)sendNotificationForMediaProperties:(id)arg1 withRequestIdentifier:(id)arg2;
- (id)sendNotificationForCharacteristicChanges:(id)arg1 withRequestIdentifier:(id)arg2;
- (id)initWithDestination:(id)arg1 watchDevice:(_Bool)arg2 withRequestIdentifier:(id)arg3 home:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

