//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPSecuritySessionEncryption, HMFNetAddress, NSData, NSMutableArray;

@interface HMDDataStreamSetup : NSObject
{
    HMFNetAddress *_remoteNetAddress;
    NSData *_controllerKeySalt;
    NSData *_accessoryKeySalt;
    long long _remoteTcpPort;
    HAPSecuritySessionEncryption *_sessionEncryption;
    NSMutableArray *_pendingBulkSendListeners;
}

@property(retain, nonatomic) NSMutableArray *pendingBulkSendListeners; // @synthesize pendingBulkSendListeners=_pendingBulkSendListeners;
@property(retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption; // @synthesize sessionEncryption=_sessionEncryption;
@property(nonatomic) long long remoteTcpPort; // @synthesize remoteTcpPort=_remoteTcpPort;
@property(retain, nonatomic) NSData *accessoryKeySalt; // @synthesize accessoryKeySalt=_accessoryKeySalt;
@property(retain, nonatomic) NSData *controllerKeySalt; // @synthesize controllerKeySalt=_controllerKeySalt;
@property(retain, nonatomic) HMFNetAddress *remoteNetAddress; // @synthesize remoteNetAddress=_remoteNetAddress;
- (void).cxx_destruct;
- (id)fullKeySalt;
- (_Bool)isComplete;
- (id)init;

@end

