//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDCFNetworkTaskMetrics : PBCodable <NSCopying>
{
    unsigned long long _didCompleteWithError;
    long long _error;
    unsigned long long _numberOfRedirects;
    unsigned long long _numberOfRetries;
    unsigned long long _taskResume;
    unsigned long long _timestamp;
    long long _underlyingError;
    long long _underlyingErrorDomain;
    NSString *_activityUUID;
    int _taskType;
    NSMutableArray *_transactionMetrics;
    _Bool _isBackground;
    struct {
        unsigned int didCompleteWithError:1;
        unsigned int error:1;
        unsigned int numberOfRedirects:1;
        unsigned int numberOfRetries:1;
        unsigned int taskResume:1;
        unsigned int timestamp:1;
        unsigned int underlyingError:1;
        unsigned int underlyingErrorDomain:1;
        unsigned int taskType:1;
        unsigned int isBackground:1;
    } _has;
}

+ (Class)transactionMetricsType;
@property(retain, nonatomic) NSMutableArray *transactionMetrics; // @synthesize transactionMetrics=_transactionMetrics;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) long long underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(nonatomic) long long underlyingError; // @synthesize underlyingError=_underlyingError;
@property(nonatomic) long long error; // @synthesize error=_error;
@property(nonatomic) unsigned long long numberOfRedirects; // @synthesize numberOfRedirects=_numberOfRedirects;
@property(nonatomic) unsigned long long numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(nonatomic) unsigned long long didCompleteWithError; // @synthesize didCompleteWithError=_didCompleteWithError;
@property(nonatomic) unsigned long long taskResume; // @synthesize taskResume=_taskResume;
@property(retain, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
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
- (id)transactionMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionMetricsCount;
- (void)addTransactionMetrics:(id)arg1;
- (void)clearTransactionMetrics;
@property(nonatomic) _Bool hasIsBackground;
- (int)StringAsTaskType:(id)arg1;
- (id)taskTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTaskType;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;
@property(nonatomic) _Bool hasUnderlyingErrorDomain;
@property(nonatomic) _Bool hasUnderlyingError;
@property(nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasNumberOfRedirects;
@property(nonatomic) _Bool hasNumberOfRetries;
@property(nonatomic) _Bool hasDidCompleteWithError;
@property(nonatomic) _Bool hasTaskResume;
@property(readonly, nonatomic) _Bool hasActivityUUID;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

