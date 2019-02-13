//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>

@interface ASDAggregateClusterMappingData : PBCodable <NSCopying>
{
    CDStruct_95bda58d _clusterAppCounts;
    CDStruct_95bda58d _clusterIDs;
    CDStruct_95bda58d _clusterVersions;
    CDStruct_95bda58d _weightedAppForgroundUsages;
    CDStruct_95bda58d _weightedAppLaunches;
    int _encodingVersion;
}

@property(nonatomic) int encodingVersion; // @synthesize encodingVersion=_encodingVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setWeightedAppForgroundUsages:(int *)arg1 count:(unsigned long long)arg2;
- (int)weightedAppForgroundUsageAtIndex:(unsigned long long)arg1;
- (void)addWeightedAppForgroundUsage:(int)arg1;
- (void)clearWeightedAppForgroundUsages;
@property(readonly, nonatomic) int *weightedAppForgroundUsages;
@property(readonly, nonatomic) unsigned long long weightedAppForgroundUsagesCount;
- (void)setWeightedAppLaunches:(int *)arg1 count:(unsigned long long)arg2;
- (int)weightedAppLaunchesAtIndex:(unsigned long long)arg1;
- (void)addWeightedAppLaunches:(int)arg1;
- (void)clearWeightedAppLaunches;
@property(readonly, nonatomic) int *weightedAppLaunches;
@property(readonly, nonatomic) unsigned long long weightedAppLaunchesCount;
- (void)setClusterAppCounts:(int *)arg1 count:(unsigned long long)arg2;
- (int)clusterAppCountAtIndex:(unsigned long long)arg1;
- (void)addClusterAppCount:(int)arg1;
- (void)clearClusterAppCounts;
@property(readonly, nonatomic) int *clusterAppCounts;
@property(readonly, nonatomic) unsigned long long clusterAppCountsCount;
- (void)setClusterVersions:(int *)arg1 count:(unsigned long long)arg2;
- (int)clusterVersionAtIndex:(unsigned long long)arg1;
- (void)addClusterVersion:(int)arg1;
- (void)clearClusterVersions;
@property(readonly, nonatomic) int *clusterVersions;
@property(readonly, nonatomic) unsigned long long clusterVersionsCount;
- (void)setClusterIDs:(int *)arg1 count:(unsigned long long)arg2;
- (int)clusterIDAtIndex:(unsigned long long)arg1;
- (void)addClusterID:(int)arg1;
- (void)clearClusterIDs;
@property(readonly, nonatomic) int *clusterIDs;
@property(readonly, nonatomic) unsigned long long clusterIDsCount;
- (void)dealloc;

@end

