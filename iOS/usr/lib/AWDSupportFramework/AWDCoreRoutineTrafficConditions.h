//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineTrafficConditions : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _precisionRecall;
    int _trafficDensity;
    _Bool _predictedLocationOfInterest;
    _Bool _vehicleConnected;
    struct {
        unsigned int timestamp:1;
        unsigned int precisionRecall:1;
        unsigned int trafficDensity:1;
        unsigned int predictedLocationOfInterest:1;
        unsigned int vehicleConnected:1;
    } _has;
}

@property(nonatomic) _Bool predictedLocationOfInterest; // @synthesize predictedLocationOfInterest=_predictedLocationOfInterest;
@property(nonatomic) _Bool vehicleConnected; // @synthesize vehicleConnected=_vehicleConnected;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPrecisionRecall:(id)arg1;
- (id)precisionRecallAsString:(int)arg1;
@property(nonatomic) _Bool hasPrecisionRecall;
@property(nonatomic) int precisionRecall; // @synthesize precisionRecall=_precisionRecall;
- (int)StringAsTrafficDensity:(id)arg1;
- (id)trafficDensityAsString:(int)arg1;
@property(nonatomic) _Bool hasTrafficDensity;
@property(nonatomic) int trafficDensity; // @synthesize trafficDensity=_trafficDensity;
@property(nonatomic) _Bool hasPredictedLocationOfInterest;
@property(nonatomic) _Bool hasVehicleConnected;
@property(nonatomic) _Bool hasTimestamp;

@end
