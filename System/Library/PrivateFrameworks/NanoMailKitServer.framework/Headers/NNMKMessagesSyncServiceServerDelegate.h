/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NNMKMessagesSyncServiceServerDelegate <NSObject>
@required
-(void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
-(void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2;
-(void)messagesSyncServiceServer:(id)arg1 didUpdateMailboxSelection:(id)arg2;
-(void)messagesSyncServiceServerSpaceBecameAvailable:(id)arg1;
-(void)messagesSyncServiceServerConnectivityChanged:(id)arg1;

@end

