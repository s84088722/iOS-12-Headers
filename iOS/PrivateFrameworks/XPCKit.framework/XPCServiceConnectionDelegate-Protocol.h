//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XPCKit/NSObject-Protocol.h>

@class XPCRequest, XPCServiceConnection;

@protocol XPCServiceConnectionDelegate <NSObject>
- (void)XPCServiceConnectionDidDisconnect:(XPCServiceConnection *)arg1;
- (void)XPCServiceConnection:(XPCServiceConnection *)arg1 didReceiveRequest:(XPCRequest *)arg2 sequenceNumber:(unsigned long long)arg3;
@end

