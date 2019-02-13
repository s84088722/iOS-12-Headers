//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol ODRDeveloperToolsProtocol <NSObject>
- (void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(void (^)(unsigned long long, NSError *))arg2;
- (void)getSimulatedBandwidthWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)registerManifest:(NSData *)arg1 forBundleID:(NSString *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)purgeTagWithName:(NSString *)arg1 inBundleWithID:(NSString *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)purgeAllTagsInBundleWithID:(NSString *)arg1 replyBlock:(void (^)(NSError *))arg2;
- (void)tagStatusForBundle:(NSString *)arg1 replyBlock:(void (^)(NSArray *, NSError *))arg2;
@end

