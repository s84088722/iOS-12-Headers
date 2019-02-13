//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCoreConfiguration-Protocol.h>
#import <NewsCore/FCNewsAppConfiguration-Protocol.h>

@class FCForYouGroupsConfiguration, FCIAdConfiguration, FCNotificationsConfiguration, FCPersonalizationTreatment, FCPrefetchConfiguration, FCTopStoriesConfiguration, FCVideoGroupsConfig, FCWidgetConfig, NSArray, NSDate, NSDictionary, NSNumber, NSString, NTPBDiscoverMoreVideosInfo;

@interface FCNewsAppConfig : NSObject <FCNewsAppConfiguration, FCCoreConfiguration>
{
    _Bool _privateDataEncryptionAllowed;
    _Bool _privateDataEncryptionMigrationDesired;
    _Bool _privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
    _Bool _privateDataMigrationCleanupEnabled;
    FCVideoGroupsConfig *_forYouVideoGroupsConfig;
    NSDictionary *_endpointConfigsByEnvironment;
    FCNotificationsConfiguration *_notificationsConfig;
    FCTopStoriesConfiguration *_topStoriesConfig;
    FCForYouGroupsConfiguration *_forYouGroupsConfiguration;
    FCIAdConfiguration *_iAdConfig;
    FCPrefetchConfiguration *_prefetchConfig;
    NTPBDiscoverMoreVideosInfo *_shareDiscoverMoreVideosInfo;
    NSDictionary *_configDictionary;
    NSDictionary *_languageConfigDictionary;
    NSDate *_lastModificationDate;
    FCPersonalizationTreatment *_personalizationTreatment;
    NSArray *_externalAnalyticsConfigurations;
    NSDictionary *_analyticsContentTypeConfigsByContentTypeByEnvironment;
    FCWidgetConfig *_widgetConfig;
}

