//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPPulseData, CKDPShareIdentifier, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPPulseRequest : PBRequest <NSCopying>
{
    long long _lookbackWindowMillis;
    int _apnsEnv;
    NSString *_etag;
    CKDPPulseData *_pulseData;
    NSData *_pushToken;
    CKDPShareIdentifier *_shareId;
    _Bool _reset;
    struct {
        unsigned int lookbackWindowMillis:1;
        unsigned int apnsEnv:1;
        unsigned int reset:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) CKDPPulseData *pulseData; // @synthesize pulseData=_pulseData;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsApnsEnv:(id)arg1;
- (id)apnsEnvAsString:(int)arg1;
@property(nonatomic) _Bool hasApnsEnv;
@property(nonatomic) int apnsEnv; // @synthesize apnsEnv=_apnsEnv;
@property(nonatomic) _Bool hasLookbackWindowMillis;
@property(nonatomic) long long lookbackWindowMillis; // @synthesize lookbackWindowMillis=_lookbackWindowMillis;
@property(nonatomic) _Bool hasReset;
@property(nonatomic) _Bool reset; // @synthesize reset=_reset;
@property(readonly, nonatomic) _Bool hasPulseData;
@property(readonly, nonatomic) _Bool hasPushToken;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasShareId;

@end

