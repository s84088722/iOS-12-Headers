//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOAbAssignInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _createdAtTimestamp;
    unsigned long long _relativeTimestamp;
    NSString *_abAssignId;
    struct {
        unsigned int createdAtTimestamp:1;
        unsigned int relativeTimestamp:1;
    } _has;
}

@property(nonatomic) unsigned long long relativeTimestamp; // @synthesize relativeTimestamp=_relativeTimestamp;
@property(retain, nonatomic) NSString *abAssignId; // @synthesize abAssignId=_abAssignId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRelativeTimestamp;
@property(readonly, nonatomic) _Bool hasAbAssignId;
- (void)refreshRelativeTimeStampWithEventTime:(double)arg1;
- (void)refreshRelativeTimeStamp;
- (id)initWithAbAssignId:(id)arg1 createdAtDate:(id)arg2;
@property(nonatomic) _Bool hasCreatedAtTimestamp;
@property(nonatomic) unsigned long long createdAtTimestamp;

@end

