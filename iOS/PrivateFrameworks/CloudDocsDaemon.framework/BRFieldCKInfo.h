//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSString;

@interface BRFieldCKInfo : PBCodable <PQLValuable, NSCopying>
{
    NSString *_etag;
    NSString *_etagBeforeCrossZoneMove;
    _Bool _knownToServer;
    _Bool _wasCached;
    struct {
        unsigned int knownToServer:1;
        unsigned int wasCached:1;
    } _has;
}

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
@property(retain, nonatomic) NSString *etagBeforeCrossZoneMove; // @synthesize etagBeforeCrossZoneMove=_etagBeforeCrossZoneMove;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) _Bool wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic) _Bool knownToServer; // @synthesize knownToServer=_knownToServer;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasEtagBeforeCrossZoneMove;
@property(readonly, nonatomic) _Bool hasEtag;
@property(nonatomic) _Bool hasWasCached;
@property(nonatomic) _Bool hasKnownToServer;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)setCKInfoFieldsInRecord:(id)arg1;
- (void)markMovedToCloudDocsZone;
- (id)initWithRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

