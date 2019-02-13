//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPopularNearbySearchParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _maxResults;
    int _searchType;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    struct {
        unsigned int maxResults:1;
        unsigned int searchType:1;
    } _has;
}

@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
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
- (int)StringAsSearchType:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchType;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(nonatomic) _Bool hasMaxResults;

@end

