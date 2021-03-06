//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayVideoSessionEndedOnServer : PBCodable <NSCopying>
{
    double _bandwidthMax;
    double _bandwidthMean;
    double _bandwidthStdDev;
    unsigned long long _timestamp;
    unsigned int _duration;
    unsigned int _fastFowards;
    unsigned int _localFairPlayCount;
    unsigned int _localNonFairPlayCount;
    unsigned int _pauses;
    unsigned int _readyToPlayMs;
    int _reason;
    unsigned int _remoteFairPlayCount;
    unsigned int _remoteNonFairPlayCount;
    unsigned int _rewinds;
    NSString *_sessionUUID;
    unsigned int _stallCount;
    struct {
        unsigned int bandwidthMax:1;
        unsigned int bandwidthMean:1;
        unsigned int bandwidthStdDev:1;
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int fastFowards:1;
        unsigned int localFairPlayCount:1;
        unsigned int localNonFairPlayCount:1;
        unsigned int pauses:1;
        unsigned int readyToPlayMs:1;
        unsigned int reason:1;
        unsigned int remoteFairPlayCount:1;
        unsigned int remoteNonFairPlayCount:1;
        unsigned int rewinds:1;
        unsigned int stallCount:1;
    } _has;
}

@property(nonatomic) unsigned int remoteNonFairPlayCount; // @synthesize remoteNonFairPlayCount=_remoteNonFairPlayCount;
@property(nonatomic) unsigned int remoteFairPlayCount; // @synthesize remoteFairPlayCount=_remoteFairPlayCount;
@property(nonatomic) unsigned int localNonFairPlayCount; // @synthesize localNonFairPlayCount=_localNonFairPlayCount;
@property(nonatomic) unsigned int localFairPlayCount; // @synthesize localFairPlayCount=_localFairPlayCount;
@property(nonatomic) double bandwidthMax; // @synthesize bandwidthMax=_bandwidthMax;
@property(nonatomic) double bandwidthMean; // @synthesize bandwidthMean=_bandwidthMean;
@property(nonatomic) double bandwidthStdDev; // @synthesize bandwidthStdDev=_bandwidthStdDev;
@property(nonatomic) unsigned int stallCount; // @synthesize stallCount=_stallCount;
@property(nonatomic) unsigned int readyToPlayMs; // @synthesize readyToPlayMs=_readyToPlayMs;
@property(nonatomic) unsigned int fastFowards; // @synthesize fastFowards=_fastFowards;
@property(nonatomic) unsigned int rewinds; // @synthesize rewinds=_rewinds;
@property(nonatomic) unsigned int pauses; // @synthesize pauses=_pauses;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRemoteNonFairPlayCount;
@property(nonatomic) _Bool hasRemoteFairPlayCount;
@property(nonatomic) _Bool hasLocalNonFairPlayCount;
@property(nonatomic) _Bool hasLocalFairPlayCount;
@property(nonatomic) _Bool hasBandwidthMax;
@property(nonatomic) _Bool hasBandwidthMean;
@property(nonatomic) _Bool hasBandwidthStdDev;
@property(nonatomic) _Bool hasStallCount;
@property(nonatomic) _Bool hasReadyToPlayMs;
@property(nonatomic) _Bool hasFastFowards;
@property(nonatomic) _Bool hasRewinds;
@property(nonatomic) _Bool hasPauses;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

