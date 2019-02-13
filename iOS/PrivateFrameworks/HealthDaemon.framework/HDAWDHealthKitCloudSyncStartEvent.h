//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDAWDHealthKitCloudSyncEvent;

@interface HDAWDHealthKitCloudSyncStartEvent : PBCodable <NSCopying>
{
    unsigned long long _countSinceLastSuccess;
    unsigned long long _timeSinceLastSuccess;
    unsigned long long _timestamp;
    HDAWDHealthKitCloudSyncEvent *_event;
    struct {
        unsigned int countSinceLastSuccess:1;
        unsigned int timeSinceLastSuccess:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) unsigned long long timeSinceLastSuccess; // @synthesize timeSinceLastSuccess=_timeSinceLastSuccess;
@property(nonatomic) unsigned long long countSinceLastSuccess; // @synthesize countSinceLastSuccess=_countSinceLastSuccess;
@property(retain, nonatomic) HDAWDHealthKitCloudSyncEvent *event; // @synthesize event=_event;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) _Bool hasTimeSinceLastSuccess;
@property(nonatomic) _Bool hasCountSinceLastSuccess;
@property(readonly, nonatomic) _Bool hasEvent;
@property(nonatomic) _Bool hasTimestamp;

@end

