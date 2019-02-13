//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitIconDataSource-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface MSPTransitStorageIcon : PBCodable <GEOTransitIconDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _cartoID;
    unsigned int _defaultTransitType;
    unsigned int _iconAttributeKey;
    unsigned int _iconAttributeValue;
    long long _iconType;
    struct {
        unsigned int cartoID:1;
        unsigned int defaultTransitType:1;
        unsigned int iconAttributeKey:1;
        unsigned int iconAttributeValue:1;
        unsigned int iconType:1;
    } _has;
}

@property(nonatomic) unsigned int iconAttributeValue; // @synthesize iconAttributeValue=_iconAttributeValue;
@property(nonatomic) unsigned int iconAttributeKey; // @synthesize iconAttributeKey=_iconAttributeKey;
@property(nonatomic) unsigned int defaultTransitType; // @synthesize defaultTransitType=_defaultTransitType;
@property(nonatomic) unsigned int cartoID; // @synthesize cartoID=_cartoID;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasIconAttributeValue;
@property(nonatomic) _Bool hasIconAttributeKey;
@property(nonatomic) _Bool hasDefaultTransitType;
@property(nonatomic) _Bool hasCartoID;
- (long long)StringAsIconType:(id)arg1;
- (id)iconTypeAsString:(long long)arg1;
@property(nonatomic) _Bool hasIconType;
- (id)initWithIcon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

