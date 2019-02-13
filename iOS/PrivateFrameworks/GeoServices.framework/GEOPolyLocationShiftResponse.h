//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _parameters;
    double _radius;
    int _status;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setParameters:(double *)arg1 count:(unsigned long long)arg2;
- (double)parametersAtIndex:(unsigned long long)arg1;
- (void)addParameters:(double)arg1;
- (void)clearParameters;
@property(readonly, nonatomic) double *parameters;
@property(readonly, nonatomic) unsigned long long parametersCount;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
- (void)dealloc;

@end

