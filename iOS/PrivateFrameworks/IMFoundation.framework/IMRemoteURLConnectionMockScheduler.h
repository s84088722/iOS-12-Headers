//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface IMRemoteURLConnectionMockScheduler : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)scheduleMockResponse:(id)arg1;
- (void)scheduleMockResponse:(id)arg1 forURL:(id)arg2;
- (_Bool)_connect;
- (id)init;

@end

