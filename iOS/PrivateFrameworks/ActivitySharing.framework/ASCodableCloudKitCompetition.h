//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableCloudKitDateComponents, NSData;

@interface ASCodableCloudKitCompetition : PBCodable <NSCopying>
{
    CDStruct_5df41632 _opponentScores;
    CDStruct_95bda58d _preferredVictoryBadgeStyles;
    CDStruct_5df41632 _scores;
    long long _currentCacheIndex;
    long long _maximumNumberOfPointsPerDay;
    ASCodableCloudKitDateComponents *_durationDateComponents;
    ASCodableCloudKitDateComponents *_startDateComponents;
    NSData *_uuid;
    struct {
        unsigned int currentCacheIndex:1;
        unsigned int maximumNumberOfPointsPerDay:1;
    } _has;
}

@property(nonatomic) long long maximumNumberOfPointsPerDay; // @synthesize maximumNumberOfPointsPerDay=_maximumNumberOfPointsPerDay;
@property(retain, nonatomic) ASCodableCloudKitDateComponents *durationDateComponents; // @synthesize durationDateComponents=_durationDateComponents;
@property(retain, nonatomic) ASCodableCloudKitDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;
@property(nonatomic) long long currentCacheIndex; // @synthesize currentCacheIndex=_currentCacheIndex;
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
@property(nonatomic) _Bool hasMaximumNumberOfPointsPerDay;
- (void)setPreferredVictoryBadgeStyles:(int *)arg1 count:(unsigned long long)arg2;
- (int)preferredVictoryBadgeStylesAtIndex:(unsigned long long)arg1;
- (void)addPreferredVictoryBadgeStyles:(int)arg1;
- (void)clearPreferredVictoryBadgeStyles;
@property(readonly, nonatomic) int *preferredVictoryBadgeStyles;
@property(readonly, nonatomic) unsigned long long preferredVictoryBadgeStylesCount;
@property(readonly, nonatomic) _Bool hasDurationDateComponents;
@property(readonly, nonatomic) _Bool hasStartDateComponents;
- (void)setOpponentScores:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)opponentScoresAtIndex:(unsigned long long)arg1;
- (void)addOpponentScores:(long long)arg1;
- (void)clearOpponentScores;
@property(readonly, nonatomic) long long *opponentScores;
@property(readonly, nonatomic) unsigned long long opponentScoresCount;
- (void)setScores:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)scoresAtIndex:(unsigned long long)arg1;
- (void)addScores:(long long)arg1;
- (void)clearScores;
@property(readonly, nonatomic) long long *scores;
@property(readonly, nonatomic) unsigned long long scoresCount;
@property(nonatomic) _Bool hasCurrentCacheIndex;
@property(readonly, nonatomic) _Bool hasUuid;
- (void)dealloc;

@end

