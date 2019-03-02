/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:54:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSVolumeDidUpdateMessage : PBCodable <NSCopying> {

	int _sessionIdentifier;
	float _volume;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVolume; 
@property (assign,nonatomic) float volume;                           //@synthesize volume=_volume - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)setHasVolume:(BOOL)arg1 ;
-(BOOL)hasVolume;
-(BOOL)hasSessionIdentifier;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sessionIdentifier;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
