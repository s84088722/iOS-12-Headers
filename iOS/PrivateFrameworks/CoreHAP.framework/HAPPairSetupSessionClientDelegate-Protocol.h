//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/HAPPairSetupSessionDelegate-Protocol.h>

@class HAPPairSetupSession;

@protocol HAPPairSetupSessionClientDelegate <HAPPairSetupSessionDelegate>
- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(void (^)(NSString *, NSError *))arg2;

@optional
- (_Bool)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;
- (void)pairSetupSessionDidReceiveInvalidSetupCode:(HAPPairSetupSession *)arg1;
@end

