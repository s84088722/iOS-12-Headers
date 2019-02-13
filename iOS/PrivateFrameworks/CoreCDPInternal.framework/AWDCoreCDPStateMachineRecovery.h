//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreCDPInternal/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreCDPStateMachineRecovery : PBCodable <NSCopying>
{
    long long _errorCode;
    long long _secretType;
    unsigned long long _timestamp;
    NSString *_errorDomain;
    _Bool _userDidReset;
    struct {
        unsigned int errorCode:1;
        unsigned int secretType:1;
        unsigned int timestamp:1;
        unsigned int userDidReset:1;
    } _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) _Bool userDidReset; // @synthesize userDidReset=_userDidReset;
@property(nonatomic) long long secretType; // @synthesize secretType=_secretType;
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
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;
@property(nonatomic) _Bool hasUserDidReset;
@property(nonatomic) _Bool hasSecretType;
@property(nonatomic) _Bool hasTimestamp;

@end

