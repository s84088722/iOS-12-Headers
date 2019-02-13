//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DigitalTouchShared/NSCopying-Protocol.h>

@class NSData;

@interface ETPTap : PBCodable <NSCopying>
{
    NSData *_colors;
    NSData *_points;
    NSData *_timeDeltas;
}

@property(retain, nonatomic) NSData *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSData *points; // @synthesize points=_points;
@property(retain, nonatomic) NSData *timeDeltas; // @synthesize timeDeltas=_timeDeltas;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasColors;
@property(readonly, nonatomic) _Bool hasPoints;
@property(readonly, nonatomic) _Bool hasTimeDeltas;

@end

