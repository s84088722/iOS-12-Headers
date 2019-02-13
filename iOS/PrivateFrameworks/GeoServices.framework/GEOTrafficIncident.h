//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncident : PBCodable <NSCopying>
{
    double _endTime;
    double _lastUpdated;
    double _startTime;
    long long _uID;
    NSString *_info;
    NSString *_location;
    NSString *_title;
    int _type;
    int _vertexCount;
    int _vertexOffset;
    struct {
        unsigned int endTime:1;
        unsigned int lastUpdated:1;
        unsigned int startTime:1;
        unsigned int uID:1;
        unsigned int type:1;
        unsigned int vertexCount:1;
        unsigned int vertexOffset:1;
    } _has;
}

@property(nonatomic) double lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) int vertexOffset; // @synthesize vertexOffset=_vertexOffset;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long uID; // @synthesize uID=_uID;
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
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasLastUpdated;
@property(nonatomic) _Bool hasEndTime;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) _Bool hasVertexCount;
@property(nonatomic) _Bool hasVertexOffset;
@property(readonly, nonatomic) _Bool hasLocation;
@property(readonly, nonatomic) _Bool hasInfo;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasUID;

@end

