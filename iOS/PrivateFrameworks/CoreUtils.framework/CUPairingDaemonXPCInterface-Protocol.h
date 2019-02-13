//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CUPairedPeer;

@protocol CUPairingDaemonXPCInterface
- (void)startMonitoringWithOptions:(unsigned long long)arg1;
- (void)showWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)removePairedPeer:(CUPairedPeer *)arg1 options:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)savePairedPeer:(CUPairedPeer *)arg1 options:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)findPairedPeer:(CUPairedPeer *)arg1 options:(unsigned long long)arg2 completion:(void (^)(CUPairedPeer *, NSError *))arg3;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(void (^)(CUPairingIdentity *, NSError *))arg2;
@end

