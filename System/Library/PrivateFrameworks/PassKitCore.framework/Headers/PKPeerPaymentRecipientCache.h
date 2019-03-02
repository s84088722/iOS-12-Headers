//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, PKMapContainer;
@protocol OS_dispatch_queue;

@interface PKPeerPaymentRecipientCache : NSObject
{
    NSObject<OS_dispatch_queue> *_mapAccessQueue;
    PKMapContainer *_mapContainer;
    NSTimer *_mapNeedsWriteTimer;
}

+ (id)_instanceName;
+ (id)sharedCache;
- (void).cxx_destruct;
- (_Bool)_writeMapToDisk;
- (void)_setMapNeedsWrite;
- (void)_updateMapsFromDisk;
- (void)_handleDiskMapChangedNotification:(id)arg1;
- (void)_handlePurgedNotification:(id)arg1;
- (_Bool)_canWriteMap;
- (_Bool)_canReadMap;
- (id)_keyForRecipientAddress:(id)arg1;
- (void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)arg1;
- (_Bool)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)arg1;
- (_Bool)purgeCache;
- (void)purgeRecipientWithRecipientAddress:(id)arg1;
- (void)cacheRecipient:(id)arg1 forRecipientAddress:(id)arg2;
- (id)recipientForRecipientAddress:(id)arg1;
- (void)dealloc;
- (id)__init;
- (id)init;

@end
