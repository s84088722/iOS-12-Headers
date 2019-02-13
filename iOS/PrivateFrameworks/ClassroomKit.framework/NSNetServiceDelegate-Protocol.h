//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSData, NSDictionary, NSInputStream, NSNetService, NSOutputStream;

@protocol NSNetServiceDelegate <NSObject>

@optional
- (void)netService:(NSNetService *)arg1 didAcceptConnectionWithInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
- (void)netService:(NSNetService *)arg1 didUpdateTXTRecordData:(NSData *)arg2;
- (void)netServiceDidStop:(NSNetService *)arg1;
- (void)netService:(NSNetService *)arg1 didNotResolve:(NSDictionary *)arg2;
- (void)netServiceDidResolveAddress:(NSNetService *)arg1;
- (void)netServiceWillResolve:(NSNetService *)arg1;
- (void)netService:(NSNetService *)arg1 didNotPublish:(NSDictionary *)arg2;
- (void)netServiceDidPublish:(NSNetService *)arg1;
- (void)netServiceWillPublish:(NSNetService *)arg1;
@end

