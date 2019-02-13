//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDictionary;

@protocol ServerInterface
- (void)setDoneReply:(void (^)(void))arg1;
- (void)stopRunning;
- (void)startRunning:(void (^)(NSError *))arg1;
- (void)stopPrewarm;
- (void)prewarm:(void (^)(NSError *))arg1;
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)loadHapticPattern:(NSDictionary *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)loadHapticSequence:(NSData *)arg1 reply:(void (^)(unsigned long long, unsigned long long, NSError *))arg2;
- (void)loadHapticEvent:(NSDictionary *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)requestChannels:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)getHapticLatency:(void (^)(double, NSError *))arg1;
- (void)releaseClientResources;
- (void)allocateClientResources:(void (^)(CAXPCObject *, unsigned int, NSError *))arg1;
- (void)getClientID:(void (^)(unsigned long long))arg1;
@end

