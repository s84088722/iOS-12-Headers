//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDBackingStoreModelObject, HMFMessage;

@protocol HMDBackingStoreObjectProtocol <NSObject>
- (void)transactionObjectRemoved:(HMDBackingStoreModelObject *)arg1 message:(HMFMessage *)arg2;
- (void)transactionObjectUpdated:(HMDBackingStoreModelObject *)arg1 newValues:(HMDBackingStoreModelObject *)arg2 message:(HMFMessage *)arg3;
@end

