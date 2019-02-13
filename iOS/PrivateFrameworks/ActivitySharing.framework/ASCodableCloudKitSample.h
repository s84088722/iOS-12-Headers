//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSData;

@interface ASCodableCloudKitSample : PBCodable <NSCopying>
{
    double _endDate;
    double _startDate;
    NSData *_uuid;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(readonly, nonatomic) _Bool hasUuid;

@end

