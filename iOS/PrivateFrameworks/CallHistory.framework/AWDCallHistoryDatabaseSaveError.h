//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@class NSString;

@interface AWDCallHistoryDatabaseSaveError : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _domain;
    unsigned int _error;
    NSString *_table;
    CDStruct_6e486683 _has;
}

@property(retain, nonatomic) NSString *table; // @synthesize table=_table;
@property(nonatomic) unsigned int error; // @synthesize error=_error;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) _Bool hasTable;
@property(nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasTimestamp;

@end