+ (id)overrideWidgetSectionConfigID;
+ (id)overrideForYouConfigID;
+ (id)languageConfigDictionaryForConfig:(id)arg1 preferredLanguageTags:(id)arg2;
+ (id)configurationWithData:(id)arg1 preferredLanguageTags:(id)arg2;
+ (id)defaultConfiguration;
@property(readonly, nonatomic) FCWidgetConfig *widgetConfig; // @synthesize widgetConfig=_widgetConfig;
@property(readonly, nonatomic) NSDictionary *analyticsContentTypeConfigsByContentTypeByEnvironment; // @synthesize analyticsContentTypeConfigsByContentTypeByEnvironment=_analyticsContentTypeConfigsByContentTypeByEnvironment;
@property(retain, nonatomic) NSArray *externalAnalyticsConfigurations; // @synthesize externalAnalyticsConfigurations=_externalAnalyticsConfigurations;
@property(readonly, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // @synthesize personalizationTreatment=_personalizationTreatment;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) NSDictionary *languageConfigDictionary; // @synthesize languageConfigDictionary=_languageConfigDictionary;
@property(readonly, nonatomic) NSDictionary *configDictionary; // @synthesize configDictionary=_configDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool enableBadgeInSpotlightTabBar;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) NSString *feedNavigationConfigJSON;
@property(readonly, nonatomic) _Bool shouldShowAlternateHeadlines;
@property(readonly, nonatomic) _Bool disableThumbnailsForArticleRecirculation;
@property(readonly, nonatomic) long long articleRecirculationPopularFeedQueryTimeRange;
@property(readonly, nonatomic) NSString *articleRecirculationComponentPlacementConfigJSON;
@property(readonly, nonatomic) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo; // @synthesize shareDiscoverMoreVideosInfo=_shareDiscoverMoreVideosInfo;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) unsigned long long trendingStyle;
@property(readonly, copy, nonatomic) NSArray *topStoriesPublishDates;
@property(readonly, nonatomic) _Bool terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property(readonly, nonatomic) long long autoRefreshMinimumInterval;
@property(readonly, nonatomic) long long stateRestorationAllowedTimeWindow;
@property(readonly, nonatomic) NSArray *mediaSharingBlacklistedChannelIDs;
@property(readonly, nonatomic) NSString *exploreArticleID;
@property(readonly, nonatomic) _Bool corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForSingleArticle;
@property(readonly, nonatomic) long long corryBarMaxArticleCountForArticleList;
@property(readonly, nonatomic) NSString *personalizationFavorabilityResourceId;
@property(readonly, nonatomic) NSString *personalizationWhitelistResourceId;
@property(readonly, nonatomic) NSString *personalizationUrlMappingResourceId;
@property(readonly, nonatomic) NSString *personalizationBundleIdMappingResourceId;
@property(readonly, nonatomic) long long analyticsEndpointMaxPayloadSize;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;
@property(readonly, nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property(readonly, nonatomic) double articleDiversificationSimilarityExpectationStart;
@property(readonly, nonatomic) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property(readonly, nonatomic) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property(readonly, nonatomic) NSString *widgetConfigID;
@property(readonly, nonatomic) double parsecPopulationCeiling;
@property(readonly, nonatomic) double parsecPopulationFloor;
@property(readonly, nonatomic) _Bool universalLinksEnabled;
@property(readonly, nonatomic) NSString *embedConfigurationAssetID;
@property(readonly, nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property(readonly, nonatomic) long long notificationArticleCacheTimeout;
@property(readonly, nonatomic) long long newFavoriteNotificationAlertsFrequency;
@property(readonly, nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property(readonly, nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay;
@property(readonly, nonatomic) long long subscriptionsPlacardPublisherFrequencyInSeconds;
@property(readonly, nonatomic) NSArray *topLevelRecommendedChannelTagIDs;
@property(readonly, nonatomic) NSArray *topLevelRecommendedTopicTagIDs;
@property(readonly, nonatomic) NSArray *topLevelCuratedTagIDs;
@property(readonly, nonatomic) FCPrefetchConfiguration *prefetchConfig; // @synthesize prefetchConfig=_prefetchConfig;
@property(readonly, nonatomic) FCIAdConfiguration *iAdConfig; // @synthesize iAdConfig=_iAdConfig;
@property(readonly, nonatomic) double tileProminenceScoreBalanceValue;
@property(readonly, nonatomic) double prerollLoadingTimeout;
@property(readonly, nonatomic) double interstitialAdLoadDelay;
@property(readonly, nonatomic) NSString *webEmbedContentBlockers;
@property(readonly, nonatomic) long long showCardNavHintMaxCount;
@property(readonly, nonatomic) long long autoScrollToTopFeedTimeout;
@property(readonly, nonatomic) NSArray *onboardingFeedIDs;
@property(readonly, nonatomic) long long minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) double delayBeforeRetryingDroppedFeeds;
@property(readonly, nonatomic) long long maxRetriesForDroppedFeeds;
@property(readonly, nonatomic) _Bool isSpecialEventsMicaAnimationDisabled;
- (id)analyticsEnvelopeContentTypeConfigsForEnvironment:(unsigned long long)arg1;
- (id)todayConfigWithQueueConfigs:(id)arg1 maxSlotCount:(unsigned long long)arg2;
- (id)personalizationTreatmentForFeldsparID:(id)arg1;
@property(readonly, nonatomic) long long singleChannelFeedMinFeedItemsPerRequest;
@property(readonly, nonatomic) long long singleTopicFeedMinFeedItemsPerRequest;
@property(readonly, nonatomic) long long expirePinnedArticlesAfter;
@property(readonly, nonatomic) NSNumber *currentTreatment;
@property(readonly, nonatomic) NSString *experimentalizableFieldPostfix;
@property(readonly, nonatomic) NSString *forYouRecordConfigID;
@property(readonly, nonatomic) long long minimumDistanceBetweenImageOnTopTiles;
@property(readonly, nonatomic) long long endOfArticleMaxInaccessiblePaidArticleCount;
@property(readonly, nonatomic) double endOfArticleMinPaidHeadlineRatio;
@property(readonly, copy, nonatomic) FCVideoGroupsConfig *forYouVideoGroupsConfig; // @synthesize forYouVideoGroupsConfig=_forYouVideoGroupsConfig;
@property(readonly, nonatomic) double minimumTrendingUnseenRatio;
@property(readonly, nonatomic) long long optionalTopStoriesRefreshRate;
@property(readonly, nonatomic) _Bool diversifyOptionalTopStories;
@property(readonly, nonatomic) long long maximumPaidSubscriptionGroupSizeiPhone;
@property(readonly, nonatomic) long long maximumPaidSubscriptionGroupSizeiPad;
@property(readonly, nonatomic) long long maximumTimesHeadlineInPaidSubscriptionGroup;
@property(readonly, nonatomic) long long maximumNumberOfExpiredPaidSubscriptionGroups;
@property(readonly, nonatomic) long long expiredPaidSubscriptionGroupCutoffTime;
@property(readonly, nonatomic) long long minimumDurationBetweenTrendingGroupsWeekend;
@property(readonly, nonatomic) long long minimumDurationBetweenTrendingGroupsWeekday;
@property(readonly, nonatomic) long long minimumDurationBetweenForYouGroupsWeekend;
@property(readonly, nonatomic) long long minimumDurationBetweenForYouGroupsWeekday;
@property(readonly, nonatomic) FCForYouGroupsConfiguration *forYouGroupsConfiguration; // @synthesize forYouGroupsConfiguration=_forYouGroupsConfiguration;
@property(readonly, nonatomic) NSArray *hiddenFeedIDs;
@property(readonly, nonatomic) long long articleRapidUpdatesTimeout;
@property(readonly, nonatomic) NSString *editorialGemsSectionID;
@property(readonly, nonatomic) NSString *editorialChannelID;
@property(readonly, nonatomic) NSString *savedStoriesTagID;
@property(readonly, nonatomic) NSString *featuredStoriesTagID;
@property(readonly, nonatomic) NSString *trendingTagID;
@property(readonly, nonatomic) NSString *briefingsTagID;
@property(readonly, nonatomic) NSString *moreVideosChannelID;
@property(readonly, nonatomic) NSString *topVideosChannelID;
@property(readonly, nonatomic) NSString *breakingNewsChannelID;
@property(readonly, nonatomic) FCTopStoriesConfiguration *topStoriesConfig; // @synthesize topStoriesConfig=_topStoriesConfig;
@property(readonly, nonatomic) NSDictionary *endpointConfigsByEnvironment; // @synthesize endpointConfigsByEnvironment=_endpointConfigsByEnvironment;
@property(readonly, nonatomic, getter=isPrivateDataMigrationCleanupEnabled) _Bool privateDataMigrationCleanupEnabled; // @synthesize privateDataMigrationCleanupEnabled=_privateDataMigrationCleanupEnabled;
@property(readonly, nonatomic) _Bool privateDataEncryptionMigrationRequiresAllDevicesRunningTigris; // @synthesize privateDataEncryptionMigrationRequiresAllDevicesRunningTigris=_privateDataEncryptionMigrationRequiresAllDevicesRunningTigris;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionMigrationDesired) _Bool privateDataEncryptionMigrationDesired; // @synthesize privateDataEncryptionMigrationDesired=_privateDataEncryptionMigrationDesired;
@property(readonly, nonatomic, getter=isPrivateDataEncryptionAllowed) _Bool privateDataEncryptionAllowed; // @synthesize privateDataEncryptionAllowed=_privateDataEncryptionAllowed;
@property(readonly, nonatomic) _Bool useSecureConnectionForAssets;
@property(readonly, nonatomic) NSArray *presubscribedFeedIDs;
@property(readonly, nonatomic) long long subscriptionsGlobalMeteredCount;
@property(readonly, nonatomic) long long savedArticlesMaximumCountCellular;
@property(readonly, nonatomic) long long savedArticlesMaximumCountWiFi;
@property(readonly, nonatomic) long long savedArticlesOpenedCutoffTime;
@property(readonly, nonatomic) long long savedArticlesCutoffTime;
@property(readonly, nonatomic) long long notificationEnabledChannelsRefreshFrequency;
@property(readonly, nonatomic) FCNotificationsConfiguration *notificationsConfig; // @synthesize notificationsConfig=_notificationsConfig;
@property(readonly, nonatomic, getter=isOrderFeedEndpointEnabled) _Bool orderFeedEndpointEnabled;
@property(readonly, nonatomic) long long trendingTopicsRefreshRate;
@property(readonly, nonatomic) long long appConfigRefreshRate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadWidgetConfiguration;
- (void)_loadDiscoverMoreVideosConfiguration;
- (void)_loadPrefetchConfiguration;
- (void)_loadiAdConfiguration;
- (void)_loadForYouGroupsConfiguration;
- (void)_loadTopStoriesConfiguration;
- (void)_loadNotificationsConfiguration;
- (void)_loadEndpointConfiguration;
- (void)_loadPrivateDataEncryptionConfiguration;
- (id)initWithConfigDictionary:(id)arg1 languageConfigDictionary:(id)arg2;
- (id)init;

@end

