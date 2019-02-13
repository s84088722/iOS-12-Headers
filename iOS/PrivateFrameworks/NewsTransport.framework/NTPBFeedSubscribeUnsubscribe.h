//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBFeedSubscribeUnsubscribe : PBCodable <NSCopying>
{
    long long _previousArticlePublisherArticleVersion;
    NSString *_articleId;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    int _displayRank;
    int _feedCellHostType;
    int _feedCellSection;
    NSString *_feedId;
    int _feedSubscriptionOrigin;
    int _feedType;
    NSData *_feedViewExposureId;
    int _feedViewPresentationReason;
    NSString *_groupFeedId;
    int _groupType;
    NSData *_groupViewExposureId;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _recommendationBrickType;
    NSString *_searchString;
    int _subscribeUnsubscribeLocation;
    int _subscribeUnsubscribeSurfaceReason;
    NSMutableArray *_subscribedFeedIds;
    int _userAction;
    _Bool _cameFromGroup;
    _Bool _isPaidSubscriberToFeed;
    struct {
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int displayRank:1;
        unsigned int feedCellHostType:1;
        unsigned int feedCellSection:1;
        unsigned int feedSubscriptionOrigin:1;
        unsigned int feedType:1;
        unsigned int feedViewPresentationReason:1;
        unsigned int groupType:1;
        unsigned int recommendationBrickType:1;
        unsigned int subscribeUnsubscribeLocation:1;
        unsigned int subscribeUnsubscribeSurfaceReason:1;
        unsigned int userAction:1;
        unsigned int cameFromGroup:1;
        unsigned int isPaidSubscriberToFeed:1;
    } _has;
}

+ (Class)subscribedFeedIdsType;
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property(retain, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(retain, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) _Bool isPaidSubscriberToFeed; // @synthesize isPaidSubscriberToFeed=_isPaidSubscriberToFeed;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(nonatomic) _Bool cameFromGroup; // @synthesize cameFromGroup=_cameFromGroup;
@property(retain, nonatomic) NSMutableArray *subscribedFeedIds; // @synthesize subscribedFeedIds=_subscribedFeedIds;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) int displayRank; // @synthesize displayRank=_displayRank;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
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
@property(readonly, nonatomic) _Bool hasGroupViewExposureId;
@property(nonatomic) _Bool hasPreviousArticlePublisherArticleVersion;
- (int)StringAsFeedSubscriptionOrigin:(id)arg1;
- (id)feedSubscriptionOriginAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedSubscriptionOrigin;
@property(nonatomic) int feedSubscriptionOrigin; // @synthesize feedSubscriptionOrigin=_feedSubscriptionOrigin;
@property(readonly, nonatomic) _Bool hasPreviousArticleVersion;
@property(readonly, nonatomic) _Bool hasPreviousArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasSubscribeUnsubscribeSurfaceReason;
@property(nonatomic) int subscribeUnsubscribeSurfaceReason; // @synthesize subscribeUnsubscribeSurfaceReason=_subscribeUnsubscribeSurfaceReason;
- (int)StringAsRecommendationBrickType:(id)arg1;
- (id)recommendationBrickTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRecommendationBrickType;
@property(nonatomic) int recommendationBrickType; // @synthesize recommendationBrickType=_recommendationBrickType;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(nonatomic) _Bool hasIsPaidSubscriberToFeed;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) _Bool hasGroupFeedId;
@property(nonatomic) _Bool hasCameFromGroup;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscribedFeedIdsCount;
- (void)addSubscribedFeedIds:(id)arg1;
- (void)clearSubscribedFeedIds;
@property(readonly, nonatomic) _Bool hasSearchString;
@property(nonatomic) _Bool hasDisplayRank;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
- (int)StringAsFeedCellHostType:(id)arg1;
- (id)feedCellHostTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellHostType;
@property(nonatomic) int feedCellHostType; // @synthesize feedCellHostType=_feedCellHostType;
- (int)StringAsFeedCellSection:(id)arg1;
- (id)feedCellSectionAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedCellSection;
@property(nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
- (int)StringAsFeedViewPresentationReason:(id)arg1;
- (id)feedViewPresentationReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedViewPresentationReason;
@property(nonatomic) int feedViewPresentationReason; // @synthesize feedViewPresentationReason=_feedViewPresentationReason;
@property(nonatomic) _Bool hasSubscribeUnsubscribeLocation;
@property(nonatomic) int subscribeUnsubscribeLocation; // @synthesize subscribeUnsubscribeLocation=_subscribeUnsubscribeLocation;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(nonatomic) _Bool hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;

@end

