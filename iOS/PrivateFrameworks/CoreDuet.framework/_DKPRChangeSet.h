//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _DKPRChangeSet : PBCodable <NSCopying>
{
    NSMutableArray *_deleteEventIDs;
    NSMutableArray *_events;
}

+ (Class)deleteEventIDType;
+ (Class)eventsType;
@property(retain, nonatomic) NSMutableArray *deleteEventIDs; // @synthesize deleteEventIDs=_deleteEventIDs;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
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
- (id)deleteEventIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)deleteEventIDsCount;
- (void)addDeleteEventID:(id)arg1;
- (void)clearDeleteEventIDs;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;

@end

