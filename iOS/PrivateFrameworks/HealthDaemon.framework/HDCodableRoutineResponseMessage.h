//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableRoutineLocationResponse, HDCodableRoutinePredictedLocationsResponse, NSString;

@interface HDCodableRoutineResponseMessage : PBCodable <NSCopying>
{
    NSString *_errorDescription;
    HDCodableRoutineLocationResponse *_fetchLocationResponse;
    HDCodableRoutinePredictedLocationsResponse *_fetchNextLocationResponse;
    NSString *_requestIdentifier;
    int _requestType;
    CDStruct_7c66fec0 _has;
}

@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) HDCodableRoutinePredictedLocationsResponse *fetchNextLocationResponse; // @synthesize fetchNextLocationResponse=_fetchNextLocationResponse;
@property(retain, nonatomic) HDCodableRoutineLocationResponse *fetchLocationResponse; // @synthesize fetchLocationResponse=_fetchLocationResponse;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
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
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(readonly, nonatomic) _Bool hasFetchNextLocationResponse;
@property(readonly, nonatomic) _Bool hasFetchLocationResponse;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;

@end

