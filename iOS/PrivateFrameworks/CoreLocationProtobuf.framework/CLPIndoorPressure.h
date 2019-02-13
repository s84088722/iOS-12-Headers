//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPIndoorPressure : PBCodable <NSCopying>
{
    double _timestamp;
    float _pressure;
    float _temperature;
    struct {
        unsigned int timestamp:1;
        unsigned int pressure:1;
        unsigned int temperature:1;
    } _has;
}

@property(nonatomic) float temperature; // @synthesize temperature=_temperature;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTemperature;
@property(nonatomic) _Bool hasPressure;
@property(nonatomic) _Bool hasTimestamp;

@end

