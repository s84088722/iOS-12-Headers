//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCHeadline.h>

@class FCAssetManager, FCCoverArt, FCHeadlineThumbnail, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSDictionary, NSString, NSURL;
@protocol FCChannelProviding;

@interface FCNotificationArticleHeadline : FCHeadline
{
    _Bool _hasThumbnail;
    _Bool _sponsored;
    _Bool _deleted;
    _Bool _isDraft;
    _Bool _featureCandidate;
    _Bool _needsRapidUpdates;
    _Bool _showMinimalChrome;
    _Bool _boundToContext;
    _Bool _hiddenFromFeeds;
    _Bool _pressRelease;
    _Bool _hiddenFromAutoFavorites;
    _Bool _paid;
    _Bool _webEmbedsEnabled;
    NSString *_versionIdentifier;
    NSString *_identifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    unsigned long long _contentType;
    NSString *_title;
    NSString *_primaryAudience;
    NSDate *_publishDate;
    long long _publisherArticleVersion;
    long long _backendArticleVersion;
    id <FCChannelProviding> _sourceChannel;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topics;
    NSArray *_topicIDs;
    NSArray *_endOfArticleTopicIDs;
    NSURL *_videoURL;
    double _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    FCCoverArt *_coverArt;
    FCAssetManager *_assetManager;
    NSDictionary *_articlePayload;
    NSString *_flintDocumentUrlString;
    NSData *_flintDocumentPrefetchedData;
    NSArray *_flintFontResourceIDs;
    NSString *_changeEtag;
    struct CGRect _thumbnailFocalFrame;
}

@property(retain, nonatomic) NSString *changeEtag; // @synthesize changeEtag=_changeEtag;
@property(retain, nonatomic) NSArray *flintFontResourceIDs; // @synthesize flintFontResourceIDs=_flintFontResourceIDs;
@property(retain, nonatomic) NSData *flintDocumentPrefetchedData; // @synthesize flintDocumentPrefetchedData=_flintDocumentPrefetchedData;
@property(retain, nonatomic) NSString *flintDocumentUrlString; // @synthesize flintDocumentUrlString=_flintDocumentUrlString;
@property(retain, nonatomic) NSDictionary *articlePayload; // @synthesize articlePayload=_articlePayload;
@property(retain, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
- (_Bool)webEmbedsEnabled;
- (id)coverArt;
- (void)setPaid:(_Bool)arg1;
- (_Bool)isPaid;
- (long long)minimumNewsVersion;
- (_Bool)isHiddenFromAutoFavorites;
- (_Bool)isPressRelease;
- (_Bool)isHiddenFromFeeds;
- (_Bool)isBoundToContext;
- (_Bool)showMinimalChrome;
- (_Bool)needsRapidUpdates;
- (void)setStoryStyle:(id)arg1;
- (id)storyStyle;
- (void)setStoryType:(unsigned long long)arg1;
- (unsigned long long)storyType;
- (id)moreFromPublisherArticleIDs;
- (id)relatedArticleIDs;
- (_Bool)isFeatureCandidate;
- (id)allowedStorefrontIDs;
- (id)blockedStorefrontIDs;
- (_Bool)isDraft;
- (void)setDeleted:(_Bool)arg1;
- (_Bool)isDeleted;
- (id)iAdSectionIDs;
- (id)iAdKeywords;
- (id)iAdCategories;
- (void)setSponsored:(_Bool)arg1;
- (_Bool)isSponsored;
- (double)videoDuration;
- (id)videoURL;
- (id)endOfArticleTopicIDs;
- (void)setTopicIDs:(id)arg1;
- (id)topicIDs;
- (id)topics;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)contentURL;
- (id)accessoryText;
- (void)setShortExcerpt:(id)arg1;
- (id)shortExcerpt;
- (void)setThumbnailUltraHQ:(id)arg1;
- (id)thumbnailUltraHQ;
- (void)setThumbnailHQ:(id)arg1;
- (id)thumbnailHQ;
- (void)setThumbnailMedium:(id)arg1;
- (id)thumbnailMedium;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)setThumbnailLQ:(id)arg1;
- (id)thumbnailLQ;
- (void)setHasThumbnail:(_Bool)arg1;
- (_Bool)hasThumbnail;
- (void)setThumbnailFocalFrame:(struct CGRect)arg1;
- (struct CGRect)thumbnailFocalFrame;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
- (void)setSourceChannel:(id)arg1;
- (id)sourceChannel;
- (long long)backendArticleVersion;
- (long long)publisherArticleVersion;
- (void)setPublishDate:(id)arg1;
- (id)publishDate;
- (id)primaryAudience;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setContentType:(unsigned long long)arg1;
- (unsigned long long)contentType;
- (void)setClusterID:(id)arg1;
- (id)clusterID;
- (id)referencedArticleID;
- (void)setArticleID:(id)arg1;
- (id)articleID;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)versionIdentifier;
- (void).cxx_destruct;
- (id)generateFlintDocumentAssetHandleForUrlString:(id)arg1 prefetchedData:(id)arg2 withAssetManager:(id)arg3;
- (id)generateThumbnailAssetHandleForUrlString:(id)arg1 withAssetManager:(id)arg2;
- (_Bool)isValid;
- (id)contentManifestWithContext:(id)arg1;
- (id)initWithArticlePayload:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3 rapidUpdatesTimeout:(long long)arg4;

@end

