//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ASDPurchase, NSArray, NSNumber, NSURL;

@protocol ASDPurchaseServiceProtocol
- (void)startPurchase:(ASDPurchase *)arg1 withReplyHandler:(void (^)(ASDPurchaseResult *, NSError *))arg2;
- (void)checkPreflightForItemIdentifier:(NSNumber *)arg1 atURL:(NSURL *)arg2 withReplyHandler:(void (^)(_Bool, NSError *))arg3;
- (void)adoptableBundleIdentifiersWithReplyHandler:(void (^)(NSArray *))arg1;
- (void)adopt:(NSArray *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
@end

