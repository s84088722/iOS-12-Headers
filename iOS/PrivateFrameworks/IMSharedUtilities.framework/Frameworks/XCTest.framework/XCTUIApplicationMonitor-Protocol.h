//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/NSObject-Protocol.h>

@class NSNumber, NSString, XCTApplicationStateSnapshot;

@protocol XCTUIApplicationMonitor <NSObject>
- (void)updatedApplicationStateSnapshot:(XCTApplicationStateSnapshot *)arg1;
- (void)applicationWithBundleID:(NSString *)arg1 didUpdatePID:(int)arg2 state:(unsigned long long)arg3;
- (void)processWithToken:(NSNumber *)arg1 exitedWithStatus:(int)arg2;
- (void)stopTrackingProcessWithToken:(NSNumber *)arg1;
- (void)crashInProcessWithBundleID:(NSString *)arg1 path:(NSString *)arg2 pid:(int)arg3 symbol:(NSString *)arg4;
@end

