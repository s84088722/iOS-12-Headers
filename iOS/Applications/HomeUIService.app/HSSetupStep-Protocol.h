//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HFDiscoveredAccessory, NAFuture, NSError;
@protocol HSSetupStepDelegate;

@protocol HSSetupStep <NSObject>
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate;
@property(readonly, nonatomic) long long setupState;

@optional
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
- (void)setupDidFailWithError:(NSError *)arg1 forDiscoveredAccessory:(HFDiscoveredAccessory *)arg2;
@end

