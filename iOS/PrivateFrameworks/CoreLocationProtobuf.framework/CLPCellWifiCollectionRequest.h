//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSMutableArray;

@interface CLPCellWifiCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_cdmaCellTowerLocations;
    NSMutableArray *_cellTowerLocations;
    NSMutableArray *_lteCellTowerLocations;
    CLPMeta *_meta;
    NSMutableArray *_scdmaCellTowerLocations;
    NSMutableArray *_wifiAPLocations;
}

+ (Class)scdmaCellTowerLocationType;
+ (Class)wifiAPLocationType;
+ (Class)lteCellTowerLocationType;
+ (Class)cdmaCellTowerLocationType;
+ (Class)cellTowerLocationType;
@property(retain, nonatomic) NSMutableArray *scdmaCellTowerLocations; // @synthesize scdmaCellTowerLocations=_scdmaCellTowerLocations;
@property(retain, nonatomic) NSMutableArray *wifiAPLocations; // @synthesize wifiAPLocations=_wifiAPLocations;
@property(retain, nonatomic) NSMutableArray *lteCellTowerLocations; // @synthesize lteCellTowerLocations=_lteCellTowerLocations;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowerLocations; // @synthesize cdmaCellTowerLocations=_cdmaCellTowerLocations;
@property(retain, nonatomic) NSMutableArray *cellTowerLocations; // @synthesize cellTowerLocations=_cellTowerLocations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)scdmaCellTowerLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)scdmaCellTowerLocationsCount;
- (void)addScdmaCellTowerLocation:(id)arg1;
- (void)clearScdmaCellTowerLocations;
- (id)wifiAPLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)wifiAPLocationsCount;
- (void)addWifiAPLocation:(id)arg1;
- (void)clearWifiAPLocations;
- (id)lteCellTowerLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)lteCellTowerLocationsCount;
- (void)addLteCellTowerLocation:(id)arg1;
- (void)clearLteCellTowerLocations;
- (id)cdmaCellTowerLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)cdmaCellTowerLocationsCount;
- (void)addCdmaCellTowerLocation:(id)arg1;
- (void)clearCdmaCellTowerLocations;
- (id)cellTowerLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)cellTowerLocationsCount;
- (void)addCellTowerLocation:(id)arg1;
- (void)clearCellTowerLocations;

@end

