//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/NSObject-Protocol.h>

@class NSObject;
@protocol OS_xpc_object;

@protocol SSXPCCoding <NSObject>

@optional
- (NSObject<OS_xpc_object> *)copyXPCEncoding;
- (id)initWithXPCEncoding:(NSObject<OS_xpc_object> *)arg1;
@end

