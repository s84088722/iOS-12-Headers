//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOMapsTransitWidget : PBCodable <NSCopying>
{
    int _tappedItemIndex;
    NSMutableArray *_transitIncidentItems;
    int _transitMessageType;
    _Bool _everExpanded;
    _Bool _initiallyExpanded;
    struct {
        unsigned int tappedItemIndex:1;
        unsigned int transitMessageType:1;
        unsigned int everExpanded:1;
        unsigned int initiallyExpanded:1;
    } _has;
}

+ (Class)transitIncidentItemType;
@property(nonatomic) _Bool everExpanded; // @synthesize everExpanded=_everExpanded;
@property(nonatomic) _Bool initiallyExpanded; // @synthesize initiallyExpanded=_initiallyExpanded;
@property(retain, nonatomic) NSMutableArray *transitIncidentItems; // @synthesize transitIncidentItems=_transitIncidentItems;
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
@property(nonatomic) _Bool hasTappedItemIndex;
@property(nonatomic) int tappedItemIndex; // @synthesize tappedItemIndex=_tappedItemIndex;
@property(nonatomic) _Bool hasEverExpanded;
@property(nonatomic) _Bool hasInitiallyExpanded;
- (id)transitIncidentItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitIncidentItemsCount;
- (void)addTransitIncidentItem:(id)arg1;
- (void)clearTransitIncidentItems;
- (int)StringAsTransitMessageType:(id)arg1;
- (id)transitMessageTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransitMessageType;
@property(nonatomic) int transitMessageType; // @synthesize transitMessageType=_transitMessageType;

@end

