//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDDonationHandler : HMFObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
+ (id)sharedDonationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_removeIntentForActionSet:(id)arg1;
- (void)_donateIntent:(id)arg1 withActionSet:(id)arg2;
- (void)_donateActionSet:(id)arg1 withMessage:(id)arg2;
- (id)_init;
- (void)removeIntentForActionSet:(id)arg1;
- (void)donateActionSet:(id)arg1 withMessage:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

