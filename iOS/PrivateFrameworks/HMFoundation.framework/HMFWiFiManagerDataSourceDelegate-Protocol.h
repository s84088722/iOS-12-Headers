//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/NSObject-Protocol.h>

@protocol HMFWiFiManagerDataSource;

@protocol HMFWiFiManagerDataSourceDelegate <NSObject>
- (void)currentNetworkDidChangeForDataSource:(id <HMFWiFiManagerDataSource>)arg1;
- (void)dataSource:(id <HMFWiFiManagerDataSource>)arg1 didChangeLinkAvailability:(_Bool)arg2;
- (void)dataSource:(id <HMFWiFiManagerDataSource>)arg1 didChangeWoWState:(_Bool)arg2;
@end

