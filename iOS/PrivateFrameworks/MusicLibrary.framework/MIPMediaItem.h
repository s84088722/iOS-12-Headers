//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPMovie, MIPPodcast, MIPSong, MIPTVShow, NSMutableArray, NSString;

@interface MIPMediaItem : PBCodable <NSCopying>
{
    long long _accountId;
    long long _bookmarkTimeMilliseconds;
    long long _creationDateTime;
    long long _drmKey1IdCode;
    long long _drmKey2IdCode;
    long long _drmPlatformIdCode;
    long long _duration;
    long long _familyAccountId;
    long long _fileSize;
    long long _lastPlayedDateTime;
    long long _lastSkippedDateTime;
    long long _modificationDateTime;
    long long _purchaseDateTime;
    long long _purchaseHistoryId;
    long long _releaseDateTime;
    long long _sagaId;
    long long _storeId;
    long long _storePlaylistId;
    long long _storefrontId;
    long long _subscriptionStoreItemId;
    NSString *_artworkId;
    NSString *_chapterMetadataUrl;
    int _cloudMatchedStatus;
    int _cloudPlaybackEndpointType;
    int _cloudStatus;
    NSString *_cloudUniversalLibraryId;
    NSString *_comment;
    int _contentRating;
    int _contentRatingLevel;
    NSString *_copyright;
    int _drmVersionsCode;
    NSString *_extrasUrl;
    int _fileKind;
    NSString *_grouping;
    NSMutableArray *_libraryIdentifiers;
    int _likedState;
    NSString *_longDescription;
    int _mediaType;
    MIPMovie *_movie;
    int _playCount;
    int _playCountDelta;
    int _playbackEndpointType;
    MIPPodcast *_podcast;
    NSString *_purchaseHistoryRedownloadParams;
    int _purchaseHistoryToken;
    NSString *_sagaRedownloadParams;
    NSString *_secondaryArtworkId;
    int _secondaryArtworkSourceType;
    NSString *_shortDescription;
    int _skipCount;
    int _skipCountDelta;
    MIPSong *_song;
    NSString *_sortTitle;
    NSString *_storeAssetFlavor;
    int _storeProtectionType;
    NSString *_storeXID;
    NSString *_title;
    MIPTVShow *_tvShow;
    int _year;
    _Bool _cloudAssetAvailable;
    _Bool _explicitContent;
    _Bool _hasLocalAsset;
    _Bool _hidden;
    _Bool _inUsersCloudLibrary;
    _Bool _isInUsersLibrary;
    _Bool _likedStateChanged;
    _Bool _needsReporting;
    _Bool _rememberBookmark;
    _Bool _userDisabled;
    struct {
        unsigned int accountId:1;
        unsigned int bookmarkTimeMilliseconds:1;
        unsigned int creationDateTime:1;
        unsigned int drmKey1IdCode:1;
        unsigned int drmKey2IdCode:1;
        unsigned int drmPlatformIdCode:1;
        unsigned int duration:1;
        unsigned int familyAccountId:1;
        unsigned int fileSize:1;
        unsigned int lastPlayedDateTime:1;
        unsigned int lastSkippedDateTime:1;
        unsigned int modificationDateTime:1;
        unsigned int purchaseDateTime:1;
        unsigned int purchaseHistoryId:1;
        unsigned int releaseDateTime:1;
        unsigned int sagaId:1;
        unsigned int storeId:1;
        unsigned int storePlaylistId:1;
        unsigned int storefrontId:1;
        unsigned int subscriptionStoreItemId:1;
        unsigned int cloudMatchedStatus:1;
        unsigned int cloudPlaybackEndpointType:1;
        unsigned int cloudStatus:1;
        unsigned int contentRating:1;
        unsigned int contentRatingLevel:1;
        unsigned int drmVersionsCode:1;
        unsigned int fileKind:1;
        unsigned int likedState:1;
        unsigned int mediaType:1;
        unsigned int playCount:1;
        unsigned int playCountDelta:1;
        unsigned int playbackEndpointType:1;
        unsigned int purchaseHistoryToken:1;
        unsigned int secondaryArtworkSourceType:1;
        unsigned int skipCount:1;
        unsigned int skipCountDelta:1;
        unsigned int storeProtectionType:1;
        unsigned int year:1;
        unsigned int cloudAssetAvailable:1;
        unsigned int explicitContent:1;
        unsigned int hasLocalAsset:1;
        unsigned int hidden:1;
        unsigned int inUsersCloudLibrary:1;
        unsigned int isInUsersLibrary:1;
        unsigned int likedStateChanged:1;
        unsigned int needsReporting:1;
        unsigned int rememberBookmark:1;
        unsigned int userDisabled:1;
    } _has;
}

