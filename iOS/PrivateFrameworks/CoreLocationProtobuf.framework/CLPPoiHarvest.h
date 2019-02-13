//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPPoiTriggerEvent, NSMutableArray;

@interface CLPPoiHarvest : PBCodable <NSCopying>
{
    NSMutableArray *_accessPoints;
    NSMutableArray *_locations;
    CLPPoiTriggerEvent *_triggerEvent;
}

+ (Class)accessPointsType;
+ (Class)locationsType;
@property(retain, nonatomic) NSMutableArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) CLPPoiTriggerEvent *triggerEvent; // @synthesize triggerEvent=_triggerEvent;
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
- (id)accessPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessPointsCount;
- (void)addAccessPoints:(id)arg1;
- (void)clearAccessPoints;
- (id)locationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)addLocations:(id)arg1;
- (void)clearLocations;

@end
