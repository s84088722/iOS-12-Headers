//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface AXUIClientMessenger : NSObject
{
    NSString *_clientIdentifier;
    NSObject<OS_xpc_object> *_connection;
}

+ (id)clientMessengerWithIdentifier:(id)arg1;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 error:(id *)arg3;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 targetAccessQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithClientIdentifier:(id)arg1 connection:(id)arg2;
- (id)init;

@end
