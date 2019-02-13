//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IAPClientPortManager : NSObject
{
    NSMutableDictionary *_portList;
    NSObject<OS_dispatch_queue> *_portListQueue;
    _Bool _iaptransportdIsRunning;
    NSObject<OS_xpc_object> *_iaptransportdXPCConnection;
}

+ (id)sharedInstance;
- (void)reRegisterHandlers;
- (int)forwardAccessoryDataToIAP:(id)arg1 data:(const char *)arg2 length:(unsigned short)arg3;
- (int)unregisterSendDataHandler:(id)arg1;
- (int)registerSendDataHandler:(id)arg1 queue:(id)arg2 sendBlock:(CDUnknownBlockType)arg3;
- (void)sendData:(id)arg1 data:(char *)arg2 length:(unsigned short)arg3;
@property(nonatomic) _Bool iaptransportdIsRunning;
- (void)dealloc;
- (id)init;

@end

