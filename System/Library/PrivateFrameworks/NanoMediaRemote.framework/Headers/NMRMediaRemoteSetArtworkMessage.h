/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteSetArtworkMessage, NSData, NSNumber, NSDate, NSString;

@interface NMRMediaRemoteSetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteSetArtworkMessage* _protobuf;

}

@property (nonatomic,readonly) NSData * jpegArtwork; 
@property (nonatomic,readonly) NSData * originalDigest; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 originIdentifier:(id)arg3 ;
-(id)protobufData;
-(NSDate *)serializationDate;
-(NSNumber *)originIdentifier;
-(NSData *)originalDigest;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 originIdentifier:(id)arg3 ;
-(NSData *)jpegArtwork;
@end
