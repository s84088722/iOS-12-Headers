//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitCloudSync : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _dataSyncState;
    unsigned int _fetchCount;
    unsigned int _homeManagerFetchCount;
    unsigned int _homeManagerUploadCount;
    unsigned int _homeZoneFetchCount;
    unsigned int _homeZoneUploadCount;
    unsigned int _pushCount;
    NSMutableArray *_topErrors;
    NSMutableArray *_topReasons;
    unsigned int _uploadCount;
    unsigned int _uploadErrorCount;
    _Bool _hasDecryptionFailed;
    _Bool _lastDecryptionFailed;
    _Bool _uploadMaximumDelayReached;
    struct {
        unsigned int timestamp:1;
        unsigned int dataSyncState:1;
        unsigned int fetchCount:1;
        unsigned int homeManagerFetchCount:1;
        unsigned int homeManagerUploadCount:1;
        unsigned int homeZoneFetchCount:1;
        unsigned int homeZoneUploadCount:1;
        unsigned int pushCount:1;
        unsigned int uploadCount:1;
        unsigned int uploadErrorCount:1;
        unsigned int hasDecryptionFailed:1;
        unsigned int lastDecryptionFailed:1;
        unsigned int uploadMaximumDelayReached:1;
    } _has;
}

+ (Class)topErrorsType;
+ (Class)topReasonsType;
@property(nonatomic) unsigned int homeZoneUploadCount; // @synthesize homeZoneUploadCount=_homeZoneUploadCount;
@property(nonatomic) unsigned int homeManagerUploadCount; // @synthesize homeManagerUploadCount=_homeManagerUploadCount;
@property(nonatomic) unsigned int homeZoneFetchCount; // @synthesize homeZoneFetchCount=_homeZoneFetchCount;
@property(nonatomic) unsigned int homeManagerFetchCount; // @synthesize homeManagerFetchCount=_homeManagerFetchCount;
@property(nonatomic) _Bool lastDecryptionFailed; // @synthesize lastDecryptionFailed=_lastDecryptionFailed;
@property(nonatomic) _Bool hasDecryptionFailed; // @synthesize hasDecryptionFailed=_hasDecryptionFailed;
@property(nonatomic) _Bool uploadMaximumDelayReached; // @synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached;
@property(retain, nonatomic) NSMutableArray *topErrors; // @synthesize topErrors=_topErrors;
@property(retain, nonatomic) NSMutableArray *topReasons; // @synthesize topReasons=_topReasons;
@property(nonatomic) unsigned int uploadErrorCount; // @synthesize uploadErrorCount=_uploadErrorCount;
@property(nonatomic) unsigned int uploadCount; // @synthesize uploadCount=_uploadCount;
@property(nonatomic) unsigned int fetchCount; // @synthesize fetchCount=_fetchCount;
@property(nonatomic) unsigned int pushCount; // @synthesize pushCount=_pushCount;
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
@property(nonatomic) _Bool hasHomeZoneUploadCount;
@property(nonatomic) _Bool hasHomeManagerUploadCount;
@property(nonatomic) _Bool hasHomeZoneFetchCount;
@property(nonatomic) _Bool hasHomeManagerFetchCount;
- (int)StringAsDataSyncState:(id)arg1;
- (id)dataSyncStateAsString:(int)arg1;
@property(nonatomic) _Bool hasDataSyncState;
@property(nonatomic) int dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property(nonatomic) _Bool hasLastDecryptionFailed;
@property(nonatomic) _Bool hasHasDecryptionFailed;
@property(nonatomic) _Bool hasUploadMaximumDelayReached;
- (id)topErrorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topErrorsCount;
- (void)addTopErrors:(id)arg1;
- (void)clearTopErrors;
- (id)topReasonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topReasonsCount;
- (void)addTopReasons:(id)arg1;
- (void)clearTopReasons;
@property(nonatomic) _Bool hasUploadErrorCount;
@property(nonatomic) _Bool hasUploadCount;
@property(nonatomic) _Bool hasFetchCount;
@property(nonatomic) _Bool hasPushCount;
@property(nonatomic) _Bool hasTimestamp;

@end