+ (Class)libraryIdentifiersType;
@property(retain, nonatomic) MIPPodcast *podcast; // @synthesize podcast=_podcast;
@property(retain, nonatomic) MIPTVShow *tvShow; // @synthesize tvShow=_tvShow;
@property(retain, nonatomic) MIPMovie *movie; // @synthesize movie=_movie;
@property(retain, nonatomic) MIPSong *song; // @synthesize song=_song;
@property(retain, nonatomic) NSString *cloudUniversalLibraryId; // @synthesize cloudUniversalLibraryId=_cloudUniversalLibraryId;
@property(nonatomic) long long subscriptionStoreItemId; // @synthesize subscriptionStoreItemId=_subscriptionStoreItemId;
@property(retain, nonatomic) NSString *storeXID; // @synthesize storeXID=_storeXID;
@property(retain, nonatomic) NSString *sagaRedownloadParams; // @synthesize sagaRedownloadParams=_sagaRedownloadParams;
@property(nonatomic) long long sagaId; // @synthesize sagaId=_sagaId;
@property(retain, nonatomic) NSString *purchaseHistoryRedownloadParams; // @synthesize purchaseHistoryRedownloadParams=_purchaseHistoryRedownloadParams;
@property(nonatomic) int purchaseHistoryToken; // @synthesize purchaseHistoryToken=_purchaseHistoryToken;
@property(nonatomic) long long purchaseHistoryId; // @synthesize purchaseHistoryId=_purchaseHistoryId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
@property(nonatomic) long long storefrontId; // @synthesize storefrontId=_storefrontId;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) NSMutableArray *libraryIdentifiers; // @synthesize libraryIdentifiers=_libraryIdentifiers;
@property(retain, nonatomic) NSString *secondaryArtworkId; // @synthesize secondaryArtworkId=_secondaryArtworkId;
@property(nonatomic) int secondaryArtworkSourceType; // @synthesize secondaryArtworkSourceType=_secondaryArtworkSourceType;
@property(nonatomic) _Bool inUsersCloudLibrary; // @synthesize inUsersCloudLibrary=_inUsersCloudLibrary;
@property(nonatomic) int cloudMatchedStatus; // @synthesize cloudMatchedStatus=_cloudMatchedStatus;
@property(nonatomic) int playbackEndpointType; // @synthesize playbackEndpointType=_playbackEndpointType;
@property(nonatomic) int cloudPlaybackEndpointType; // @synthesize cloudPlaybackEndpointType=_cloudPlaybackEndpointType;
@property(nonatomic) _Bool userDisabled; // @synthesize userDisabled=_userDisabled;
@property(nonatomic) int storeProtectionType; // @synthesize storeProtectionType=_storeProtectionType;
@property(nonatomic) _Bool cloudAssetAvailable; // @synthesize cloudAssetAvailable=_cloudAssetAvailable;
@property(nonatomic) _Bool isInUsersLibrary; // @synthesize isInUsersLibrary=_isInUsersLibrary;
@property(nonatomic) _Bool likedStateChanged; // @synthesize likedStateChanged=_likedStateChanged;
@property(nonatomic) _Bool needsReporting; // @synthesize needsReporting=_needsReporting;
@property(nonatomic) int likedState; // @synthesize likedState=_likedState;
@property(retain, nonatomic) NSString *grouping; // @synthesize grouping=_grouping;
@property(nonatomic) _Bool hasLocalAsset; // @synthesize hasLocalAsset=_hasLocalAsset;
@property(nonatomic) long long storePlaylistId; // @synthesize storePlaylistId=_storePlaylistId;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long bookmarkTimeMilliseconds; // @synthesize bookmarkTimeMilliseconds=_bookmarkTimeMilliseconds;
@property(nonatomic) _Bool rememberBookmark; // @synthesize rememberBookmark=_rememberBookmark;
@property(nonatomic) long long lastSkippedDateTime; // @synthesize lastSkippedDateTime=_lastSkippedDateTime;
@property(nonatomic) int skipCountDelta; // @synthesize skipCountDelta=_skipCountDelta;
@property(nonatomic) int skipCount; // @synthesize skipCount=_skipCount;
@property(nonatomic) long long lastPlayedDateTime; // @synthesize lastPlayedDateTime=_lastPlayedDateTime;
@property(nonatomic) int playCountDelta; // @synthesize playCountDelta=_playCountDelta;
@property(nonatomic) int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) int cloudStatus; // @synthesize cloudStatus=_cloudStatus;
@property(nonatomic) long long purchaseDateTime; // @synthesize purchaseDateTime=_purchaseDateTime;
@property(retain, nonatomic) NSString *extrasUrl; // @synthesize extrasUrl=_extrasUrl;
@property(retain, nonatomic) NSString *storeAssetFlavor; // @synthesize storeAssetFlavor=_storeAssetFlavor;
@property(retain, nonatomic) NSString *chapterMetadataUrl; // @synthesize chapterMetadataUrl=_chapterMetadataUrl;
@property(nonatomic) long long drmKey2IdCode; // @synthesize drmKey2IdCode=_drmKey2IdCode;
@property(nonatomic) long long drmKey1IdCode; // @synthesize drmKey1IdCode=_drmKey1IdCode;
@property(nonatomic) long long drmPlatformIdCode; // @synthesize drmPlatformIdCode=_drmPlatformIdCode;
@property(nonatomic) int drmVersionsCode; // @synthesize drmVersionsCode=_drmVersionsCode;
@property(nonatomic) long long familyAccountId; // @synthesize familyAccountId=_familyAccountId;
@property(nonatomic) int fileKind; // @synthesize fileKind=_fileKind;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) int contentRatingLevel; // @synthesize contentRatingLevel=_contentRatingLevel;
@property(nonatomic) int year; // @synthesize year=_year;
@property(retain, nonatomic) NSString *artworkId; // @synthesize artworkId=_artworkId;
@property(retain, nonatomic) NSString *copyright; // @synthesize copyright=_copyright;
@property(retain, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(retain, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(nonatomic) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(nonatomic) int contentRating; // @synthesize contentRating=_contentRating;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long modificationDateTime; // @synthesize modificationDateTime=_modificationDateTime;
@property(nonatomic) long long creationDateTime; // @synthesize creationDateTime=_creationDateTime;
@property(nonatomic) long long releaseDateTime; // @synthesize releaseDateTime=_releaseDateTime;
@property(retain, nonatomic) NSString *sortTitle; // @synthesize sortTitle=_sortTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
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
@property(readonly, nonatomic) _Bool hasPodcast;
@property(readonly, nonatomic) _Bool hasTvShow;
@property(readonly, nonatomic) _Bool hasMovie;
@property(readonly, nonatomic) _Bool hasSong;
@property(readonly, nonatomic) _Bool hasCloudUniversalLibraryId;
@property(nonatomic) _Bool hasSubscriptionStoreItemId;
@property(readonly, nonatomic) _Bool hasStoreXID;
@property(readonly, nonatomic) _Bool hasSagaRedownloadParams;
@property(nonatomic) _Bool hasSagaId;
@property(readonly, nonatomic) _Bool hasPurchaseHistoryRedownloadParams;
@property(nonatomic) _Bool hasPurchaseHistoryToken;
@property(nonatomic) _Bool hasPurchaseHistoryId;
@property(nonatomic) _Bool hasAccountId;
@property(nonatomic) _Bool hasStorefrontId;
@property(nonatomic) _Bool hasStoreId;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)libraryIdentifiersCount;
- (void)addLibraryIdentifiers:(id)arg1;
- (void)clearLibraryIdentifiers;
@property(readonly, nonatomic) _Bool hasSecondaryArtworkId;
@property(nonatomic) _Bool hasSecondaryArtworkSourceType;
@property(nonatomic) _Bool hasInUsersCloudLibrary;
@property(nonatomic) _Bool hasCloudMatchedStatus;
@property(nonatomic) _Bool hasPlaybackEndpointType;
@property(nonatomic) _Bool hasCloudPlaybackEndpointType;
@property(nonatomic) _Bool hasUserDisabled;
@property(nonatomic) _Bool hasStoreProtectionType;
@property(nonatomic) _Bool hasCloudAssetAvailable;
@property(nonatomic) _Bool hasIsInUsersLibrary;
@property(nonatomic) _Bool hasLikedStateChanged;
@property(nonatomic) _Bool hasNeedsReporting;
@property(nonatomic) _Bool hasLikedState;
@property(readonly, nonatomic) _Bool hasGrouping;
@property(nonatomic) _Bool hasHasLocalAsset;
@property(nonatomic) _Bool hasStorePlaylistId;
@property(nonatomic) _Bool hasHidden;
@property(nonatomic) _Bool hasBookmarkTimeMilliseconds;
@property(nonatomic) _Bool hasRememberBookmark;
@property(nonatomic) _Bool hasLastSkippedDateTime;
@property(nonatomic) _Bool hasSkipCountDelta;
@property(nonatomic) _Bool hasSkipCount;
@property(nonatomic) _Bool hasLastPlayedDateTime;
@property(nonatomic) _Bool hasPlayCountDelta;
@property(nonatomic) _Bool hasPlayCount;
@property(nonatomic) _Bool hasCloudStatus;
@property(nonatomic) _Bool hasPurchaseDateTime;
@property(readonly, nonatomic) _Bool hasExtrasUrl;
@property(readonly, nonatomic) _Bool hasStoreAssetFlavor;
@property(readonly, nonatomic) _Bool hasChapterMetadataUrl;
@property(nonatomic) _Bool hasDrmKey2IdCode;
@property(nonatomic) _Bool hasDrmKey1IdCode;
@property(nonatomic) _Bool hasDrmPlatformIdCode;
@property(nonatomic) _Bool hasDrmVersionsCode;
@property(nonatomic) _Bool hasFamilyAccountId;
@property(nonatomic) _Bool hasFileKind;
@property(readonly, nonatomic) _Bool hasComment;
@property(nonatomic) _Bool hasContentRatingLevel;
@property(nonatomic) _Bool hasYear;
@property(readonly, nonatomic) _Bool hasArtworkId;
@property(readonly, nonatomic) _Bool hasCopyright;
@property(readonly, nonatomic) _Bool hasLongDescription;
@property(readonly, nonatomic) _Bool hasShortDescription;
@property(nonatomic) _Bool hasExplicitContent;
@property(nonatomic) _Bool hasContentRating;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasFileSize;
@property(nonatomic) _Bool hasModificationDateTime;
@property(nonatomic) _Bool hasCreationDateTime;
@property(nonatomic) _Bool hasReleaseDateTime;
@property(readonly, nonatomic) _Bool hasSortTitle;
@property(readonly, nonatomic) _Bool hasTitle;
- (int)StringAsMediaType:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMediaType;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;

@end

