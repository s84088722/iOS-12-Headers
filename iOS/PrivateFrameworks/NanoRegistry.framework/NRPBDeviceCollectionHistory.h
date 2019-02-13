//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NRPBSwitchRecordCollection, NSMutableArray;

@interface NRPBDeviceCollectionHistory : PBCodable <NSCopying>
{
    long long _startIndex;
    NSMutableArray *_historys;
    NRPBSwitchRecordCollection *_switchRecords;
    struct {
        unsigned int startIndex:1;
    } _has;
}

+ (Class)historyType;
@property(retain, nonatomic) NRPBSwitchRecordCollection *switchRecords; // @synthesize switchRecords=_switchRecords;
@property(retain, nonatomic) NSMutableArray *historys; // @synthesize historys=_historys;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
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
@property(readonly, nonatomic) _Bool hasSwitchRecords;
- (id)historyAtIndex:(unsigned long long)arg1;
- (unsigned long long)historysCount;
- (void)addHistory:(id)arg1;
- (void)clearHistorys;
@property(nonatomic) _Bool hasStartIndex;

@end

