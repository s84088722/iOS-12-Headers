//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDPushFilterChanged : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _changedReason;
    unsigned int _changedTopicsCount;
    NSString *_guid;
    NSString *_topic;
    struct {
        unsigned int timestamp:1;
        unsigned int changedReason:1;
        unsigned int changedTopicsCount:1;
    } _has;
}

@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) unsigned int changedTopicsCount; // @synthesize changedTopicsCount=_changedTopicsCount;
@property(nonatomic) unsigned int changedReason; // @synthesize changedReason=_changedReason;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTopic;
@property(nonatomic) _Bool hasChangedTopicsCount;
@property(nonatomic) _Bool hasChangedReason;
@property(readonly, nonatomic) _Bool hasGuid;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

