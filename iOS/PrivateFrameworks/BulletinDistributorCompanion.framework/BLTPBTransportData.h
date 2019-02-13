//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSData;

@interface BLTPBTransportData : PBCodable <NSCopying>
{
    unsigned long long _sequenceNumber;
    NSData *_md5;
    NSData *_sessionIdentifier;
    unsigned int _sessionState;
    _Bool _isInitialSequenceNumber;
    struct {
        unsigned int sequenceNumber:1;
        unsigned int sessionState:1;
        unsigned int isInitialSequenceNumber:1;
    } _has;
}

+ (id)transportDataWithSequenceNumberManager:(id)arg1;
@property(retain, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) NSData *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) _Bool isInitialSequenceNumber; // @synthesize isInitialSequenceNumber=_isInitialSequenceNumber;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
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
@property(readonly, nonatomic) _Bool hasMd5;
@property(nonatomic) _Bool hasSessionState;
@property(readonly, nonatomic) _Bool hasSessionIdentifier;
@property(nonatomic) _Bool hasIsInitialSequenceNumber;
@property(nonatomic) _Bool hasSequenceNumber;
- (long long)setSequenceNumberOnManager:(id)arg1;
- (unsigned long long)backwardsCompatibleSessionState;
- (id)sessionUUID;

@end

