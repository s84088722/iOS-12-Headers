//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CKDPZoneCapabilities : PBCodable <NSCopying>
{
    _Bool _atomicSaves;
    _Bool _ckql;
    _Bool _fetchChanges;
    _Bool _sharing;
    struct {
        unsigned int atomicSaves:1;
        unsigned int ckql:1;
        unsigned int fetchChanges:1;
        unsigned int sharing:1;
    } _has;
}

@property(nonatomic) _Bool ckql; // @synthesize ckql=_ckql;
@property(nonatomic) _Bool sharing; // @synthesize sharing=_sharing;
@property(nonatomic) _Bool fetchChanges; // @synthesize fetchChanges=_fetchChanges;
@property(nonatomic) _Bool atomicSaves; // @synthesize atomicSaves=_atomicSaves;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCkql;
@property(nonatomic) _Bool hasSharing;
@property(nonatomic) _Bool hasFetchChanges;
@property(nonatomic) _Bool hasAtomicSaves;

@end

