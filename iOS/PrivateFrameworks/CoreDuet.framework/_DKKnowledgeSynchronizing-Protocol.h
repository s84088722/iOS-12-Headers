//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSString, _DKObject;
@protocol OS_dispatch_queue;

@protocol _DKKnowledgeSynchronizing
- (NSString *)sourceDeviceIdentityWithError:(id *)arg1;
- (NSString *)sourceDeviceIdentityFromObject:(_DKObject *)arg1 error:(id *)arg2;
- (_Bool)deleteRemoteState:(id *)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 responseQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(NSError *))arg4;
- (_Bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 error:(id *)arg3;
- (_Bool)synchronizeWithError:(id *)arg1;
@end

