//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBFeedEngagementMenuExposure : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSString *_feedId;
    int _feedMenuType;
    int _feedType;
    NSString *_referencedArticleId;
    struct {
        unsigned int feedMenuType:1;
        unsigned int feedType:1;
    } _has;
}

@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFeedMenuType;
@property(nonatomic) int feedMenuType; // @synthesize feedMenuType=_feedMenuType;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;

@end

