/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _NMRPlaybackQueue : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	int _location;
	SCD_Struct_NM7 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
+(Class)contentItemType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setHasLocation:(BOOL)arg1 ;
-(void)setContentItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentItems;
-(unsigned long long)contentItemsCount;
-(void)clearContentItems;
-(void)addContentItem:(id)arg1 ;
-(id)contentItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)location;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(int)arg1 ;
@end

