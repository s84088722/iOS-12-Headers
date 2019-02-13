//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDTextItemDisplayConfig, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextItemContainer : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDTextItemDisplayConfig *_displayConf;
    NSMutableArray *_textItems;
}

+ (Class)textItemType;
@property(retain, nonatomic) GEOPDTextItemDisplayConfig *displayConf; // @synthesize displayConf=_displayConf;
@property(retain, nonatomic) NSMutableArray *textItems; // @synthesize textItems=_textItems;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDisplayConf;
- (id)textItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)textItemsCount;
- (void)addTextItem:(id)arg1;
- (void)clearTextItems;

@end

