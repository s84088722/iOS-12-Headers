//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEODestinationInfo : PBCodable <NSCopying>
{
    _Bool _hasDisplayAddress;
    _Bool _hasDisplayName;
    _Bool _hasSpokenAddress;
    _Bool _hasSpokenName;
    struct {
        unsigned int hasDisplayAddress:1;
        unsigned int hasDisplayName:1;
        unsigned int hasSpokenAddress:1;
        unsigned int hasSpokenName:1;
    } _has;
}

@property(nonatomic) _Bool hasSpokenAddress; // @synthesize hasSpokenAddress=_hasSpokenAddress;
@property(nonatomic) _Bool hasDisplayAddress; // @synthesize hasDisplayAddress=_hasDisplayAddress;
@property(nonatomic) _Bool hasSpokenName; // @synthesize hasSpokenName=_hasSpokenName;
@property(nonatomic) _Bool hasDisplayName; // @synthesize hasDisplayName=_hasDisplayName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHasSpokenAddress;
@property(nonatomic) _Bool hasHasDisplayAddress;
@property(nonatomic) _Bool hasHasSpokenName;
@property(nonatomic) _Bool hasHasDisplayName;

@end

