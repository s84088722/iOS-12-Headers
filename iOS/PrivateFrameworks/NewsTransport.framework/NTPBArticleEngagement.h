//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBArticleEngagement : PBCodable <NSCopying>
{
    long long _articleOpenedAtTimestamp;
    long long _eventTimestamp;
    int _articleEngagementType;
    NSString *_articleId;
    NSString *_channelId;
    NSString *_countryCode;
    NSData *_sessionId;
    NSString *_userId;
    int _utcOffset;
    _Bool _isPaidSubscriber;
    struct {
        unsigned int articleOpenedAtTimestamp:1;
        unsigned int eventTimestamp:1;
        unsigned int articleEngagementType:1;
        unsigned int utcOffset:1;
        unsigned int isPaidSubscriber:1;
    } _has;
}

@property(nonatomic) _Bool isPaidSubscriber; // @synthesize isPaidSubscriber=_isPaidSubscriber;
@property(nonatomic) long long articleOpenedAtTimestamp; // @synthesize articleOpenedAtTimestamp=_articleOpenedAtTimestamp;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) int utcOffset; // @synthesize utcOffset=_utcOffset;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(nonatomic) long long eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsPaidSubscriber;
@property(nonatomic) _Bool hasArticleOpenedAtTimestamp;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(nonatomic) _Bool hasUtcOffset;
@property(readonly, nonatomic) _Bool hasChannelId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasEventTimestamp;
@property(readonly, nonatomic) _Bool hasUserId;
@property(readonly, nonatomic) _Bool hasSessionId;
@property(nonatomic) _Bool hasArticleEngagementType;
@property(nonatomic) int articleEngagementType; // @synthesize articleEngagementType=_articleEngagementType;

@end

