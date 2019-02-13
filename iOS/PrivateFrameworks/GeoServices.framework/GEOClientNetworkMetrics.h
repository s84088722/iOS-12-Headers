//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOClientNetworkMetrics : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _requestEnd;
    double _requestStart;
    int _httpResponseCode;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    NSString *_serviceIpAddress;
    NSMutableArray *_transactionMetrics;
    struct {
        unsigned int requestEnd:1;
        unsigned int requestStart:1;
        unsigned int httpResponseCode:1;
        unsigned int redirectCount:1;
        unsigned int requestDataSize:1;
        unsigned int responseDataSize:1;
    } _has;
}

+ (Class)transactionMetricsType;
@property(retain, nonatomic) NSMutableArray *transactionMetrics; // @synthesize transactionMetrics=_transactionMetrics;
@property(nonatomic) int redirectCount; // @synthesize redirectCount=_redirectCount;
@property(nonatomic) double requestEnd; // @synthesize requestEnd=_requestEnd;
@property(nonatomic) double requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) int responseDataSize; // @synthesize responseDataSize=_responseDataSize;
@property(nonatomic) int requestDataSize; // @synthesize requestDataSize=_requestDataSize;
@property(retain, nonatomic) NSString *serviceIpAddress; // @synthesize serviceIpAddress=_serviceIpAddress;
@property(nonatomic) int httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)transactionMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionMetricsCount;
- (void)addTransactionMetrics:(id)arg1;
- (void)clearTransactionMetrics;
@property(nonatomic) _Bool hasRedirectCount;
@property(nonatomic) _Bool hasRequestEnd;
@property(nonatomic) _Bool hasRequestStart;
@property(nonatomic) _Bool hasResponseDataSize;
@property(nonatomic) _Bool hasRequestDataSize;
@property(readonly, nonatomic) _Bool hasServiceIpAddress;
@property(nonatomic) _Bool hasHttpResponseCode;

@end

