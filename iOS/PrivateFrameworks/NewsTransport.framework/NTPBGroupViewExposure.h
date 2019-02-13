//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBGroupViewExposure : PBCodable <NSCopying>
{
    NSData *_articleViewingSessionId;
    int _curatedContentType;
    int _feedAutoSubscribeType;
    NSData *_feedViewExposureId;
    int _groupArticleCountInForYou;
    int _groupDisplayMode;
    int _groupDisplayRankInForYou;
    NSString *_groupExposedInLocationId;
    NSString *_groupExposedInSourceChannelId;
    NSString *_groupFeedId;
    int _groupFormationReason;
    int _groupLocation;
    int _groupLocationFeedType;
    int _groupPresentationReason;
    int _groupType;
    NSData *_groupViewExposureId;
    NSMutableArray *_groupedArticleIds;
    int _screenfulsFromTop;
    int _topStoryMandatoryArticleCount;
    int _topStoryOptionalArticleCount;
    _Bool _isSubscribedToGroupFeed;
    _Bool _reachedEndOfGroup;
    struct {
        unsigned int curatedContentType:1;
        unsigned int feedAutoSubscribeType:1;
        unsigned int groupArticleCountInForYou:1;
        unsigned int groupDisplayMode:1;
        unsigned int groupDisplayRankInForYou:1;
        unsigned int groupFormationReason:1;
        unsigned int groupLocation:1;
        unsigned int groupLocationFeedType:1;
        unsigned int groupPresentationReason:1;
        unsigned int groupType:1;
        unsigned int screenfulsFromTop:1;
        unsigned int topStoryMandatoryArticleCount:1;
        unsigned int topStoryOptionalArticleCount:1;
        unsigned int isSubscribedToGroupFeed:1;
        unsigned int reachedEndOfGroup:1;
    } _has;
}

+ (Class)groupedArticleIdsType;
@property(nonatomic) int screenfulsFromTop; // @synthesize screenfulsFromTop=_screenfulsFromTop;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSString *groupExposedInSourceChannelId; // @synthesize groupExposedInSourceChannelId=_groupExposedInSourceChannelId;
@property(retain, nonatomic) NSString *groupExposedInLocationId; // @synthesize groupExposedInLocationId=_groupExposedInLocationId;
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(nonatomic) _Bool reachedEndOfGroup; // @synthesize reachedEndOfGroup=_reachedEndOfGroup;
@property(nonatomic) int topStoryOptionalArticleCount; // @synthesize topStoryOptionalArticleCount=_topStoryOptionalArticleCount;
@property(nonatomic) int topStoryMandatoryArticleCount; // @synthesize topStoryMandatoryArticleCount=_topStoryMandatoryArticleCount;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(nonatomic) _Bool isSubscribedToGroupFeed; // @synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed;
@property(nonatomic) int groupArticleCountInForYou; // @synthesize groupArticleCountInForYou=_groupArticleCountInForYou;
@property(nonatomic) int groupDisplayRankInForYou; // @synthesize groupDisplayRankInForYou=_groupDisplayRankInForYou;
@property(retain, nonatomic) NSMutableArray *groupedArticleIds; // @synthesize groupedArticleIds=_groupedArticleIds;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasScreenfulsFromTop;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasGroupExposedInSourceChannelId;
@property(readonly, nonatomic) _Bool hasGroupExposedInLocationId;
- (int)StringAsGroupLocationFeedType:(id)arg1;
- (id)groupLocationFeedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupLocationFeedType;
@property(nonatomic) int groupLocationFeedType; // @synthesize groupLocationFeedType=_groupLocationFeedType;
- (int)StringAsGroupLocation:(id)arg1;
- (id)groupLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupLocation;
@property(nonatomic) int groupLocation; // @synthesize groupLocation=_groupLocation;
@property(nonatomic) _Bool hasGroupDisplayMode;
@property(nonatomic) int groupDisplayMode; // @synthesize groupDisplayMode=_groupDisplayMode;
@property(readonly, nonatomic) _Bool hasGroupViewExposureId;
- (int)StringAsCuratedContentType:(id)arg1;
- (id)curatedContentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCuratedContentType;
@property(nonatomic) int curatedContentType; // @synthesize curatedContentType=_curatedContentType;
@property(nonatomic) _Bool hasReachedEndOfGroup;
- (int)StringAsFeedAutoSubscribeType:(id)arg1;
- (id)feedAutoSubscribeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedAutoSubscribeType;
@property(nonatomic) int feedAutoSubscribeType; // @synthesize feedAutoSubscribeType=_feedAutoSubscribeType;
- (int)StringAsGroupFormationReason:(id)arg1;
- (id)groupFormationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupFormationReason;
@property(nonatomic) int groupFormationReason; // @synthesize groupFormationReason=_groupFormationReason;
- (int)StringAsGroupPresentationReason:(id)arg1;
- (id)groupPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupPresentationReason;
@property(nonatomic) int groupPresentationReason; // @synthesize groupPresentationReason=_groupPresentationReason;
@property(nonatomic) _Bool hasTopStoryOptionalArticleCount;
@property(nonatomic) _Bool hasTopStoryMandatoryArticleCount;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
@property(nonatomic) _Bool hasIsSubscribedToGroupFeed;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(nonatomic) _Bool hasGroupArticleCountInForYou;
@property(nonatomic) _Bool hasGroupDisplayRankInForYou;
- (id)groupedArticleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupedArticleIdsCount;
- (void)addGroupedArticleIds:(id)arg1;
- (void)clearGroupedArticleIds;
@property(readonly, nonatomic) _Bool hasGroupFeedId;

@end

