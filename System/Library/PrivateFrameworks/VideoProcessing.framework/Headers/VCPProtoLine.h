/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoPoint;

@interface VCPProtoLine : PBCodable <NSCopying> {

	VCPProtoPoint* _end;
	VCPProtoPoint* _start;

}

@property (nonatomic,retain) VCPProtoPoint * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) VCPProtoPoint * end;                //@synthesize end=_end - In the implementation block
+(id)lineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(CGPoint)startPointValue;
-(CGPoint)endPointValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VCPProtoPoint *)start;
-(id)dictionaryRepresentation;
-(void)setStart:(VCPProtoPoint *)arg1 ;
-(VCPProtoPoint *)end;
-(void)setEnd:(VCPProtoPoint *)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
