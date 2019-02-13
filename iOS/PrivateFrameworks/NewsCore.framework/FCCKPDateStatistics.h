//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPDate;

@interface FCCKPDateStatistics : PBCodable <NSCopying>
{
    FCCKPDate *_creation;
    FCCKPDate *_modification;
}

@property(retain, nonatomic) FCCKPDate *modification; // @synthesize modification=_modification;
@property(retain, nonatomic) FCCKPDate *creation; // @synthesize creation=_creation;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasModification;
@property(readonly, nonatomic) _Bool hasCreation;
- (void)dealloc;

@end

