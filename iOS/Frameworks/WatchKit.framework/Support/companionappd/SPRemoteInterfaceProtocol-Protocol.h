//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, NSUUID;

@protocol SPRemoteInterfaceProtocol <NSObject>
- (void)layoutDirection:(long long)arg1;
- (void)preferredContentSizeCategory:(NSString *)arg1;
- (void)dataInterfaceWillResignActive:(NSString *)arg1;
- (void)dataInterfaceDidBecomeActive:(NSString *)arg1;
- (void)applicationDidReceiveNotification:(NSData *)arg1 clientIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(unsigned long long))arg3;
- (void)applicationHandleWatchTaskKeys:(NSDictionary *)arg1 reasonForSnapshot:(unsigned long long)arg2 visibleVCID:(NSString *)arg3 barTaskUUID:(NSUUID *)arg4 clientIdentifier:(NSString *)arg5;
- (void)applicationIsStillActive;
- (void)applicationWillResignActive:(NSString *)arg1;
- (void)applicationDidBecomeActive:(NSString *)arg1;
- (void)applicationDidFinishConnecting:(NSString *)arg1;
- (void)applicationContentsDidReset:(NSString *)arg1;
- (void)applicationDidTerminate:(NSString *)arg1;
- (void)receiveProtoData:(NSData *)arg1 fromIdentifier:(NSString *)arg2;
- (void)receiveData:(NSData *)arg1 fromIdentifier:(NSString *)arg2;

@optional
- (void)replyTimingData:(NSDictionary *)arg1;
- (void)receiveNativeComplicationRequest:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *))arg2;
@end

