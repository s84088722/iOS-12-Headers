//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface AFUIDebugCrashMoverService : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

- (void).cxx_destruct;
- (const char *)_errorDescriptionForXPCObject:(id)arg1;
@property(readonly, nonatomic, getter=_connection) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void)moveLogsWithExtensions:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

