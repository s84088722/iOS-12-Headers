//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKAccountsSyncServiceServer, NNMKProtoAccountSourceType, NSDictionary, NSString;

@protocol NNMKAccountsSyncServiceServerDelegate <NSObject>
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didReceivedAccountAuthenticationStatus:(NSDictionary *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didChangeAccountSourceType:(NNMKProtoAccountSourceType *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
@end

