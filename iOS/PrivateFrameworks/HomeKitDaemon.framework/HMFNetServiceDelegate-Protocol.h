//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFNetService, NSArray, NSDictionary;

@protocol HMFNetServiceDelegate <NSObject>

@optional
- (void)netService:(HMFNetService *)arg1 didUpdateTXTRecord:(NSDictionary *)arg2;
- (void)netService:(HMFNetService *)arg1 didUpdateAddresses:(NSArray *)arg2;
@end

