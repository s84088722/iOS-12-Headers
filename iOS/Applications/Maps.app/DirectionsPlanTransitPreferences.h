//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

__attribute__((visibility("hidden")))
@interface DirectionsPlanTransitPreferences : PBCodable <NSCopying>
{
    _Bool _avoidBusRoutes;
    _Bool _avoidFerryRoutes;
    _Bool _avoidMetroLightRailRoutes;
    _Bool _avoidRailRoutes;
    struct {
        unsigned int avoidBusRoutes:1;
        unsigned int avoidFerryRoutes:1;
        unsigned int avoidMetroLightRailRoutes:1;
        unsigned int avoidRailRoutes:1;
    } _has;
}

@property(nonatomic) _Bool avoidFerryRoutes; // @synthesize avoidFerryRoutes=_avoidFerryRoutes;
@property(nonatomic) _Bool avoidRailRoutes; // @synthesize avoidRailRoutes=_avoidRailRoutes;
@property(nonatomic) _Bool avoidMetroLightRailRoutes; // @synthesize avoidMetroLightRailRoutes=_avoidMetroLightRailRoutes;
@property(nonatomic) _Bool avoidBusRoutes; // @synthesize avoidBusRoutes=_avoidBusRoutes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAvoidFerryRoutes;
@property(nonatomic) _Bool hasAvoidRailRoutes;
@property(nonatomic) _Bool hasAvoidMetroLightRailRoutes;
@property(nonatomic) _Bool hasAvoidBusRoutes;
- (long long)avoidedTransitModes;
- (void)_populateFromAvoidedModes:(long long)arg1;
- (id)initWithGEOTransitOptions:(id)arg1;

@end

