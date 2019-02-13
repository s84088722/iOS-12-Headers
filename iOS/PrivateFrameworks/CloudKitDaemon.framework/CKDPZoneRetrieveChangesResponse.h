//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveChangesResponse : PBCodable <NSCopying>
{
    NSMutableArray *_changedZones;
    int _status;
    NSData *_syncContinuationToken;
    CDStruct_47fe53f2 _has;
}

+ (Class)changedZonesType;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
@property(retain, nonatomic) NSMutableArray *changedZones; // @synthesize changedZones=_changedZones;
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
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;
- (id)changedZonesAtIndex:(unsigned long long)arg1;
- (unsigned long long)changedZonesCount;
- (void)addChangedZones:(id)arg1;
- (void)clearChangedZones;

@end

